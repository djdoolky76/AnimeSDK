#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SmartObjectPlayMode.h"
#include "unitysdk/RPG/GameCore/SmartObjectState.h"
#include "unitysdk/System/Object.h"
class CJAMHAJOJEA;
class MIIMLLDIGNL;
namespace RPG::GameCore { class LevelSmartObjectSlotInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHDHBNBJPJF_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xC23BAC0)
#define PHDHBNBJPJF_CDFLBJGENDB_OFFSET UNITYSDK_OFFSET(0xC23B690)
#define PHDHBNBJPJF_CKDLDILEIEO_OFFSET UNITYSDK_OFFSET(0xC23B6E0)
#define PHDHBNBJPJF_CTOR_OFFSET UNITYSDK_OFFSET(0xC23B310)
#define PHDHBNBJPJF_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xC23B7E0)
#define PHDHBNBJPJF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC23B4B0)
#define PHDHBNBJPJF_DNPIDGKLHOB_OFFSET UNITYSDK_OFFSET(0xC23B730)
#define PHDHBNBJPJF_FBOEAEFBAPG_OFFSET UNITYSDK_OFFSET(0xC23BAE0)
#define PHDHBNBJPJF_HEHJAJFJJMP_OFFSET UNITYSDK_OFFSET(0xC23BAD0)
#define PHDHBNBJPJF_JCFBHIFFDGM_OFFSET UNITYSDK_OFFSET(0xC23B640)
#define PHDHBNBJPJF_KPHNKKLOFLL_OFFSET UNITYSDK_OFFSET(0xC23B9F0)
#define PHDHBNBJPJF_LDCGNGDPGAM_OFFSET UNITYSDK_OFFSET(0xC23B790)
#define PHDHBNBJPJF_LJELPFAKDFM_OFFSET UNITYSDK_OFFSET(0xC23B880)
#define PHDHBNBJPJF_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0xC23B830)
#define PHDHBNBJPJF_NAGFOIPFOPG_OFFSET UNITYSDK_OFFSET(0xC23BA80)

	class PHDHBNBJPJF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MIIMLLDIGNL*>* EJJJMLPECEJ; // 0x10
		::CJAMHAJOJEA* MGOIAFLFOFO; // 0x18
		::RPG::GameCore::SmartObjectPlayMode OECIFBNPCOE; // 0x20
		::RPG::GameCore::SmartObjectState DLNIGFGLPLJ; // 0x24
		::System::Void _ctor(::RPG::GameCore::LevelSmartObjectSlotInfo* a1, ::CJAMHAJOJEA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectSlotInfo*, ::CJAMHAJOJEA*))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_DISPOSE_OFFSET))(this);
		}

		::System::Boolean JCFBHIFFDGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_JCFBHIFFDGM_OFFSET))(this);
		}

		::System::Boolean CDFLBJGENDB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_CDFLBJGENDB_OFFSET))(this);
		}

		::System::Boolean CKDLDILEIEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_CKDLDILEIEO_OFFSET))(this);
		}

		::System::Boolean DNPIDGKLHOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_DNPIDGKLHOB_OFFSET))(this);
		}

		::System::Void LDCGNGDPGAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_LDCGNGDPGAM_OFFSET))(this);
		}

		::System::Void DHFBDMHFNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_DHFBDMHFNIK_OFFSET))(this);
		}

		::System::Void MOKNCFJICIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_MOKNCFJICIC_OFFSET))(this);
		}

		::System::UInt32 LJELPFAKDFM(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_LJELPFAKDFM_OFFSET))(this, a1);
		}

		::MIIMLLDIGNL* KPHNKKLOFLL(::System::UInt32 a1)
		{
			return ((::MIIMLLDIGNL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_KPHNKKLOFLL_OFFSET))(this, a1);
		}

		::System::UInt32 NAGFOIPFOPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_NAGFOIPFOPG_OFFSET))(this);
		}

		::RPG::GameCore::SmartObjectState BGDKFHEBDFJ()
		{
			return ((::RPG::GameCore::SmartObjectState(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void HEHJAJFJJMP(::RPG::GameCore::SmartObjectState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SmartObjectState))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_HEHJAJFJJMP_OFFSET))(this, a1);
		}

		::CJAMHAJOJEA* FBOEAEFBAPG()
		{
			return ((::CJAMHAJOJEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDHBNBJPJF_FBOEAEFBAPG_OFFSET))(this);
		}

	};
