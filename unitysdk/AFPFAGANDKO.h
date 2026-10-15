#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOGCOHFLPOH.h"
#include "unitysdk/FICODKNICLL.h"
#include "unitysdk/NCHDFGJBFPN.h"
#include "unitysdk/PAOIIOIGCOJ.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMJCKPHKIMP;
class FCLMONFLHFP;
class HDKJJLANJIN;
class HMNMEELOLKK;
class KMPPPEBNIBC;
class LJFHKAJPFNE;
namespace RPG::Client::OpenWorld { template <typename T1, typename T2> class TriggerShapeController_2; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFPFAGANDKO_BIFFJLHIHKC_OFFSET UNITYSDK_OFFSET(0xCF22CE0)
#define AFPFAGANDKO_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF22EF0)
#define AFPFAGANDKO_CFDHLHLHMAP_OFFSET UNITYSDK_OFFSET(0xCF20FB0)
#define AFPFAGANDKO_CLOJCFAIDEJ_OFFSET UNITYSDK_OFFSET(0xCF220D0)
#define AFPFAGANDKO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF212F0)
#define AFPFAGANDKO_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xCF223D0)
#define AFPFAGANDKO_EPAJBPKGFFC_1_OFFSET UNITYSDK_OFFSET(0xCF20C00)
#define AFPFAGANDKO_EPAJBPKGFFC_OFFSET UNITYSDK_OFFSET(0xCF208F0)
#define AFPFAGANDKO_GKGJMBPOICJ_OFFSET UNITYSDK_OFFSET(0xCF21110)
#define AFPFAGANDKO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCF21D80)
#define AFPFAGANDKO_HCPCMLNKJIN_OFFSET UNITYSDK_OFFSET(0xCF215E0)
#define AFPFAGANDKO_JGGPNCDOKGI_OFFSET UNITYSDK_OFFSET(0xCF21DD0)
#define AFPFAGANDKO_KFPPAHCGBBL_OFFSET UNITYSDK_OFFSET(0xCF21BA0)
#define AFPFAGANDKO_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xCF21ED0)
#define AFPFAGANDKO_LFLPHFGPMOE_OFFSET UNITYSDK_OFFSET(0xCF217B0)
#define AFPFAGANDKO_MAKJJCDMONP_OFFSET UNITYSDK_OFFSET(0xCF21450)
#define AFPFAGANDKO_MEIJKLJPPKL_OFFSET UNITYSDK_OFFSET(0xCF219A0)
#define AFPFAGANDKO_OJOCLGKECCD_OFFSET UNITYSDK_OFFSET(0xCF22E00)
#define AFPFAGANDKO_OLMHPNPIJCP_OFFSET UNITYSDK_OFFSET(0xCF20A60)

inline static constexpr unsigned int AFPFAGANDKO_TypeDefinitionIndex = 73958;

	class AFPFAGANDKO : public ::PAOIIOIGCOJ
	{
	public:
		::System::Collections::Generic::List_1<::HDKJJLANJIN*>* FEKJHAMIJOB; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* IAJHHEGGELA; // 0x20
		::System::Collections::Generic::List_1<::BMJCKPHKIMP*>* PFNPFIAFFEO; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::DOGCOHFLPOH>*>* LONMCNAIMLH; // 0x30
		::RPG::Client::OpenWorld::TriggerShapeController_2<::NCHDFGJBFPN, ::KMPPPEBNIBC*>* CLCKENOEABO; // 0x38
		::RPG::Client::OpenWorld::TriggerShapeController_2<::FICODKNICLL, ::HMNMEELOLKK*>* GOGDAABPGDB; // 0x40
		::System::Collections::Generic::List_1<::FCLMONFLHFP*>* BJDHDFLEDLB; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::DOGCOHFLPOH>*>* MHEPAHBHJNK; // 0x50
		static ::System::Single* StaticGet_NENCOIEPHLA()
		{
			return (::System::Single*)UnitySDK::FromName("", "AFPFAGANDKO")->GetStaticField(0x12680);
		}

		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + AFPFAGANDKO_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFPFAGANDKO_CCTOR_OFFSET))();
		}

		::FCLMONFLHFP* EPAJBPKGFFC(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5, ::System::Int32 a6)
		{
			return ((::FCLMONFLHFP*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + AFPFAGANDKO_EPAJBPKGFFC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::FCLMONFLHFP* OLMHPNPIJCP(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a2, ::System::Single a3, ::System::Action* a4, ::System::Action* a5, ::System::Int32 a6)
		{
			return ((::FCLMONFLHFP*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + AFPFAGANDKO_OLMHPNPIJCP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::FCLMONFLHFP* EPAJBPKGFFC_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* a3, ::System::Single a4, ::System::Action* a5, ::System::Action* a6, ::System::Int32 a7)
		{
			return ((::FCLMONFLHFP*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + AFPFAGANDKO_EPAJBPKGFFC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::FCLMONFLHFP* CFDHLHLHMAP(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3, ::System::Action* a4, ::System::Int32 a5)
		{
			return ((::FCLMONFLHFP*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + AFPFAGANDKO_CFDHLHLHMAP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::FCLMONFLHFP* GKGJMBPOICJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Action* a3, ::System::Action* a4, ::System::Int32 a5)
		{
			return ((::FCLMONFLHFP*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + AFPFAGANDKO_GKGJMBPOICJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MAKJJCDMONP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO_MAKJJCDMONP_OFFSET))(this);
		}

		::System::Void HCPCMLNKJIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO_HCPCMLNKJIN_OFFSET))(this);
		}

		::System::Void LFLPHFGPMOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO_LFLPHFGPMOE_OFFSET))(this);
		}

		::System::Void MEIJKLJPPKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO_MEIJKLJPPKL_OFFSET))(this);
		}

		::System::Void KFPPAHCGBBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO_KFPPAHCGBBL_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO_KHNCMBEFIKI_OFFSET))(this);
		}

		::System::Void CLOJCFAIDEJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AFPFAGANDKO_CLOJCFAIDEJ_OFFSET))(this, a1, a2);
		}

		::System::Void EHFLDBMLBPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO_EHFLDBMLBPM_OFFSET))(this);
		}

		::System::Void BIFFJLHIHKC(::FCLMONFLHFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCLMONFLHFP*))((::PBYTE)hIl2Cpp + AFPFAGANDKO_BIFFJLHIHKC_OFFSET))(this, a1);
		}

		::System::Void JGGPNCDOKGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO_JGGPNCDOKGI_OFFSET))(this);
		}

		static ::System::Int64 OJOCLGKECCD(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AFPFAGANDKO_OJOCLGKECCD_OFFSET))(a1, a2, a3);
		}

	};
