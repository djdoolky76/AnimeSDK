#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DAJMNDHMNNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1689AA00)

inline static constexpr unsigned int DAJMNDHMNNO_TypeDefinitionIndex = 81103;

class DAJMNDHMNNO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJMNDHMNNO__CTOR_OFFSET))(this);
	}
};
