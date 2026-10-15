#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/ChapterRecordUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBMDCFONPMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB318540)
#define KBMDCFONPMP_DHCBMAOCNBC_OFFSET UNITYSDK_OFFSET(0xB318690)
#define KBMDCFONPMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3185D0)
#define KBMDCFONPMP_DNEIJOHLMHC_OFFSET UNITYSDK_OFFSET(0xB31A360)
#define KBMDCFONPMP_GEOLIDLNLFC_OFFSET UNITYSDK_OFFSET(0xB319420)
#define KBMDCFONPMP_GHBLCPJPBEP_OFFSET UNITYSDK_OFFSET(0xB319BE0)
#define KBMDCFONPMP_IMCBADDPGDD_OFFSET UNITYSDK_OFFSET(0xB3187F0)
#define KBMDCFONPMP_JKLCCNCEOAL_OFFSET UNITYSDK_OFFSET(0xB318A30)
#define KBMDCFONPMP_NPANABFMPME_OFFSET UNITYSDK_OFFSET(0xB31A280)
#define KBMDCFONPMP___ASYNCREQUESTGETMOSTPARTICIPATEDAVATARS_B__8_0_OFFSET UNITYSDK_OFFSET(0xB31A4C0)

inline static constexpr unsigned int KBMDCFONPMP_TypeDefinitionIndex = 75319;

	class KBMDCFONPMP : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Collections::Generic::List_1<::System::UInt32>*>* HMBCMFGJNIM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMDCFONPMP_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMDCFONPMP_DISPOSE_OFFSET))(this);
		}

		::System::Void DHCBMAOCNBC(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KBMDCFONPMP_DHCBMAOCNBC_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* JKLCCNCEOAL(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + KBMDCFONPMP_JKLCCNCEOAL_OFFSET))(this, a1);
		}

		::System::Void GEOLIDLNLFC(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*))((::PBYTE)hIl2Cpp + KBMDCFONPMP_GEOLIDLNLFC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean NPANABFMPME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMDCFONPMP_NPANABFMPME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* GHBLCPJPBEP(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::ChapterRecordUiData>*))((::PBYTE)hIl2Cpp + KBMDCFONPMP_GHBLCPJPBEP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::UInt32>*>* IMCBADDPGDD()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMDCFONPMP_IMCBADDPGDD_OFFSET))(this);
		}

		::System::Void DNEIJOHLMHC(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + KBMDCFONPMP_DNEIJOHLMHC_OFFSET))(this, a1, a2);
		}

		::System::Void __AsyncRequestGetMostParticipatedAvatars_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMDCFONPMP___ASYNCREQUESTGETMOSTPARTICIPATEDAVATARS_B__8_0_OFFSET))(this);
		}

	};
