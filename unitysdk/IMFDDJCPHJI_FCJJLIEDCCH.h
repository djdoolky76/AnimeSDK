#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define IMFDDJCPHJI_FCJJLIEDCCH_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1ACC06E0)
#define IMFDDJCPHJI_FCJJLIEDCCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC0350)

inline static constexpr unsigned int IMFDDJCPHJI_FCJJLIEDCCH_TypeDefinitionIndex = 67031;

class IMFDDJCPHJI_FCJJLIEDCCH : public ::System::Object
{
public:
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDDJCPHJI_FCJJLIEDCCH__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFDDJCPHJI_FCJJLIEDCCH_LIDNPLMPHAL_OFFSET))(this);
	}
};
