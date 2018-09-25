#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_E_1H_Small_Axe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass E_1H_Small_Axe.E_1H_Small_Axe_C
// 0x0010 (0x07D0 - 0x07C0)
class AE_1H_Small_Axe_C : public AWeaponItem
{
public:
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule1;                             // 0x07C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UMeleeAttackCollisionCapsule*                MeleeAttackCollisionCapsule;                              // 0x07C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass E_1H_Small_Axe.E_1H_Small_Axe_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif