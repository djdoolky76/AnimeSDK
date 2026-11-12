#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JFPMCBDHGPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5AB10)

inline static constexpr unsigned int JFPMCBDHGPG_TypeDefinitionIndex = 43330;

	class JFPMCBDHGPG : public ::System::Object
	{
	public:
		::System::Single MNDFOPKBHKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFPMCBDHGPG_CTOR_OFFSET))(this);
		}

	};
