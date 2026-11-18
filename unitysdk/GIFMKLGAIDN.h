#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GIFMKLGAIDN__CTOR_OFFSET UNITYSDK_OFFSET(0x116FA140)

inline static constexpr unsigned int GIFMKLGAIDN_TypeDefinitionIndex = 45021;

class GIFMKLGAIDN : public ::System::Object
{
public:
	::System::Int32 BMGLEAINAEK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFMKLGAIDN__CTOR_OFFSET))(this);
	}
};
