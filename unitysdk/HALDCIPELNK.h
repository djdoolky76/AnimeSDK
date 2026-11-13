#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
class HALDCIPELNK;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define HALDCIPELNK_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x17DE77F0)
#define HALDCIPELNK_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0x17DE75C0)
#define HALDCIPELNK_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x17DE7330)
#define HALDCIPELNK_ADBHOKHKANC_OFFSET UNITYSDK_OFFSET(0x17DE7A90)
#define HALDCIPELNK_BMFDLLJFKML_OFFSET UNITYSDK_OFFSET(0x17DE7BA0)
#define HALDCIPELNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x17DE7C80)
#define HALDCIPELNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x17DE7790)
#define HALDCIPELNK_CTOR_OFFSET UNITYSDK_OFFSET(0x17DE74E0)
#define HALDCIPELNK_DNHMJBOPONA_OFFSET UNITYSDK_OFFSET(0x17DE7970)
#define HALDCIPELNK_LKPHONPDJMK_OFFSET UNITYSDK_OFFSET(0x17DE79E0)
#define HALDCIPELNK_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x17DE7A40)
#define HALDCIPELNK_MONCPDPAGFL_OFFSET UNITYSDK_OFFSET(0x17DE76E0)
#define HALDCIPELNK_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0x17DE7870)
#define HALDCIPELNK_PKCKPFHCODN_OFFSET UNITYSDK_OFFSET(0x17DE72C0)
#define HALDCIPELNK_PLFDCONMOKD_OFFSET UNITYSDK_OFFSET(0x17DE7550)
#define HALDCIPELNK_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x17DE7AE0)
#define HALDCIPELNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17DE7BB0)

inline static constexpr unsigned int HALDCIPELNK_TypeDefinitionIndex = 50575;

	class HALDCIPELNK
	{
	public:
		::UnityEngine::AnimationCurve* GIAABPCBIND; // 0x58
		::System::Single KLBFFEFFJID; // 0x60
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "HALDCIPELNK")->GetStaticField(0x72EC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALDCIPELNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HALDCIPELNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HALDCIPELNK_CCTOR_OFFSET))();
		}

		::System::Void PKCKPFHCODN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALDCIPELNK_PKCKPFHCODN_OFFSET))(this);
		}

		static ::HALDCIPELNK* ACMKLFOMPFC(::EnviromentSystemV2Space::EnvCallbackCurveType a1)
		{
			return ((::HALDCIPELNK*(*)(::EnviromentSystemV2Space::EnvCallbackCurveType))((::PBYTE)hIl2Cpp + HALDCIPELNK_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::HALDCIPELNK* ACMKLFOMPFC_1(::UnityEngine::AnimationCurve* a1, ::EnviromentSystemV2Space::EnvCallbackCurveType a2)
		{
			return ((::HALDCIPELNK*(*)(::UnityEngine::AnimationCurve*, ::EnviromentSystemV2Space::EnvCallbackCurveType))((::PBYTE)hIl2Cpp + HALDCIPELNK_ACMKLFOMPFC_1_OFFSET))(a1, a2);
		}

		static ::System::Void MONCPDPAGFL(::HALDCIPELNK* a1)
		{
			return ((::System::Void(*)(::HALDCIPELNK*))((::PBYTE)hIl2Cpp + HALDCIPELNK_MONCPDPAGFL_OFFSET))(a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALDCIPELNK_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void NLKPKABOIPJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HALDCIPELNK_NLKPKABOIPJ_OFFSET))(this, a1);
		}

		::System::Single DNHMJBOPONA(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HALDCIPELNK_DNHMJBOPONA_OFFSET))(this, a1);
		}

		::System::Void LKPHONPDJMK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HALDCIPELNK_LKPHONPDJMK_OFFSET))(this, a1);
		}

		::System::Single MNGGAOFNGIP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HALDCIPELNK_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Void PLFDCONMOKD(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HALDCIPELNK_PLFDCONMOKD_OFFSET))(this, a1);
		}

		::System::Single ADBHOKHKANC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HALDCIPELNK_ADBHOKHKANC_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + HALDCIPELNK_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* BMFDLLJFKML()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALDCIPELNK_BMFDLLJFKML_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALDCIPELNK_TOSTRING_OFFSET))(this);
		}

	};
