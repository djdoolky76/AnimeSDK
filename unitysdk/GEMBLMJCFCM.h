#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GEMBLMJCFCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DCDB0)

inline static constexpr unsigned int GEMBLMJCFCM_TypeDefinitionIndex = 34081;

class GEMBLMJCFCM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEMBLMJCFCM__CTOR_OFFSET))(this);
	}
};
