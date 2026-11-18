#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Mathematics/float3.h"
#include "unitysdk/Unity/Mathematics/quaternion.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace MoleMole::EffectSimulate { class EffectMeshRendererBillboardComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define PDJEGDFLKHP_ALIKLLBNNLC_OFFSET UNITYSDK_OFFSET(0x11961C80)
#define PDJEGDFLKHP_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x11961970)
#define PDJEGDFLKHP_COKMIIDJOGD_OFFSET UNITYSDK_OFFSET(0x119620F0)
#define PDJEGDFLKHP_DMDHAGGKIFC_OFFSET UNITYSDK_OFFSET(0x119623A0)
#define PDJEGDFLKHP_FBHPODBAMGO_OFFSET UNITYSDK_OFFSET(0x11961370)
#define PDJEGDFLKHP_FJEOOLLMPFK_OFFSET UNITYSDK_OFFSET(0x11961E90)
#define PDJEGDFLKHP_GMMDNPJLJBC_OFFSET UNITYSDK_OFFSET(0x11960CB0)
#define PDJEGDFLKHP_HNEAGGGILAC_OFFSET UNITYSDK_OFFSET(0x11961720)
#define PDJEGDFLKHP_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x119621B0)
#define PDJEGDFLKHP_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x119618A0)
#define PDJEGDFLKHP_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x11962210)
#define PDJEGDFLKHP_NBIMCCDOIPG_OFFSET UNITYSDK_OFFSET(0x11960EF0)
#define PDJEGDFLKHP__CTOR_OFFSET UNITYSDK_OFFSET(0x11960AE0)

inline static constexpr unsigned int PDJEGDFLKHP_TypeDefinitionIndex = 41206;

class PDJEGDFLKHP : public ::System::Object
{
public:
	static ::PDJEGDFLKHP** StaticGet_KGGNOKCDDAG()
	{
		return (::PDJEGDFLKHP**)Il2CppClass::FromTypeDefinitionIndex(PDJEGDFLKHP_TypeDefinitionIndex)->GetStaticField(0x42940);
	}
	// static const ::System::Int32 HMHKNCNMKLA = 0x4; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* HMNJDDEGIDJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*, ::System::Int32>* EIONPGJBKHJ; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*>* KKFPDGCMMKG; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*>* NDPLIAKFOPN; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*>* KHNMJFAOCEI; // 0x30
	::Unity::Mathematics::float3 OFLLOLEBBME; // 0x38
	::Unity::Mathematics::quaternion ABHPOOGNKHK; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJEGDFLKHP__CTOR_OFFSET))(this);
	}

	::System::Void GMMDNPJLJBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_GMMDNPJLJBC_OFFSET))(this);
	}

	::System::Void FBHPODBAMGO(::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_FBHPODBAMGO_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Void NBIMCCDOIPG(::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_NBIMCCDOIPG_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Void HNEAGGGILAC(::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_HNEAGGGILAC_OFFSET))(this, HBNBIBADGNH);
	}

	static ::PDJEGDFLKHP* KCKBIOBGKBH()
	{
		return ((::PDJEGDFLKHP*(*)())((::PBYTE)hIl2Cpp + PDJEGDFLKHP_KCKBIOBGKBH_OFFSET))();
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void ALIKLLBNNLC(::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_ALIKLLBNNLC_OFFSET))(this, KONLMDBCDCK);
	}

	::Unity::Jobs::JobHandle FJEOOLLMPFK(::Unity::Jobs::JobHandle NADGOFHCHHE)
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_FJEOOLLMPFK_OFFSET))(this, NADGOFHCHHE);
	}

	static ::System::Boolean COKMIIDJOGD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PDJEGDFLKHP_COKMIIDJOGD_OFFSET))();
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDJEGDFLKHP_JPOLBPCHLHK_OFFSET))();
	}

	::System::Void KKFNPONHGEM(::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::EffectMeshRendererBillboardComponent*))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_KKFNPONHGEM_OFFSET))(this, HBNBIBADGNH);
	}

	::System::Boolean DMDHAGGKIFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDJEGDFLKHP_DMDHAGGKIFC_OFFSET))(this);
	}
};
