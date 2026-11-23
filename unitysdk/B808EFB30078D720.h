#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define B808EFB30078D720__CTOR_OFFSET UNITYSDK_OFFSET(0x3C00650)

inline static constexpr unsigned int B808EFB30078D720_TypeDefinitionIndex = 11356;

class B808EFB30078D720 : public ::System::Object
{
public:
	::System::Byte B71DB94CCECA26C4; // 0x10
	::System::Byte AF731370E9766C0E; // 0x11

	::System::Void _ctor(::System::Byte AFE8F10692F5139F, ::System::Byte B33122576A2AAD61)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + B808EFB30078D720__CTOR_OFFSET))(this, AFE8F10692F5139F, B33122576A2AAD61);
	}
};
