#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGKOFMFKNNO__CTOR_OFFSET UNITYSDK_OFFSET(0x160A2980)

inline static constexpr unsigned int IGKOFMFKNNO_TypeDefinitionIndex = 67535;

class IGKOFMFKNNO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKOFMFKNNO__CTOR_OFFSET))(this);
	}
};
