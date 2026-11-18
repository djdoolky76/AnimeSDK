#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOMEIPBOBHP.h"
#include "unitysdk/CFLJOMGPODL.h"
#include "unitysdk/EFIINBBLANC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccess.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define GLFBAHGPEFO_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x1F3A89D0)
#define GLFBAHGPEFO_AKAKFLDAIIP_OFFSET UNITYSDK_OFFSET(0x1F3A9EE0)
#define GLFBAHGPEFO_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1F3A9BD0)
#define GLFBAHGPEFO_CBIIAFHMHFF_OFFSET UNITYSDK_OFFSET(0x1F3A9800)
#define GLFBAHGPEFO_EFFIAFENJLN_OFFSET UNITYSDK_OFFSET(0x1F3A9510)
#define GLFBAHGPEFO_GLILOANCOFJ_OFFSET UNITYSDK_OFFSET(0x1F3A9370)
#define GLFBAHGPEFO_IMKEMPBBDJB_OFFSET UNITYSDK_OFFSET(0x1F3A9700)
#define GLFBAHGPEFO_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1F3A9850)
#define GLFBAHGPEFO_LCPHNFAKBBF_OFFSET UNITYSDK_OFFSET(0x1F3A8D80)
#define GLFBAHGPEFO_LJCBAPMGMEP_OFFSET UNITYSDK_OFFSET(0x1F3A9DB0)
#define GLFBAHGPEFO_LOAKIKHDJKH_OFFSET UNITYSDK_OFFSET(0x1F3A9150)
#define GLFBAHGPEFO_NCJLNMMOHFA_OFFSET UNITYSDK_OFFSET(0x1F3A97F0)
#define GLFBAHGPEFO_OBHIMMLONEM_OFFSET UNITYSDK_OFFSET(0x1F3A92C0)
#define GLFBAHGPEFO_ONGFIMHLBJF_OFFSET UNITYSDK_OFFSET(0x1F3A9240)
#define GLFBAHGPEFO_POOMPBGEIAF_OFFSET UNITYSDK_OFFSET(0x1F3A9050)
#define GLFBAHGPEFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3A8930)
#define GLFBAHGPEFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A8920)

inline static constexpr unsigned int GLFBAHGPEFO_TypeDefinitionIndex = 8442;

class GLFBAHGPEFO : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::GLFBAHGPEFO*>** StaticGet_JOAKHAFFAMM()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::GLFBAHGPEFO*>**)Il2CppClass::FromTypeDefinitionIndex(GLFBAHGPEFO_TypeDefinitionIndex)->GetStaticField(0x7120);
	}
	static ::System::Int32* StaticGet_DHFNLFNNAMB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GLFBAHGPEFO_TypeDefinitionIndex)->GetStaticField(0x37D0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KPOLPNMBEME; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DBFBEPBNOHM; // 0x18
	::System::Collections::Generic::List_1<::EFIINBBLANC>* LHCIDICCCGK; // 0x20
	::System::Collections::Generic::List_1<::CFLJOMGPODL>* KDOKNAJDAFO; // 0x28
	::AOMEIPBOBHP ECFMJIBMEAI; // 0x30
	::System::Byte _padding0[0x4];
	::Unity::Jobs::JobHandle EOCHHIBJHCG; // 0x38
	::System::Boolean JEENEGFICAD; // 0x48
	::System::Boolean LHMNKCPMJFG; // 0x49
	::System::Byte _padding1[0x2];
	::System::Int32 PHNAGOHEDLK; // 0x4C
	::UnityEngine::Jobs::TransformAccessArray DGCKODPLMNH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFBAHGPEFO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLFBAHGPEFO__CCTOR_OFFSET))();
	}

	::System::Void ABDLEONNPAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_ABDLEONNPAJ_OFFSET))(this);
	}

	::System::Void POOMPBGEIAF(::System::Int32 KKIIJGFNHOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_POOMPBGEIAF_OFFSET))(this, KKIIJGFNHOD);
	}

	::System::Void ONGFIMHLBJF(::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_ONGFIMHLBJF_OFFSET))(this, GKBJOPJKCLB);
	}

	static ::GLFBAHGPEFO* OBHIMMLONEM(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GLFBAHGPEFO*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_OBHIMMLONEM_OFFSET))(MGMDLMBEDJF);
	}

	::System::Void GLILOANCOFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_GLILOANCOFJ_OFFSET))(this);
	}

	::Unity::Jobs::JobHandle EFFIAFENJLN()
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_EFFIAFENJLN_OFFSET))(this);
	}

	::CFLJOMGPODL IMKEMPBBDJB(::System::Int32 KKIIJGFNHOD)
	{
		return ((::CFLJOMGPODL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_IMKEMPBBDJB_OFFSET))(this, KKIIJGFNHOD);
	}

	::Unity::Jobs::JobHandle NCJLNMMOHFA()
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_NCJLNMMOHFA_OFFSET))(this);
	}

	::System::Void LCPHNFAKBBF(::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_LCPHNFAKBBF_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void CBIIAFHMHFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_CBIIAFHMHFF_OFFSET))(this);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void LOAKIKHDJKH(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_LOAKIKHDJKH_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void BBPCBEEHALC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_BBPCBEEHALC_OFFSET))(this);
	}

	::System::Void LJCBAPMGMEP(::System::Int32 ABHBKFJKINO, ::UnityEngine::Jobs::TransformAccess GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Jobs::TransformAccess))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_LJCBAPMGMEP_OFFSET))(this, ABHBKFJKINO, GKBJOPJKCLB);
	}

	::System::Void AKAKFLDAIIP(::System::Int32 KKIIJGFNHOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GLFBAHGPEFO_AKAKFLDAIIP_OFFSET))(this, KKIIJGFNHOD);
	}
};
