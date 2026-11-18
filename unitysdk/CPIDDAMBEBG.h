#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CPIDDAMBEBG__CTOR_OFFSET UNITYSDK_OFFSET(0x16889740)

inline static constexpr unsigned int CPIDDAMBEBG_TypeDefinitionIndex = 48674;

class CPIDDAMBEBG : public ::System::Object
{
public:
	::System::Boolean GCKLLCMIFMC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIDDAMBEBG__CTOR_OFFSET))(this);
	}
};
