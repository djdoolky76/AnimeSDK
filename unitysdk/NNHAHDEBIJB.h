#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SpikeTrapState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/GACEPNEKIAI.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define NNHAHDEBIJB_BCBABFCBHHA_OFFSET UNITYSDK_OFFSET(0xBCA28B0)
#define NNHAHDEBIJB_CBMMMKHEDDK_OFFSET UNITYSDK_OFFSET(0xBCA7100)
#define NNHAHDEBIJB_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCA78E0)
#define NNHAHDEBIJB_CEJOMINNFHL_OFFSET UNITYSDK_OFFSET(0xBCA5630)
#define NNHAHDEBIJB_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xBCA57F0)
#define NNHAHDEBIJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA1CE0)
#define NNHAHDEBIJB_DILJPILGOAD_OFFSET UNITYSDK_OFFSET(0xBCA6D50)
#define NNHAHDEBIJB_DNOLCKJPNPF_OFFSET UNITYSDK_OFFSET(0xBCA4880)
#define NNHAHDEBIJB_EPMDBMNGOAG_OFFSET UNITYSDK_OFFSET(0xBCA23F0)
#define NNHAHDEBIJB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBCA1F40)
#define NNHAHDEBIJB_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xBCA61F0)
#define NNHAHDEBIJB_FOIMCHPHODC_OFFSET UNITYSDK_OFFSET(0xBCA21F0)
#define NNHAHDEBIJB_GLOAIPJMPDL_OFFSET UNITYSDK_OFFSET(0xBCA1F90)
#define NNHAHDEBIJB_GNMNIPDGHPK_OFFSET UNITYSDK_OFFSET(0xBCA7070)
#define NNHAHDEBIJB_HIDKEBJMOOM_OFFSET UNITYSDK_OFFSET(0xBCA5730)
#define NNHAHDEBIJB_HLDILAGAIGE_OFFSET UNITYSDK_OFFSET(0xBCA4CB0)
#define NNHAHDEBIJB_HNNBGCDEHOA_OFFSET UNITYSDK_OFFSET(0xBCA75D0)
#define NNHAHDEBIJB_IDHNJKHEBMJ_OFFSET UNITYSDK_OFFSET(0xBCA35A0)
#define NNHAHDEBIJB_IFFBMBCODOE_OFFSET UNITYSDK_OFFSET(0xBCA6280)
#define NNHAHDEBIJB_IFJMBLIMLGF_OFFSET UNITYSDK_OFFSET(0xBCA36B0)
#define NNHAHDEBIJB_IHAAGPAFNNO_OFFSET UNITYSDK_OFFSET(0xBCA5450)
#define NNHAHDEBIJB_IHFAAGBKFMI_OFFSET UNITYSDK_OFFSET(0xBCA3A40)
#define NNHAHDEBIJB_IIDJJLFFADK_OFFSET UNITYSDK_OFFSET(0xBCA6340)
#define NNHAHDEBIJB_IMMDBNPLKIN_OFFSET UNITYSDK_OFFSET(0xBCA2E60)
#define NNHAHDEBIJB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBCA2390)
#define NNHAHDEBIJB_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xBCA5DF0)
#define NNHAHDEBIJB_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xBCA3440)
#define NNHAHDEBIJB_JFMPKDBCNAJ_OFFSET UNITYSDK_OFFSET(0xBCA6490)
#define NNHAHDEBIJB_KCCEBMEAHGI_OFFSET UNITYSDK_OFFSET(0xBCA5190)
#define NNHAHDEBIJB_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xBCA5AE0)
#define NNHAHDEBIJB_LFGOKECMFIJ_OFFSET UNITYSDK_OFFSET(0xBCA2B80)
#define NNHAHDEBIJB_LMMFHMFGNMF_OFFSET UNITYSDK_OFFSET(0xBCA3E80)
#define NNHAHDEBIJB_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0xBCA5BA0)
#define NNHAHDEBIJB_MHNABDJDMFP_OFFSET UNITYSDK_OFFSET(0xBCA2B00)
#define NNHAHDEBIJB_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0xBCA34C0)
#define NNHAHDEBIJB_MPBKNDIAFBG_OFFSET UNITYSDK_OFFSET(0xBCA3B60)
#define NNHAHDEBIJB_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0xBCA4BB0)
#define NNHAHDEBIJB_NDJJMEPBBON_OFFSET UNITYSDK_OFFSET(0xBCA4A70)
#define NNHAHDEBIJB_OAABFENBMLG_OFFSET UNITYSDK_OFFSET(0xBCA3CE0)
#define NNHAHDEBIJB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBCA2600)

