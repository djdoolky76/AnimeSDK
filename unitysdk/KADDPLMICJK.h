#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KADDPLMICJK_ANIKEAENGNH_OFFSET UNITYSDK_OFFSET(0xB2D2900)
#define KADDPLMICJK_GINCCPECLDF_OFFSET UNITYSDK_OFFSET(0xB2D2A40)
#define KADDPLMICJK_IMGPJKMLKAC_OFFSET UNITYSDK_OFFSET(0xB2D2980)

inline static constexpr unsigned int KADDPLMICJK_TypeDefinitionIndex = 67280;

	class KADDPLMICJK : public ::System::Object
	{
	public:
		static ::System::Boolean ANIKEAENGNH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KADDPLMICJK_ANIKEAENGNH_OFFSET))(a1);
		}

		static ::System::Boolean IMGPJKMLKAC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KADDPLMICJK_IMGPJKMLKAC_OFFSET))(a1);
		}

		static ::System::Boolean GINCCPECLDF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KADDPLMICJK_GINCCPECLDF_OFFSET))(a1);
		}

	};
