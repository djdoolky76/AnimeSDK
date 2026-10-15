#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
#include "unitysdk/UnityEngine/Vector4.h"
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
class OKNNCPCNBOF;
namespace UnityEngine { class AnimationCurve; }

#define OKNNCPCNBOF_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBEF0650)
#define OKNNCPCNBOF_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0xBEF00E0)
#define OKNNCPCNBOF_ACMKLFOMPFC_2_OFFSET UNITYSDK_OFFSET(0xBEF02D0)
#define OKNNCPCNBOF_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBEEFCE0)
#define OKNNCPCNBOF_ADBHOKHKANC_OFFSET UNITYSDK_OFFSET(0xBEF0920)
#define OKNNCPCNBOF_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEF0C40)
#define OKNNCPCNBOF_CTOR_OFFSET UNITYSDK_OFFSET(0xBEEFE20)
#define OKNNCPCNBOF_DNHMJBOPONA_OFFSET UNITYSDK_OFFSET(0xBEF07E0)
#define OKNNCPCNBOF_FOOLJBABEJE_OFFSET UNITYSDK_OFFSET(0xBEF0C30)
#define OKNNCPCNBOF_GIAAPOOFDPN_OFFSET UNITYSDK_OFFSET(0xBEEFC30)
#define OKNNCPCNBOF_GMAODOHDICP_OFFSET UNITYSDK_OFFSET(0xBEF0080)
#define OKNNCPCNBOF_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBEF04A0)
#define OKNNCPCNBOF_LKPHONPDJMK_OFFSET UNITYSDK_OFFSET(0xBEF0870)
#define OKNNCPCNBOF_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xBEF08C0)
#define OKNNCPCNBOF_MONCPDPAGFL_OFFSET UNITYSDK_OFFSET(0xBEF03F0)
#define OKNNCPCNBOF_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0xBEF06D0)
#define OKNNCPCNBOF_PKCKPFHCODN_OFFSET UNITYSDK_OFFSET(0xBEEFBB0)
#define OKNNCPCNBOF_PLFDCONMOKD_OFFSET UNITYSDK_OFFSET(0xBEF01D0)
#define OKNNCPCNBOF_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xBEF0980)

inline static constexpr unsigned int OKNNCPCNBOF_TypeDefinitionIndex = 49507;

	class OKNNCPCNBOF
	{
	public:
		::Il2CppArray<::UnityEngine::AnimationCurve*>* GIAABPCBIND; // 0x60
		::System::Single KLBFFEFFJID; // 0x68
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_IIECJEJFPCI()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "OKNNCPCNBOF")->GetStaticField(0x56D40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKNNCPCNBOF_CCTOR_OFFSET))();
		}

		::System::Void PKCKPFHCODN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_PKCKPFHCODN_OFFSET))(this);
		}

		static ::OKNNCPCNBOF* ACMKLFOMPFC(::EnviromentSystemV2Space::EnvCallbackCurveType a1)
		{
			return ((::OKNNCPCNBOF*(*)(::EnviromentSystemV2Space::EnvCallbackCurveType))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::OKNNCPCNBOF* ACMKLFOMPFC_1(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2, ::UnityEngine::AnimationCurve* a3, ::EnviromentSystemV2Space::EnvCallbackCurveType a4)
		{
			return ((::OKNNCPCNBOF*(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::EnviromentSystemV2Space::EnvCallbackCurveType))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_ACMKLFOMPFC_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::OKNNCPCNBOF* ACMKLFOMPFC_2(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2, ::UnityEngine::AnimationCurve* a3, ::UnityEngine::AnimationCurve* a4, ::EnviromentSystemV2Space::EnvCallbackCurveType a5)
		{
			return ((::OKNNCPCNBOF*(*)(::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::EnviromentSystemV2Space::EnvCallbackCurveType))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_ACMKLFOMPFC_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void MONCPDPAGFL(::OKNNCPCNBOF* a1)
		{
			return ((::System::Void(*)(::OKNNCPCNBOF*))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_MONCPDPAGFL_OFFSET))(a1);
		}

		::System::Void GMAODOHDICP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_GMAODOHDICP_OFFSET))(this);
		}

		::System::Void GIAAPOOFDPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_GIAAPOOFDPN_OFFSET))(this);
		}

		::UnityEngine::Vector4 KFGJEKJHIMB(::System::Single a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void NLKPKABOIPJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_NLKPKABOIPJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 DNHMJBOPONA(::System::Single a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_DNHMJBOPONA_OFFSET))(this, a1);
		}

		::System::Void LKPHONPDJMK(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_LKPHONPDJMK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 MNGGAOFNGIP()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Void PLFDCONMOKD(::System::Int32 a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_PLFDCONMOKD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 ADBHOKHKANC()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_ADBHOKHKANC_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::AnimationCurve*>* FOOLJBABEJE()
		{
			return ((::Il2CppArray<::UnityEngine::AnimationCurve*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNNCPCNBOF_FOOLJBABEJE_OFFSET))(this);
		}

	};
