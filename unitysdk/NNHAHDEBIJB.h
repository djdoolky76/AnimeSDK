#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SpikeTrapState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/GACEPNEKIAI.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IComponent; }
namespace Entitas { class IGroup; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define NNHAHDEBIJB_BCBABFCBHHA_OFFSET UNITYSDK_OFFSET(0xBCA98C0)
#define NNHAHDEBIJB_CBMMMKHEDDK_OFFSET UNITYSDK_OFFSET(0xBCAE160)
#define NNHAHDEBIJB_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCAE940)
#define NNHAHDEBIJB_CEJOMINNFHL_OFFSET UNITYSDK_OFFSET(0xBCAC660)
#define NNHAHDEBIJB_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xBCAC820)
#define NNHAHDEBIJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCA8CF0)
#define NNHAHDEBIJB_DILJPILGOAD_OFFSET UNITYSDK_OFFSET(0xBCADD90)
#define NNHAHDEBIJB_DNOLCKJPNPF_OFFSET UNITYSDK_OFFSET(0xBCAB8A0)
#define NNHAHDEBIJB_EPMDBMNGOAG_OFFSET UNITYSDK_OFFSET(0xBCA9400)
#define NNHAHDEBIJB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBCA8F50)
#define NNHAHDEBIJB_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xBCAD220)
#define NNHAHDEBIJB_FOIMCHPHODC_OFFSET UNITYSDK_OFFSET(0xBCA9200)
#define NNHAHDEBIJB_GLOAIPJMPDL_OFFSET UNITYSDK_OFFSET(0xBCA8FA0)
#define NNHAHDEBIJB_GNMNIPDGHPK_OFFSET UNITYSDK_OFFSET(0xBCAE0D0)
#define NNHAHDEBIJB_HIDKEBJMOOM_OFFSET UNITYSDK_OFFSET(0xBCAC760)
#define NNHAHDEBIJB_HLDILAGAIGE_OFFSET UNITYSDK_OFFSET(0xBCABCD0)
#define NNHAHDEBIJB_HNNBGCDEHOA_OFFSET UNITYSDK_OFFSET(0xBCAE630)
#define NNHAHDEBIJB_IDHNJKHEBMJ_OFFSET UNITYSDK_OFFSET(0xBCAA5B0)
#define NNHAHDEBIJB_IFFBMBCODOE_OFFSET UNITYSDK_OFFSET(0xBCAD2B0)
#define NNHAHDEBIJB_IFJMBLIMLGF_OFFSET UNITYSDK_OFFSET(0xBCAA6C0)
#define NNHAHDEBIJB_IHAAGPAFNNO_OFFSET UNITYSDK_OFFSET(0xBCAC480)
#define NNHAHDEBIJB_IHFAAGBKFMI_OFFSET UNITYSDK_OFFSET(0xBCAAA50)
#define NNHAHDEBIJB_IIDJJLFFADK_OFFSET UNITYSDK_OFFSET(0xBCAD370)
#define NNHAHDEBIJB_IMMDBNPLKIN_OFFSET UNITYSDK_OFFSET(0xBCA9E70)
#define NNHAHDEBIJB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBCA93A0)
#define NNHAHDEBIJB_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xBCACE20)
#define NNHAHDEBIJB_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xBCAA450)
#define NNHAHDEBIJB_JFMPKDBCNAJ_OFFSET UNITYSDK_OFFSET(0xBCAD4C0)
#define NNHAHDEBIJB_KCCEBMEAHGI_OFFSET UNITYSDK_OFFSET(0xBCAC1C0)
#define NNHAHDEBIJB_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xBCACB10)
#define NNHAHDEBIJB_LFGOKECMFIJ_OFFSET UNITYSDK_OFFSET(0xBCA9B90)
#define NNHAHDEBIJB_LMMFHMFGNMF_OFFSET UNITYSDK_OFFSET(0xBCAAE90)
#define NNHAHDEBIJB_MDEKKFEOKDH_OFFSET UNITYSDK_OFFSET(0xBCACBD0)
#define NNHAHDEBIJB_MHNABDJDMFP_OFFSET UNITYSDK_OFFSET(0xBCA9B10)
#define NNHAHDEBIJB_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0xBCAA4D0)
#define NNHAHDEBIJB_MPBKNDIAFBG_OFFSET UNITYSDK_OFFSET(0xBCAAB70)
#define NNHAHDEBIJB_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0xBCABBD0)
#define NNHAHDEBIJB_NDJJMEPBBON_OFFSET UNITYSDK_OFFSET(0xBCABA90)
#define NNHAHDEBIJB_OAABFENBMLG_OFFSET UNITYSDK_OFFSET(0xBCAACF0)
#define NNHAHDEBIJB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBCA9610)

inline static constexpr unsigned int NNHAHDEBIJB_TypeDefinitionIndex = 77152;

	class NNHAHDEBIJB : public ::System::Object
	{
	public:
		::Entitas::IGroup* BCFMPKPKMMP; // 0x10
		::Entitas::ICollector* LIKPFOAJEBM; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::RPG::PoolDictionary_2<::System::Int32, ::System::Object*>* GFIPFGJPHHI; // 0x28
		::Entitas::IGroup* FHCFJAJGECM; // 0x30
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x38
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "NNHAHDEBIJB")->GetStaticField(0x53C80);
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

		::System::ValueTuple NDJJMEPBBON(::System::Single a1, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::Single, ::RPG::Client::LittleGame::FiveDim::SpikeTrapState, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_NDJJMEPBBON_OFFSET))(this, a1, a2, a3, a4);
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

		::System::Void HIDKEBJMOOM(::Entitas::IGroup* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_HIDKEBJMOOM_OFFSET))(this, a1, a2, a3, a4);
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

		::System::ValueTuple DILJPILGOAD(::HIOEAKHGILF* a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32))((::PBYTE)hIl2Cpp + NNHAHDEBIJB_DILJPILGOAD_OFFSET))(this, a1, a2);
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
