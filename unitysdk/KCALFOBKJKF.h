#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KCALFOBKJKF_ACGBIOICLEO_OFFSET UNITYSDK_OFFSET(0xBBB8C20)
#define KCALFOBKJKF_BIMECHPBPLB_OFFSET UNITYSDK_OFFSET(0xBBB8CB0)
#define KCALFOBKJKF_POMIODIGOEB_OFFSET UNITYSDK_OFFSET(0xBBB8D20)

inline static constexpr unsigned int KCALFOBKJKF_TypeDefinitionIndex = 79838;

	class KCALFOBKJKF : public ::System::Object
	{
	public:
		static ::System::Single ACGBIOICLEO(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KCALFOBKJKF_ACGBIOICLEO_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean BIMECHPBPLB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KCALFOBKJKF_BIMECHPBPLB_OFFSET))(a1, a2);
		}

		static ::System::Single POMIODIGOEB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KCALFOBKJKF_POMIODIGOEB_OFFSET))(a1, a2);
		}

	};
