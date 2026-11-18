#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IIAGPEKHGFC__CTOR_OFFSET UNITYSDK_OFFSET(0x153AB080)

inline static constexpr unsigned int IIAGPEKHGFC_TypeDefinitionIndex = 60149;

class IIAGPEKHGFC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAGPEKHGFC__CTOR_OFFSET))(this);
	}
};
