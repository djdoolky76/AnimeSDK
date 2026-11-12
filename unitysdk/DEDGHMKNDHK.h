#pragma once
#include "unitysdk/unitysdk.h"
class DEDGHMKNDHK;
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
namespace System { class String; }

#define DEDGHMKNDHK_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xEE4B3B0)
#define DEDGHMKNDHK_CBPIGOCOHLK_OFFSET UNITYSDK_OFFSET(0xEE4B5F0)
#define DEDGHMKNDHK_CCTOR_OFFSET UNITYSDK_OFFSET(0xEE4B690)
#define DEDGHMKNDHK_CTOR_OFFSET UNITYSDK_OFFSET(0xEE4B520)
#define DEDGHMKNDHK_NDINLCMBHMG_OFFSET UNITYSDK_OFFSET(0xEE4B560)

inline static constexpr unsigned int DEDGHMKNDHK_TypeDefinitionIndex = 50555;

	class DEDGHMKNDHK
	{
	public:
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "DEDGHMKNDHK")->GetStaticField(0x55D10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGHMKNDHK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEDGHMKNDHK_CCTOR_OFFSET))();
		}

		static ::DEDGHMKNDHK* ACMKLFOMPFC(::System::String* a1)
		{
			return ((::DEDGHMKNDHK*(*)(::System::String*))((::PBYTE)hIl2Cpp + DEDGHMKNDHK_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::System::Void NDINLCMBHMG(::DEDGHMKNDHK* a1)
		{
			return ((::System::Void(*)(::DEDGHMKNDHK*))((::PBYTE)hIl2Cpp + DEDGHMKNDHK_NDINLCMBHMG_OFFSET))(a1);
		}

		::GGJFAFONDHN* CBPIGOCOHLK()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGHMKNDHK_CBPIGOCOHLK_OFFSET))(this);
		}

	};
