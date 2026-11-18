#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define LOJNMINBAJI__CTOR_OFFSET UNITYSDK_OFFSET(0x185140D0)

inline static constexpr unsigned int LOJNMINBAJI_TypeDefinitionIndex = 92427;

class LOJNMINBAJI : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOJNMINBAJI__CTOR_OFFSET))(this);
	}
};
