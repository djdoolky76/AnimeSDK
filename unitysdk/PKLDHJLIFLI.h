#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class BaseSpEquipInventoryDisplayData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }

#define PKLDHJLIFLI_AHMDGKINKML_OFFSET UNITYSDK_OFFSET(0xC2D0CA0)
#define PKLDHJLIFLI_BDJINPHIJIO_OFFSET UNITYSDK_OFFSET(0xC2D0D70)
#define PKLDHJLIFLI_CTOR_OFFSET UNITYSDK_OFFSET(0xC2D0C90)
#define PKLDHJLIFLI_KALLNOPDLHC_OFFSET UNITYSDK_OFFSET(0xC2D0E40)

	class PKLDHJLIFLI : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpecialEquip* AFOBIFOCBMD; // 0x10
		::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* GLBBINMGMDL; // 0x18
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + PKLDHJLIFLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void AHMDGKINKML(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + PKLDHJLIFLI_AHMDGKINKML_OFFSET))(this, a1);
		}

		::System::Void BDJINPHIJIO(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + PKLDHJLIFLI_BDJINPHIJIO_OFFSET))(this, a1);
		}

		::System::Boolean KALLNOPDLHC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKLDHJLIFLI_KALLNOPDLHC_OFFSET))(this, a1);
		}

	};
