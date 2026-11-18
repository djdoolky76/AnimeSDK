#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HICHPAAKIOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE96570)

inline static constexpr unsigned int HICHPAAKIOK_TypeDefinitionIndex = 34806;

class HICHPAAKIOK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICHPAAKIOK__CTOR_OFFSET))(this);
	}
};
