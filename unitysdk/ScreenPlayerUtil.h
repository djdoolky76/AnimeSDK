#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCREENPLAYERUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x194C7280)

inline static constexpr unsigned int ScreenPlayerUtil_TypeDefinitionIndex = 88735;

class ScreenPlayerUtil : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENPLAYERUTIL__CTOR_OFFSET))(this);
	}
};
