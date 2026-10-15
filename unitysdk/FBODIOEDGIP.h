#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBODIOEDGIP;
class FFCGHKGDAJF;
class GIJPBMMNJKO;
class INBJBBGLCKJ;
class IOEPMPAKMOK;
class MFBOKDKKHBJ;
namespace RPG::Client::NavMap { class ITrackPointInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBODIOEDGIP_ACLIAMNINIC_OFFSET UNITYSDK_OFFSET(0x156A9890)
#define FBODIOEDGIP_BMIALNOEEFM_OFFSET UNITYSDK_OFFSET(0x156AAB70)
#define FBODIOEDGIP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x156A97B0)
#define FBODIOEDGIP_CTOR_OFFSET UNITYSDK_OFFSET(0x156A9820)
#define FBODIOEDGIP_DCKGHMBOAFH_OFFSET UNITYSDK_OFFSET(0x156AA200)
#define FBODIOEDGIP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156A9830)
#define FBODIOEDGIP_GPKCPNIPALL_OFFSET UNITYSDK_OFFSET(0x156AA510)
#define FBODIOEDGIP_HFOMMFIEJME_1_OFFSET UNITYSDK_OFFSET(0x156AA5A0)
#define FBODIOEDGIP_HFOMMFIEJME_OFFSET UNITYSDK_OFFSET(0x156A9B90)
#define FBODIOEDGIP_PNCINIIPOMC_OFFSET UNITYSDK_OFFSET(0x156A99E0)

	class FBODIOEDGIP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FAPNLBCGHKK; // 0x10
		::GIJPBMMNJKO* CFOALBILADI; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* CBCGKAOOMAI; // 0x20
		::GIJPBMMNJKO* IGLMHBKIPBD; // 0x28
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBODIOEDGIP_CTOR_OFFSET))(this);
		}

		static ::FBODIOEDGIP* BPLPBPMEODA(::FFCGHKGDAJF* a1)
		{
			return ((::FBODIOEDGIP*(*)(::FFCGHKGDAJF*))((::PBYTE)hIl2Cpp + FBODIOEDGIP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBODIOEDGIP_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::NavMap::ITrackPointInfo* PNCINIIPOMC(::RPG::Client::NavMap::ITrackPointInfo* a1)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + FBODIOEDGIP_PNCINIIPOMC_OFFSET))(this, a1);
		}

		::System::Single GPKCPNIPALL(::RPG::Client::NavMap::ITrackPointInfo* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*))((::PBYTE)hIl2Cpp + FBODIOEDGIP_GPKCPNIPALL_OFFSET))(this, a1);
		}

		::System::Boolean HFOMMFIEJME(::RPG::Client::NavMap::ITrackPointInfo* a1, ::MFBOKDKKHBJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::ITrackPointInfo*, ::MFBOKDKKHBJ*))((::PBYTE)hIl2Cpp + FBODIOEDGIP_HFOMMFIEJME_OFFSET))(this, a1, a2);
		}

		::MFBOKDKKHBJ* HFOMMFIEJME_1(::INBJBBGLCKJ* a1, ::IOEPMPAKMOK* a2, ::INBJBBGLCKJ* a3, ::IOEPMPAKMOK* a4)
		{
			return ((::MFBOKDKKHBJ*(*)(::PVOID, ::INBJBBGLCKJ*, ::IOEPMPAKMOK*, ::INBJBBGLCKJ*, ::IOEPMPAKMOK*))((::PBYTE)hIl2Cpp + FBODIOEDGIP_HFOMMFIEJME_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::NavMap::ITrackPointInfo* DCKGHMBOAFH(::MFBOKDKKHBJ* a1)
		{
			return ((::RPG::Client::NavMap::ITrackPointInfo*(*)(::PVOID, ::MFBOKDKKHBJ*))((::PBYTE)hIl2Cpp + FBODIOEDGIP_DCKGHMBOAFH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* BMIALNOEEFM(::GIJPBMMNJKO* a1, ::IOEPMPAKMOK* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::GIJPBMMNJKO*, ::IOEPMPAKMOK*, ::System::Boolean))((::PBYTE)hIl2Cpp + FBODIOEDGIP_BMIALNOEEFM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACLIAMNINIC(::GIJPBMMNJKO* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GIJPBMMNJKO*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FBODIOEDGIP_ACLIAMNINIC_OFFSET))(this, a1, a2);
		}

	};
