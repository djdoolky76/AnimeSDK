#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KCMOMKHGDBM__CTOR_OFFSET UNITYSDK_OFFSET(0x1860A2B0)

inline static constexpr unsigned int KCMOMKHGDBM_TypeDefinitionIndex = 91809;

class KCMOMKHGDBM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMOMKHGDBM__CTOR_OFFSET))(this);
	}
};
