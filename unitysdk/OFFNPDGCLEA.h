#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OFFNPDGCLEA__CTOR_OFFSET UNITYSDK_OFFSET(0xFD75D40)

inline static constexpr unsigned int OFFNPDGCLEA_TypeDefinitionIndex = 48790;

class OFFNPDGCLEA : public ::System::Object
{
public:
	::System::Int32 JMANNKDBPIP; // 0x10
	::System::Int32 AHBMJOKKHIA; // 0x14
	::System::Int32 KCDMGJEIADG; // 0x18
	::System::Int32 FAKCPOBBJON; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFNPDGCLEA__CTOR_OFFSET))(this);
	}
};
