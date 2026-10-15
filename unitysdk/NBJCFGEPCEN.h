#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
class IILAKNBLGBD;
class NBJCFGEPCEN;
class ODGPPIHLOFF;
namespace EnviromentSystemV2Space { class ImageCurveAsset; }
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Texture; }

#define NBJCFGEPCEN_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xBAC2840)
#define NBJCFGEPCEN_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0xBAC2220)
#define NBJCFGEPCEN_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBAC1FF0)
#define NBJCFGEPCEN_ADBHOKHKANC_OFFSET UNITYSDK_OFFSET(0xBAC2A80)
#define NBJCFGEPCEN_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0xBAC2630)
#define NBJCFGEPCEN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBAC2EE0)
#define NBJCFGEPCEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBAC2180)
#define NBJCFGEPCEN_CTOR_OFFSET UNITYSDK_OFFSET(0xBAC23F0)
#define NBJCFGEPCEN_DNHMJBOPONA_OFFSET UNITYSDK_OFFSET(0xBAC2C40)
#define NBJCFGEPCEN_EOIDCABMDEN_OFFSET UNITYSDK_OFFSET(0xBAC2AC0)
#define NBJCFGEPCEN_HAKNGIHMPNF_OFFSET UNITYSDK_OFFSET(0xBAC2D20)
#define NBJCFGEPCEN_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xBAC27E0)
#define NBJCFGEPCEN_LHMGOMFKMLB_OFFSET UNITYSDK_OFFSET(0xBAC28C0)
#define NBJCFGEPCEN_LHPAGJINNHN_OFFSET UNITYSDK_OFFSET(0xBAC2490)
#define NBJCFGEPCEN_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xBAC2CE0)
#define NBJCFGEPCEN_MONCPDPAGFL_OFFSET UNITYSDK_OFFSET(0xBAC24E0)
#define NBJCFGEPCEN_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0xBAC2B90)
#define NBJCFGEPCEN_OPFNIIGKGMG_OFFSET UNITYSDK_OFFSET(0xBAC2590)
#define NBJCFGEPCEN_PKCKPFHCODN_OFFSET UNITYSDK_OFFSET(0xBAC1F40)
#define NBJCFGEPCEN_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xBAC2910)

inline static constexpr unsigned int NBJCFGEPCEN_TypeDefinitionIndex = 49502;

	class NBJCFGEPCEN
	{
	public:
		::IILAKNBLGBD* JJPJKAJNIOD; // 0x70
		::EnviromentSystemV2Space::ImageCurveAsset* KNLJGOJNPND; // 0x78
		::EnviromentSystemV2Space::ImageCurveAsset* AJHEFIIPFFK; // 0x80
		::System::Single KLBFFEFFJID; // 0x88
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "NBJCFGEPCEN")->GetStaticField(0x1EA00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBJCFGEPCEN_CCTOR_OFFSET))();
		}

		::System::Void PKCKPFHCODN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_PKCKPFHCODN_OFFSET))(this);
		}

		static ::NBJCFGEPCEN* ACMKLFOMPFC(::System::String* a1, ::EnviromentSystemV2Space::EnvCallbackCurveType a2)
		{
			return ((::NBJCFGEPCEN*(*)(::System::String*, ::EnviromentSystemV2Space::EnvCallbackCurveType))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_ACMKLFOMPFC_OFFSET))(a1, a2);
		}

		static ::NBJCFGEPCEN* ACMKLFOMPFC_1(::EnviromentSystemV2Space::EnvCallbackCurveType a1)
		{
			return ((::NBJCFGEPCEN*(*)(::EnviromentSystemV2Space::EnvCallbackCurveType))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_ACMKLFOMPFC_1_OFFSET))(a1);
		}

		static ::System::Void MONCPDPAGFL(::NBJCFGEPCEN* a1)
		{
			return ((::System::Void(*)(::NBJCFGEPCEN*))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_MONCPDPAGFL_OFFSET))(a1);
		}

		::System::Void LHPAGJINNHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_LHPAGJINNHN_OFFSET))(this);
		}

		::EnviromentSystemV2Space::ImageCurveAsset* OPFNIIGKGMG()
		{
			return ((::EnviromentSystemV2Space::ImageCurveAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_OPFNIIGKGMG_OFFSET))(this);
		}

		::System::Void AHGNCDFAFBM(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_AHGNCDFAFBM_OFFSET))(this, a1);
		}

		::ODGPPIHLOFF* HKEPJLDBGIG(::System::Boolean a1)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Boolean LHMGOMFKMLB(::GGJFAFONDHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_LHMGOMFKMLB_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void EOIDCABMDEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_EOIDCABMDEN_OFFSET))(this);
		}

		::System::Void NLKPKABOIPJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_NLKPKABOIPJ_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* DNHMJBOPONA(::System::Single a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_DNHMJBOPONA_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* MNGGAOFNGIP()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_MNGGAOFNGIP_OFFSET))(this);
		}

		::System::Void HAKNGIHMPNF(::EnviromentSystemV2Space::ImageCurveAsset* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::ImageCurveAsset*, ::System::Boolean))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_HAKNGIHMPNF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Texture* ADBHOKHKANC()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJCFGEPCEN_ADBHOKHKANC_OFFSET))(this);
		}

	};
