#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EGDAOGCDJBB;
class JBACCAGFHON;
class MIMCAGPCALM;
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define EGDAOGCDJBB_ADFAFENDHPE_OFFSET UNITYSDK_OFFSET(0x152DAA00)
#define EGDAOGCDJBB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x152D9180)
#define EGDAOGCDJBB_COOFKFKCPGB_OFFSET UNITYSDK_OFFSET(0x152D9F90)
#define EGDAOGCDJBB_CTOR_OFFSET UNITYSDK_OFFSET(0x152D9210)
#define EGDAOGCDJBB_DCDGJHGLDBM_OFFSET UNITYSDK_OFFSET(0x152D9940)
#define EGDAOGCDJBB_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x152D9230)
#define EGDAOGCDJBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152D9520)
#define EGDAOGCDJBB_DJOCOAAFGJD_OFFSET UNITYSDK_OFFSET(0x152D98E0)
#define EGDAOGCDJBB_DLDNEDJMIGL_OFFSET UNITYSDK_OFFSET(0x152D9130)
#define EGDAOGCDJBB_FGEHFOPPLKC_OFFSET UNITYSDK_OFFSET(0x152DA130)
#define EGDAOGCDJBB_FONCFNDECLE_OFFSET UNITYSDK_OFFSET(0x152D9060)
#define EGDAOGCDJBB_GCMJFPGMLIA_OFFSET UNITYSDK_OFFSET(0x152DA6E0)
#define EGDAOGCDJBB_GOFDJGDCANL_OFFSET UNITYSDK_OFFSET(0x152D9340)
#define EGDAOGCDJBB_HNMCPOJGONG_OFFSET UNITYSDK_OFFSET(0x152DA300)
#define EGDAOGCDJBB_IEBDOIBCJDO_OFFSET UNITYSDK_OFFSET(0x152DA950)
#define EGDAOGCDJBB_IIBOCNNICMG_OFFSET UNITYSDK_OFFSET(0x152D99E0)
#define EGDAOGCDJBB_IPEGDHDAHFB_OFFSET UNITYSDK_OFFSET(0x152DA430)
#define EGDAOGCDJBB_JPPFFHNCOGK_OFFSET UNITYSDK_OFFSET(0x152D9890)
#define EGDAOGCDJBB_KGICAHKCNGA_OFFSET UNITYSDK_OFFSET(0x152D9990)
#define EGDAOGCDJBB_LAFMFKEIFFH_OFFSET UNITYSDK_OFFSET(0x152DA490)
#define EGDAOGCDJBB_LMPOGKJONED_OFFSET UNITYSDK_OFFSET(0x152D9C00)
#define EGDAOGCDJBB_MIFGAJHHKKP_OFFSET UNITYSDK_OFFSET(0x152DA250)
#define EGDAOGCDJBB_MJPHCCDEJGM_OFFSET UNITYSDK_OFFSET(0x152D9AF0)
#define EGDAOGCDJBB_NAGEIPPFCDM_OFFSET UNITYSDK_OFFSET(0x152DA9A0)
#define EGDAOGCDJBB_NDLAPNBKJMF_OFFSET UNITYSDK_OFFSET(0x152D9000)
#define EGDAOGCDJBB_PHOPFPMGCFN_OFFSET UNITYSDK_OFFSET(0x152D9BB0)

inline static constexpr unsigned int EGDAOGCDJBB_TypeDefinitionIndex = 80843;

	class EGDAOGCDJBB : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* PGDNCNOIHDB; // 0x10
		::System::Action* BDCPGBGHDHF; // 0x18
		::JBACCAGFHON* PDENFEFCAGN; // 0x20
		::System::Action* ICMGKCENJDD; // 0x28
		::System::Action* HLLPNIILBIC; // 0x30
		::System::Action* IDIALGNPLBK; // 0x38
		::System::ValueTuple_2<::System::UInt32, ::System::Int32> MPIEKILHCCB; // 0x40
		::System::ValueTuple_4<::System::Int32, ::System::Int32, ::System::Single, ::System::UInt32> PDBCINGJCOH; // 0x48
		::System::Byte _padding0[0x8];
		::UnityEngine::Vector3 DBEGEGCHLMG; // 0x58
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_CTOR_OFFSET))(this, a1);
		}

		::MIMCAGPCALM* NDLAPNBKJMF()
		{
			return ((::MIMCAGPCALM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_NDLAPNBKJMF_OFFSET))(this);
		}

		::System::Boolean FONCFNDECLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_FONCFNDECLE_OFFSET))(this);
		}

		::System::Boolean DLDNEDJMIGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_DLDNEDJMIGL_OFFSET))(this);
		}

		static ::EGDAOGCDJBB* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::EGDAOGCDJBB*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void GOFDJGDCANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_GOFDJGDCANL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_DISPOSE_OFFSET))(this);
		}

		::System::Void IIBOCNNICMG(::System::UInt32 a1, ::System::Int32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_IIBOCNNICMG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MJPHCCDEJGM(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_MJPHCCDEJGM_OFFSET))(this, a1, a2);
		}

		::System::Void JPPFFHNCOGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_JPPFFHNCOGK_OFFSET))(this);
		}

		::System::Void PHOPFPMGCFN(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_PHOPFPMGCFN_OFFSET))(this, a1);
		}

		::System::Void LMPOGKJONED(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::UInt32 a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_LMPOGKJONED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean FGEHFOPPLKC(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_FGEHFOPPLKC_OFFSET))(this, a1, a2);
		}

		::System::Void DJOCOAAFGJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_DJOCOAAFGJD_OFFSET))(this);
		}

		::UnityEngine::Vector3 COOFKFKCPGB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_COOFKFKCPGB_OFFSET))(this, a1, a2);
		}

		::System::Void MIFGAJHHKKP(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_MIFGAJHHKKP_OFFSET))(this, a1);
		}

		::System::Void HNMCPOJGONG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_HNMCPOJGONG_OFFSET))(this);
		}

		::System::Void LAFMFKEIFFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_LAFMFKEIFFH_OFFSET))(this);
		}

		::System::Void GCMJFPGMLIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_GCMJFPGMLIA_OFFSET))(this);
		}

		::System::Void IEBDOIBCJDO(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_IEBDOIBCJDO_OFFSET))(this, a1);
		}

		::System::Void NAGEIPPFCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_NAGEIPPFCDM_OFFSET))(this);
		}

		::System::Void DCDGJHGLDBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_DCDGJHGLDBM_OFFSET))(this);
		}

		::System::Void KGICAHKCNGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_KGICAHKCNGA_OFFSET))(this);
		}

		::System::Void ADFAFENDHPE(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_ADFAFENDHPE_OFFSET))(this, a1);
		}

		::System::Void IPEGDHDAHFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDAOGCDJBB_IPEGDHDAHFB_OFFSET))(this);
		}

	};
