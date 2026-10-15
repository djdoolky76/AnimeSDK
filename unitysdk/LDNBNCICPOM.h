#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOIIMBFKMJC.h"
class KANHBPAGDJD;

#define LDNBNCICPOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB6378B0)
#define LDNBNCICPOM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB637850)

inline static constexpr unsigned int LDNBNCICPOM_TypeDefinitionIndex = 54308;

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
