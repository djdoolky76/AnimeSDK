#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBAMBIMMJKB.h"
namespace System { class String; }

#define DDKLDHNOMIF_CTOR_OFFSET UNITYSDK_OFFSET(0xEE2A620)
#define DDKLDHNOMIF_IAMCNOAAALI_OFFSET UNITYSDK_OFFSET(0xEE2A570)
#define DDKLDHNOMIF_JCKGONAAIPB_OFFSET UNITYSDK_OFFSET(0xEE2A5E0)

inline static constexpr unsigned int DDKLDHNOMIF_TypeDefinitionIndex = 73730;

	class DDKLDHNOMIF : public ::LBAMBIMMJKB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKLDHNOMIF_CTOR_OFFSET))(this);
		}

		::System::String* IAMCNOAAALI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKLDHNOMIF_IAMCNOAAALI_OFFSET))(this);
		}

		::System::Void JCKGONAAIPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKLDHNOMIF_JCKGONAAIPB_OFFSET))(this);
		}

	};
