#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOAJKNKDAOD;
namespace RPG::Client { class ActivityBenefitV2Round; }
namespace RPG::Client { class ScheduleTask; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMEKHCELADI_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xC318E40)
#define PMEKHCELADI_CTOR_OFFSET UNITYSDK_OFFSET(0xC3192D0)
#define PMEKHCELADI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC3187A0)
#define PMEKHCELADI_KOIMBAMCMJC_OFFSET UNITYSDK_OFFSET(0xC318170)
#define PMEKHCELADI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC3181B0)
#define PMEKHCELADI_MKJOFNBDCKH_OFFSET UNITYSDK_OFFSET(0xC318AD0)

	class PMEKHCELADI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ScheduleTask*>* BMMCEEADIAJ; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* JJACEJGDPAK; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityBenefitV2Round*>* JBMFDPFFBGC; // 0x20
		::System::UInt32 NFLNCFNGOAD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEKHCELADI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityBenefitV2Round*>* KOIMBAMCMJC()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityBenefitV2Round*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEKHCELADI_KOIMBAMCMJC_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PMEKHCELADI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEKHCELADI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void MKJOFNBDCKH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMEKHCELADI_MKJOFNBDCKH_OFFSET))(this, a1);
		}

		::System::Void ALJIOCDBMKO(::EOAJKNKDAOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOAJKNKDAOD*))((::PBYTE)hIl2Cpp + PMEKHCELADI_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
