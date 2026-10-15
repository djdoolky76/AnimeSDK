#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/RPG/GameCore/EAilmentStateType.h"
#include "unitysdk/System/Object.h"

#define GHHIAGDFMMN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A1EBE0)
#define GHHIAGDFMMN_DNCPOOICCAK_OFFSET UNITYSDK_OFFSET(0x15A1EC60)
#define GHHIAGDFMMN_GET_HITSTATEOVERRIDEANIMHASH_OFFSET UNITYSDK_OFFSET(0x15A1ED30)
#define GHHIAGDFMMN_GET_HITSTATEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x15A1ED10)
#define GHHIAGDFMMN_GET_IDLESTATEREDIRECT_OFFSET UNITYSDK_OFFSET(0x15A1ECF0)
#define GHHIAGDFMMN_GET_PLAYHITANIM_OFFSET UNITYSDK_OFFSET(0x15A1ED50)
#define GHHIAGDFMMN_JLOGJJDGKMI_OFFSET UNITYSDK_OFFSET(0x15A1ECB0)
#define GHHIAGDFMMN_PCMPBABHPGD_OFFSET UNITYSDK_OFFSET(0x15A1EC00)
#define GHHIAGDFMMN_SET_HITSTATEOVERRIDEANIMHASH_OFFSET UNITYSDK_OFFSET(0x15A1ED40)
#define GHHIAGDFMMN_SET_HITSTATEOVERRIDE_OFFSET UNITYSDK_OFFSET(0x15A1ED20)
#define GHHIAGDFMMN_SET_IDLESTATEREDIRECT_OFFSET UNITYSDK_OFFSET(0x15A1ED00)
#define GHHIAGDFMMN_SET_PLAYHITANIM_OFFSET UNITYSDK_OFFSET(0x15A1ED60)

	class GHHIAGDFMMN : public ::System::Object
	{
	public:
		::System::Boolean _PlayHitAnim_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AdventureAnimStateType _IdleStateRedirect_k__BackingField; // 0x14
		::System::Int32 _HitStateOverrideAnimHash_k__BackingField; // 0x18
		::RPG::GameCore::EAilmentStateType _HitStateOverride_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_CTOR_OFFSET))(this);
		}

		::System::Void PCMPBABHPGD(::RPG::GameCore::EAilmentStateType a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EAilmentStateType, ::System::Int32))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_PCMPBABHPGD_OFFSET))(this, a1, a2);
		}

		::System::Void DNCPOOICCAK(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_DNCPOOICCAK_OFFSET))(this, a1);
		}

		::System::Void JLOGJJDGKMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_JLOGJJDGKMI_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAnimStateType get_IdleStateRedirect()
		{
			return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_GET_IDLESTATEREDIRECT_OFFSET))(this);
		}

		::System::Void set_IdleStateRedirect(::RPG::GameCore::AdventureAnimStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_SET_IDLESTATEREDIRECT_OFFSET))(this, a1);
		}

		::RPG::GameCore::EAilmentStateType get_HitStateOverride()
		{
			return ((::RPG::GameCore::EAilmentStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_GET_HITSTATEOVERRIDE_OFFSET))(this);
		}

		::System::Void set_HitStateOverride(::RPG::GameCore::EAilmentStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EAilmentStateType))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_SET_HITSTATEOVERRIDE_OFFSET))(this, a1);
		}

		::System::Int32 get_HitStateOverrideAnimHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_GET_HITSTATEOVERRIDEANIMHASH_OFFSET))(this);
		}

		::System::Void set_HitStateOverrideAnimHash(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_SET_HITSTATEOVERRIDEANIMHASH_OFFSET))(this, a1);
		}

		::System::Boolean get_PlayHitAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_GET_PLAYHITANIM_OFFSET))(this);
		}

		::System::Void set_PlayHitAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHHIAGDFMMN_SET_PLAYHITANIM_OFFSET))(this, a1);
		}

	};
