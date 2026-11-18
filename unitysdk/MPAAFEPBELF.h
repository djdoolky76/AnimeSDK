#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MPAAFEPBELF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F74F0)

inline static constexpr unsigned int MPAAFEPBELF_TypeDefinitionIndex = 34083;

class MPAAFEPBELF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPAAFEPBELF__CTOR_OFFSET))(this);
	}
};
