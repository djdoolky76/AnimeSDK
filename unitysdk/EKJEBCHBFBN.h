#pragma once
#include "unitysdk/unitysdk.h"
class AAAGCHBIIFI;
class EKJEBCHBFBN;
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
class ODGPPIHLOFF;
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define EKJEBCHBFBN_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x19992880)
#define EKJEBCHBFBN_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0x19991FD0)
#define EKJEBCHBFBN_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x19991E00)
#define EKJEBCHBFBN_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0x199926B0)
#define EKJEBCHBFBN_CBPIGOCOHLK_OFFSET UNITYSDK_OFFSET(0x19992BC0)
#define EKJEBCHBFBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x19992C50)
#define EKJEBCHBFBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x19991F40)
#define EKJEBCHBFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x199920F0)
#define EKJEBCHBFBN_GBCKPLJAGKA_OFFSET UNITYSDK_OFFSET(0x19992310)
#define EKJEBCHBFBN_GCENGIHIBJF_OFFSET UNITYSDK_OFFSET(0x19991D60)
#define EKJEBCHBFBN_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x19992740)
#define EKJEBCHBFBN_IPHBAEIGNCM_OFFSET UNITYSDK_OFFSET(0x19992200)
#define EKJEBCHBFBN_LHMGOMFKMLB_OFFSET UNITYSDK_OFFSET(0x19992940)
#define EKJEBCHBFBN_NDINLCMBHMG_OFFSET UNITYSDK_OFFSET(0x19992170)
#define EKJEBCHBFBN_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x199927A0)
#define EKJEBCHBFBN_PKCKPFHCODN_OFFSET UNITYSDK_OFFSET(0x19991C80)
#define EKJEBCHBFBN_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x19992A00)

inline static constexpr unsigned int EKJEBCHBFBN_TypeDefinitionIndex = 50610;

	class EKJEBCHBFBN
	{
	public:
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "EKJEBCHBFBN")->GetStaticField(0x1ED50);
		}

		::System::Void _ctor(::UnityEngine::RenderTexture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKJEBCHBFBN_CCTOR_OFFSET))();
		}

		::System::Void PKCKPFHCODN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_PKCKPFHCODN_OFFSET))(this);
		}

		static ::EKJEBCHBFBN* ACMKLFOMPFC(::System::String* a1)
		{
			return ((::EKJEBCHBFBN*(*)(::System::String*))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::EKJEBCHBFBN* ACMKLFOMPFC_1(::UnityEngine::RenderTexture* a1)
		{
			return ((::EKJEBCHBFBN*(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_ACMKLFOMPFC_1_OFFSET))(a1);
		}

		static ::System::Void NDINLCMBHMG(::EKJEBCHBFBN* a1)
		{
			return ((::System::Void(*)(::EKJEBCHBFBN*))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_NDINLCMBHMG_OFFSET))(a1);
		}

		static ::AAAGCHBIIFI* IPHBAEIGNCM()
		{
			return ((::AAAGCHBIIFI*(*)())((::PBYTE)hIl2Cpp + EKJEBCHBFBN_IPHBAEIGNCM_OFFSET))();
		}

		static ::EKJEBCHBFBN* GBCKPLJAGKA(::UnityEngine::Texture* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::EKJEBCHBFBN*(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_GBCKPLJAGKA_OFFSET))(a1, a2, a3);
		}

		::System::Void GCENGIHIBJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_GCENGIHIBJF_OFFSET))(this);
		}

		::System::Void AHGNCDFAFBM(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_AHGNCDFAFBM_OFFSET))(this, a1);
		}

		::ODGPPIHLOFF* HKEPJLDBGIG(::System::Boolean a1)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Boolean LHMGOMFKMLB(::GGJFAFONDHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_LHMGOMFKMLB_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* CBPIGOCOHLK()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJEBCHBFBN_CBPIGOCOHLK_OFFSET))(this);
		}

	};
