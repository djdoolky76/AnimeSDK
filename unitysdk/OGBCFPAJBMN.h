#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIKBMJBFOBG.h"
#include "unitysdk/RPG/Client/ContributionOwner.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFEOGBPMBFB.h"
#include "unitysdk/DEBHBAOHHII.h"
class KLEFGGIHGMI;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGBCFPAJBMN_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xBE4F730)
#define OGBCFPAJBMN_AGDEPMLOGEP_OFFSET UNITYSDK_OFFSET(0xBE50790)
#define OGBCFPAJBMN_CGIOIDFHDFE_OFFSET UNITYSDK_OFFSET(0xBE4FB00)
#define OGBCFPAJBMN_CTOR_OFFSET UNITYSDK_OFFSET(0xBE50820)
#define OGBCFPAJBMN_EPLKCEEFKFC_OFFSET UNITYSDK_OFFSET(0xBE4F910)
#define OGBCFPAJBMN_GHEJHGNGIJH_OFFSET UNITYSDK_OFFSET(0xBE4FB50)
#define OGBCFPAJBMN_LELDPIAGFAP_OFFSET UNITYSDK_OFFSET(0xBE50620)
#define OGBCFPAJBMN_MDCGDALNONA_OFFSET UNITYSDK_OFFSET(0xBE4F610)
#define OGBCFPAJBMN_NIFJLDDNHJJ_OFFSET UNITYSDK_OFFSET(0xBE50300)
#define OGBCFPAJBMN_NNKNIJOEGOH_OFFSET UNITYSDK_OFFSET(0xBE4FA50)
#define OGBCFPAJBMN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBE4F090)
#define OGBCFPAJBMN_PLMOJINBMLK_OFFSET UNITYSDK_OFFSET(0xBE4F250)

	class OGBCFPAJBMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* MICJNDAAKOP; // 0x10
		::System::Collections::Generic::HashSet_1<::KLEFGGIHGMI*>* EEJKHGBOAGA; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Int32>* GPIPPHBFGEF; // 0x20
		::System::Collections::Generic::List_1<::DIKBMJBFOBG>* NKPNJKGBNCL; // 0x28
		::System::Collections::Generic::Dictionary_2<::KLEFGGIHGMI*, ::System::Object*>* AHNJBFFFHNA; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void PLMOJINBMLK(::KLEFGGIHGMI* a1, ::DIKBMJBFOBG a2, ::DEBHBAOHHII a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::DIKBMJBFOBG, ::DEBHBAOHHII))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_PLMOJINBMLK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AALCFBOGFKP(::KLEFGGIHGMI* a1, ::DIKBMJBFOBG a2)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::DIKBMJBFOBG))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_AALCFBOGFKP_OFFSET))(this, a1, a2);
		}

		::System::Boolean NNKNIJOEGOH(::RPG::Client::ContributionOwner a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ContributionOwner, ::System::Int32))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_NNKNIJOEGOH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GHEJHGNGIJH(::RPG::Client::ContributionOwner a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ContributionOwner, ::System::Int32))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_GHEJHGNGIJH_OFFSET))(this, a1, a2);
		}

		static ::System::Int64 CGIOIDFHDFE(::RPG::Client::ContributionOwner a1, ::System::Int32 a2)
		{
			return ((::System::Int64(*)(::RPG::Client::ContributionOwner, ::System::Int32))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_CGIOIDFHDFE_OFFSET))(a1, a2);
		}

		::System::Void MDCGDALNONA(::DIKBMJBFOBG a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIKBMJBFOBG))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_MDCGDALNONA_OFFSET))(this, a1);
		}

		::System::Void EPLKCEEFKFC(::DIKBMJBFOBG a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIKBMJBFOBG))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_EPLKCEEFKFC_OFFSET))(this, a1);
		}

		::System::Void NIFJLDDNHJJ(::KLEFGGIHGMI* a1, ::System::Collections::Generic::List_1<::BFEOGBPMBFB>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::System::Collections::Generic::List_1<::BFEOGBPMBFB>*))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_NIFJLDDNHJJ_OFFSET))(this, a1, a2);
		}

		::System::Void LELDPIAGFAP(::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::KLEFGGIHGMI*>*))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_LELDPIAGFAP_OFFSET))(this, a1);
		}

		::System::Void AGDEPMLOGEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGBCFPAJBMN_AGDEPMLOGEP_OFFSET))(this);
		}

	};
