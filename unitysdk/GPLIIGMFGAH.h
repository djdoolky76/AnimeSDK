#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPLIIGMFGAH__CTOR_OFFSET UNITYSDK_OFFSET(0x17A30880)

inline static constexpr unsigned int GPLIIGMFGAH_TypeDefinitionIndex = 59025;

class GPLIIGMFGAH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLIIGMFGAH__CTOR_OFFSET))(this);
	}
};
