#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Tunnel_Big_Doors_02_Locked_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tunnel_Big_Doors_02_Locked.BP_Tunnel_Big_Doors_02_Locked_C
// 0x0008 (0x03F8 - 0x03F0)
class ABP_Tunnel_Big_Doors_02_Locked_C : public ADoubleSlidingDoorStatic
{
public:
	class UStaticMeshComponent*                        SM_Tunnel_Big_Door_Frame_01;                              // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Tunnel_Big_Doors_02_Locked.BP_Tunnel_Big_Doors_02_Locked_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
