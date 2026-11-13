#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JPOKOHEHHLL_CTOR_OFFSET UNITYSDK_OFFSET(0x19DA4540)

inline static constexpr unsigned int JPOKOHEHHLL_TypeDefinitionIndex = 56714;

	class JPOKOHEHHLL : public ::System::Object
	{
	public:
		::System::Boolean JODPAKMCKGI; // 0x10
		::System::Boolean JNCNLLGPAHC; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOKOHEHHLL_CTOR_OFFSET))(this);
		}

	};
