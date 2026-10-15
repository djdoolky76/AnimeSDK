#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFPMCBDHGPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB946F0)

inline static constexpr unsigned int JFPMCBDHGPG_TypeDefinitionIndex = 42355;

	class JFPMCBDHGPG : public ::System::Object
	{
	public:
		::System::Single MNDFOPKBHKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPMCBDHGPG_CTOR_OFFSET))(this);
		}

	};
