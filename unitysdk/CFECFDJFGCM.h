#pragma once
#include "unitysdk/unitysdk.h"
class CFECFDJFGCM;
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
namespace System { class String; }

#define CFECFDJFGCM_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1884C8B0)
#define CFECFDJFGCM_CBPIGOCOHLK_OFFSET UNITYSDK_OFFSET(0x1884CB90)
#define CFECFDJFGCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1884CC50)
#define CFECFDJFGCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1884CA80)
#define CFECFDJFGCM_NDINLCMBHMG_OFFSET UNITYSDK_OFFSET(0x1884CAE0)

inline static constexpr unsigned int CFECFDJFGCM_TypeDefinitionIndex = 50554;

	class CFECFDJFGCM
	{
	public:
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "CFECFDJFGCM")->GetStaticField(0xC630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFECFDJFGCM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFECFDJFGCM_CCTOR_OFFSET))();
		}

		static ::CFECFDJFGCM* ACMKLFOMPFC(::System::String* a1)
		{
			return ((::CFECFDJFGCM*(*)(::System::String*))((::PBYTE)hIl2Cpp + CFECFDJFGCM_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::System::Void NDINLCMBHMG(::CFECFDJFGCM* a1)
		{
			return ((::System::Void(*)(::CFECFDJFGCM*))((::PBYTE)hIl2Cpp + CFECFDJFGCM_NDINLCMBHMG_OFFSET))(a1);
		}

		::GGJFAFONDHN* CBPIGOCOHLK()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFECFDJFGCM_CBPIGOCOHLK_OFFSET))(this);
		}

	};
