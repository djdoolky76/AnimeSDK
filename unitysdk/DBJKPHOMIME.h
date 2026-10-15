#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;
class DBJKPHOMIME;

#define DBJKPHOMIME_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE2285E0)
#define DBJKPHOMIME_CTOR_OFFSET UNITYSDK_OFFSET(0xE228670)
#define DBJKPHOMIME_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE2285A0)
#define DBJKPHOMIME_GET_PREFDESC_OFFSET UNITYSDK_OFFSET(0xE2285C0)
#define DBJKPHOMIME_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE2285B0)
#define DBJKPHOMIME_SET_PREFDESC_OFFSET UNITYSDK_OFFSET(0xE2285D0)

	class DBJKPHOMIME : public ::System::Object
	{
	public:
		::BCFAKEGJPKN* _Config_k__BackingField; // 0x10
		::RPG::Client::TextID _PrefDesc_k__BackingField; // 0x18
		::System::Void _ctor(::BCFAKEGJPKN* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCFAKEGJPKN*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DBJKPHOMIME_CTOR_OFFSET))(this, a1, a2);
		}

		::BCFAKEGJPKN* get_Config()
		{
			return ((::BCFAKEGJPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJKPHOMIME_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::BCFAKEGJPKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCFAKEGJPKN*))((::PBYTE)hIl2Cpp + DBJKPHOMIME_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PrefDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJKPHOMIME_GET_PREFDESC_OFFSET))(this);
		}

		::System::Void set_PrefDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DBJKPHOMIME_SET_PREFDESC_OFFSET))(this, a1);
		}

		static ::DBJKPHOMIME* BPLPBPMEODA(::BCFAKEGJPKN* a1, ::RPG::Client::TextID a2)
		{
			return ((::DBJKPHOMIME*(*)(::BCFAKEGJPKN*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DBJKPHOMIME_BPLPBPMEODA_OFFSET))(a1, a2);
		}

	};
