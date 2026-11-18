#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OOIJIDMLIAC_COKGMOGPHBA;

#define OOIJIDMLIAC_EMHHLPELIOC_KEKGNGPMJGJ_OFFSET UNITYSDK_OFFSET(0x178A4DA0)
#define OOIJIDMLIAC_EMHHLPELIOC__CTOR_OFFSET UNITYSDK_OFFSET(0x178A4D90)

inline static constexpr unsigned int OOIJIDMLIAC_EMHHLPELIOC_TypeDefinitionIndex = 70891;

class OOIJIDMLIAC_EMHHLPELIOC : public ::System::Object
{
public:
	::OOIJIDMLIAC_COKGMOGPHBA* FGBNBFHOKAA; // 0x10
	::System::Int32 GLPGONDHMLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_EMHHLPELIOC__CTOR_OFFSET))(this);
	}

	::System::Boolean KEKGNGPMJGJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_EMHHLPELIOC_KEKGNGPMJGJ_OFFSET))(this);
	}
};
