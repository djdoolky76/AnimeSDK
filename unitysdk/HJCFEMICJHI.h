#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class BaseSpEquipInventoryDisplayData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJCFEMICJHI_AHMDGKINKML_OFFSET UNITYSDK_OFFSET(0x15D041B0)
#define HJCFEMICJHI_BDJINPHIJIO_OFFSET UNITYSDK_OFFSET(0x15D04620)
#define HJCFEMICJHI_CNIAMENELDD_OFFSET UNITYSDK_OFFSET(0x15D044A0)
#define HJCFEMICJHI_CTOR_OFFSET UNITYSDK_OFFSET(0x15D04050)
#define HJCFEMICJHI_KALLNOPDLHC_OFFSET UNITYSDK_OFFSET(0x15D046F0)
#define HJCFEMICJHI_NDOEMEGBMDC_OFFSET UNITYSDK_OFFSET(0x15D04390)
#define HJCFEMICJHI_OALPEFEJIJN_OFFSET UNITYSDK_OFFSET(0x15D040C0)
#define HJCFEMICJHI_PGALHCIDLHC_OFFSET UNITYSDK_OFFSET(0x15D04250)

	class HJCFEMICJHI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* PEHEIFFLILI; // 0x10
		::RPG::Client::ActivityIdleLive::SpecialEquip* AFOBIFOCBMD; // 0x18
		::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* GLBBINMGMDL; // 0x20
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::BaseSpEquipInventoryDisplayData*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + HJCFEMICJHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OALPEFEJIJN(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>*))((::PBYTE)hIl2Cpp + HJCFEMICJHI_OALPEFEJIJN_OFFSET))(this, a1);
		}

		::System::Void AHMDGKINKML(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + HJCFEMICJHI_AHMDGKINKML_OFFSET))(this, a1);
		}

		::System::Void PGALHCIDLHC(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + HJCFEMICJHI_PGALHCIDLHC_OFFSET))(this, a1);
		}

		::System::Void NDOEMEGBMDC(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + HJCFEMICJHI_NDOEMEGBMDC_OFFSET))(this, a1);
		}

		::System::Void CNIAMENELDD(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + HJCFEMICJHI_CNIAMENELDD_OFFSET))(this, a1);
		}

		::System::Void BDJINPHIJIO(::RPG::Client::ActivityIdleLive::SpecialEquip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + HJCFEMICJHI_BDJINPHIJIO_OFFSET))(this, a1);
		}

		::System::Boolean KALLNOPDLHC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJCFEMICJHI_KALLNOPDLHC_OFFSET))(this, a1);
		}

	};