inline static constexpr unsigned int NNHAHDEBIJB_TypeDefinitionIndex = 77151;

	class NNHAHDEBIJB : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* BCFMPKPKMMP; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
		::Entitas::IGroup_1<::HIOEAKHGILF*>* FHCFJAJGECM; // 0x30
		::Entitas::ICollector_1<::HIOEAKHGILF*>* LIKPFOAJEBM; // 0x38
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "NNHAHDEBIJB")->GetStaticField(0x4DD70);
		}

		// static const ::System::String* EPPEGOFKNGE; // 0x0
		// static const ::System::Object PCPKHFLPNGO; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNHAHDEBIJB_CCTOR_OFFSET))();
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_TEARDOWN_OFFSET))(this);
		}

		::System::Void GLOAIPJMPDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_GLOAIPJMPDL_OFFSET))(this);
		}

		::System::Void EPMDBMNGOAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_EPMDBMNGOAG_OFFSET))(this);
		}

		::System::Void BCBABFCBHHA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_BCBABFCBHHA_OFFSET))(this, a1);
		}

		::System::Void LFGOKECMFIJ(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_LFGOKECMFIJ_OFFSET))(this, a1, a2);
		}

		::System::Void IMMDBNPLKIN(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_IMMDBNPLKIN_OFFSET))(this, a1);
		}

		::System::Void IFJMBLIMLGF(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_IFJMBLIMLGF_OFFSET))(this, a1, a2);
		}

		::System::Void MPBKNDIAFBG(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_MPBKNDIAFBG_OFFSET))(this, a1, a2);
		}

		::System::Void FOIMCHPHODC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_FOIMCHPHODC_OFFSET))(this);
		}

		::System::Void LMMFHMFGNMF(::HIOEAKHGILF* a1, ::System::Collections::Generic::List_1<::HIOEAKHGILF*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Collections::Generic::List_1<::HIOEAKHGILF*>*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_LMMFHMFGNMF_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Single, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState> NDJJMEPBBON(::System::Single a1, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::ValueTuple_2<::System::Single, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState>(*)(::PVOID, ::System::Single, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_NDJJMEPBBON_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 IDHNJKHEBMJ(::HIOEAKHGILF* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_IDHNJKHEBMJ_OFFSET))(this, a1, a2);
		}

		::System::Void NAPEMFLELHM(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_NAPEMFLELHM_OFFSET))(this, a1, a2);
		}

		::System::Void CEJOMINNFHL(::HIOEAKHGILF* a1, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_CEJOMINNFHL_OFFSET))(this, a1, a2);
		}

		::System::Void MHPLGOAHLPJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_MHPLGOAHLPJ_OFFSET))(this, a1);
		}

		::System::Void HIDKEBJMOOM(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_HIDKEBJMOOM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MHNABDJDMFP(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_MHNABDJDMFP_OFFSET))(this, a1);
		}

		::System::Boolean LAGAFLIFFMN(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Void JCONBLBJFJJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean MDEKKFEOKDH(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_MDEKKFEOKDH_OFFSET))(this, a1, a2);
		}

		::System::Void OAABFENBMLG(::System::Collections::Generic::List_1<::HIOEAKHGILF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HIOEAKHGILF*>*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_OAABFENBMLG_OFFSET))(this, a1);
		}

		::System::Boolean HLDILAGAIGE(::HIOEAKHGILF* a1, ::System::Collections::Generic::List_1<::HIOEAKHGILF*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::Collections::Generic::List_1<::HIOEAKHGILF*>*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_HLDILAGAIGE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IIDJJLFFADK(::HIOEAKHGILF* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_IIDJJLFFADK_OFFSET))(this, a1, a2);
		}

		::System::Boolean JFMPKDBCNAJ(::HIOEAKHGILF* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_JFMPKDBCNAJ_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> DILJPILGOAD(::HIOEAKHGILF* a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_DILJPILGOAD_OFFSET))(this, a1, a2);
		}

		::System::Boolean GNMNIPDGHPK(::UnityEngine::Collider* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_GNMNIPDGHPK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IFFBMBCODOE(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_IFFBMBCODOE_OFFSET))(this, a1);
		}

		::System::Void HNNBGCDEHOA(::HIOEAKHGILF* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_HNNBGCDEHOA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CBMMMKHEDDK(::HIOEAKHGILF* a1, ::System::Int32 a2, ::HIOEAKHGILF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_CBMMMKHEDDK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IHAAGPAFNNO(::HIOEAKHGILF* a1, ::System::Int32 a2, ::GACEPNEKIAI a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32, ::GACEPNEKIAI, ::System::Boolean))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_IHAAGPAFNNO_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Boolean IHFAAGBKFMI(::HIOEAKHGILF* a1, ::HGBCMFANCOE a2)
		{
			return ((::System::Boolean(*)(::HIOEAKHGILF*, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_IHFAAGBKFMI_OFFSET))(a1, a2);
		}

		::System::Void DNOLCKJPNPF(::HIOEAKHGILF* a1, ::GACEPNEKIAI a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::GACEPNEKIAI))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_DNOLCKJPNPF_OFFSET))(this, a1, a2);
		}

		::System::Boolean KCCEBMEAHGI(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_KCCEBMEAHGI_OFFSET))(this, a1);
		}

	};
