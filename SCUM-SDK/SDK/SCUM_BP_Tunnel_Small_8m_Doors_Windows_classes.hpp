#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_BP_Tunnel_Small_8m_Doors_Windows_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Tunnel_Small_8m_Doors_Windows.BP_Tunnel_Small_8m_Doors_Windows_C
// 0x0028 (0x0340 - 0x0318)
class ABP_Tunnel_Small_8m_Doors_Windows_C : public AActor
{
public:
	class UChildActorComponent*                        SphereReflectionCapture;                                  // 0x0318(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UChildActorComponent*                        BP_Tunnel_Light;                                          // 0x0320(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        SM_Tunnel_Lamp_02;                                        // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshComponent0;                                     // 0x0330(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             SharedRoot;                                               // 0x0338(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_Tunnel_Small_8m_Doors_Windows.BP_Tunnel_Small_8m_Doors_Windows_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
