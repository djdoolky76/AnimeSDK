#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define PKJDLDGHDMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F8160)

inline static constexpr unsigned int PKJDLDGHDMH_TypeDefinitionIndex = 58258;

class PKJDLDGHDMH : public ::System::EventArgs
{
public:
	::System::Int32 OPDEEIBCLGE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJDLDGHDMH__CTOR_OFFSET))(this);
	}
};
