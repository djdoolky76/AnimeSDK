#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MAFLMGNLFNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB84C7A0)
#define MAFLMGNLFNA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB84C6A0)
#define MAFLMGNLFNA_HOAAFLKILJL_OFFSET UNITYSDK_OFFSET(0xB84C6C0)
#define MAFLMGNLFNA_MJEKFMOJPJJ_OFFSET UNITYSDK_OFFSET(0xB84C730)
#define MAFLMGNLFNA_OLGDCGGNABH_OFFSET UNITYSDK_OFFSET(0xB84C650)
#define MAFLMGNLFNA_SET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xB84C6B0)

inline static constexpr unsigned int MAFLMGNLFNA_TypeDefinitionIndex = 72100;

	class MAFLMGNLFNA : public ::System::Object
	{
	public:
		::RPG::GameCore::AttackDamageType _DamageType_k__BackingField; // 0x10
		// static const ::System::String* AIJHCIALLEJ; // 0x0
		// static const ::System::String* LGJFGLBHJAN; // 0x0
		// static const ::System::String* CLHAAOAGIEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGNLFNA_CTOR_OFFSET))(this);
		}

		::System::Void OLGDCGGNABH(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MAFLMGNLFNA_OLGDCGGNABH_OFFSET))(this, a1);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGNLFNA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Void set_DamageType(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + MAFLMGNLFNA_SET_DAMAGETYPE_OFFSET))(this, a1);
		}

		::System::String* HOAAFLKILJL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGNLFNA_HOAAFLKILJL_OFFSET))(this);
		}

		::System::String* MJEKFMOJPJJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFLMGNLFNA_MJEKFMOJPJJ_OFFSET))(this);
		}

	};
