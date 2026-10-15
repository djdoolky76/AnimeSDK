#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLBIEMILEDE.h"
class CDIAEAMFDIB;
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define CDIAEAMFDIB_AAIFNPBFMLO_OFFSET UNITYSDK_OFFSET(0xC768E40)
#define CDIAEAMFDIB_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xC768580)
#define CDIAEAMFDIB_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0xC768990)
#define CDIAEAMFDIB_ACMKLFOMPFC_2_OFFSET UNITYSDK_OFFSET(0xC768A90)
#define CDIAEAMFDIB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xC7686F0)
#define CDIAEAMFDIB_CBPIGOCOHLK_OFFSET UNITYSDK_OFFSET(0xC768D70)
#define CDIAEAMFDIB_CCTOR_OFFSET UNITYSDK_OFFSET(0xC7692E0)
#define CDIAEAMFDIB_CTOR_OFFSET UNITYSDK_OFFSET(0xC768880)
#define CDIAEAMFDIB_EHLOFDJDFIE_OFFSET UNITYSDK_OFFSET(0xC768D10)
#define CDIAEAMFDIB_GCMIKFEGODH_OFFSET UNITYSDK_OFFSET(0xC768C70)
#define CDIAEAMFDIB_LKPHONPDJMK_OFFSET UNITYSDK_OFFSET(0xC7688E0)
#define CDIAEAMFDIB_MAIJNFHJEBO_OFFSET UNITYSDK_OFFSET(0xC768BD0)
#define CDIAEAMFDIB_NDEPIFKAHBI_OFFSET UNITYSDK_OFFSET(0xC768CC0)
#define CDIAEAMFDIB_NDINLCMBHMG_OFFSET UNITYSDK_OFFSET(0xC768660)
#define CDIAEAMFDIB_NKMOMLLAMND_OFFSET UNITYSDK_OFFSET(0xC768E30)
#define CDIAEAMFDIB_OALLGPDPIHI_OFFSET UNITYSDK_OFFSET(0xC768930)
#define CDIAEAMFDIB_PGBBIFBLLNH_OFFSET UNITYSDK_OFFSET(0xC768E50)
#define CDIAEAMFDIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC768E60)

inline static constexpr unsigned int CDIAEAMFDIB_TypeDefinitionIndex = 49508;

	class CDIAEAMFDIB : public ::NLBIEMILEDE
	{
	public:
		::UnityEngine::Gradient* PGMNDLOPCKK; // 0x48
		::UnityEngine::Gradient* FNLDALLEOIJ; // 0x50
		::System::Single KLBFFEFFJID; // 0x58
		::System::Int32 FNLJODICMKE; // 0x5C
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "CDIAEAMFDIB")->GetStaticField(0x167A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDIAEAMFDIB_CCTOR_OFFSET))();
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_ABKBOGIGAEH_OFFSET))(this);
		}

		static ::CDIAEAMFDIB* ACMKLFOMPFC(::System::Int32 a1)
		{
			return ((::CDIAEAMFDIB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::CDIAEAMFDIB* ACMKLFOMPFC_1()
		{
			return ((::CDIAEAMFDIB*(*)())((::PBYTE)hIl2Cpp + CDIAEAMFDIB_ACMKLFOMPFC_1_OFFSET))();
		}

		static ::CDIAEAMFDIB* ACMKLFOMPFC_2(::UnityEngine::Gradient* a1)
		{
			return ((::CDIAEAMFDIB*(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_ACMKLFOMPFC_2_OFFSET))(a1);
		}

		static ::System::Void NDINLCMBHMG(::CDIAEAMFDIB* a1)
		{
			return ((::System::Void(*)(::CDIAEAMFDIB*))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_NDINLCMBHMG_OFFSET))(a1);
		}

		::System::Single MAIJNFHJEBO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_MAIJNFHJEBO_OFFSET))(this);
		}

		::System::Void LKPHONPDJMK(::UnityEngine::Gradient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_LKPHONPDJMK_OFFSET))(this, a1);
		}

		::System::Void OALLGPDPIHI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_OALLGPDPIHI_OFFSET))(this, a1);
		}

		::System::Void GCMIKFEGODH(::UnityEngine::Gradient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_GCMIKFEGODH_OFFSET))(this, a1);
		}

		::System::Void NDEPIFKAHBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_NDEPIFKAHBI_OFFSET))(this);
		}

		::System::Void EHLOFDJDFIE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_EHLOFDJDFIE_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* CBPIGOCOHLK()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_CBPIGOCOHLK_OFFSET))(this);
		}

		::System::Int32 NKMOMLLAMND()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_NKMOMLLAMND_OFFSET))(this);
		}

		::UnityEngine::Gradient* AAIFNPBFMLO()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_AAIFNPBFMLO_OFFSET))(this);
		}

		::UnityEngine::Gradient* PGBBIFBLLNH()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_PGBBIFBLLNH_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIAEAMFDIB_TOSTRING_OFFSET))(this);
		}

	};
