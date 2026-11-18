#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BPJNJNKDNDL__CTOR_OFFSET UNITYSDK_OFFSET(0x11527000)

inline static constexpr unsigned int BPJNJNKDNDL_TypeDefinitionIndex = 41632;

class BPJNJNKDNDL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJNJNKDNDL__CTOR_OFFSET))(this);
	}
};
