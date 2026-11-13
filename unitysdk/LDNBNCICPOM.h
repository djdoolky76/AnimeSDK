#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOIIMBFKMJC.h"
class KANHBPAGDJD;

#define LDNBNCICPOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC99CE0)
#define LDNBNCICPOM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AC99C80)

inline static constexpr unsigned int LDNBNCICPOM_TypeDefinitionIndex = 55472;

	class LDNBNCICPOM : public ::GOIIMBFKMJC
	{
	public:
		::System::UInt32 EPFICDCCGPE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDNBNCICPOM_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::KANHBPAGDJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KANHBPAGDJD*))((::PBYTE)hIl2Cpp + LDNBNCICPOM_EXECUTE_OFFSET))(this, a1);
		}

	};
