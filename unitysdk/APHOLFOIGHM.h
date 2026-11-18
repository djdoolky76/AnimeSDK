#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define APHOLFOIGHM__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE2B80)

inline static constexpr unsigned int APHOLFOIGHM_TypeDefinitionIndex = 90224;

class APHOLFOIGHM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APHOLFOIGHM__CTOR_OFFSET))(this);
	}
};
