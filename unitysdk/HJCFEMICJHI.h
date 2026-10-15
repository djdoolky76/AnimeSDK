#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class BaseSpEquipInventoryDisplayData; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJCFEMICJHI_AHMDGKINKML_OFFSET UNITYSDK_OFFSET(0x15CF7720)
#define HJCFEMICJHI_BDJINPHIJIO_OFFSET UNITYSDK_OFFSET(0x15CF7B90)
#define HJCFEMICJHI_CNIAMENELDD_OFFSET UNITYSDK_OFFSET(0x15CF7A10)
#define HJCFEMICJHI_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF75C0)
#define HJCFEMICJHI_KALLNOPDLHC_OFFSET UNITYSDK_OFFSET(0x15CF7C60)
#define HJCFEMICJHI_NDOEMEGBMDC_OFFSET UNITYSDK_OFFSET(0x15CF7900)
#define HJCFEMICJHI_OALPEFEJIJN_OFFSET UNITYSDK_OFFSET(0x15CF7630)
#define HJCFEMICJHI_PGALHCIDLHC_OFFSET UNITYSDK_OFFSET(0x15CF77C0)

inline static constexpr unsigned int HJCFEMICJHI_TypeDefinitionIndex = 75230;

	class HJCFEMICJHI : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::SpecialEquip* AFOBIFOCBMD; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::SpecialEquip*>* PEHEIFFLILI; // 0x18
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
