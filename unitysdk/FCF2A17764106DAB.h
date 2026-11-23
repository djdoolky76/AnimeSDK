#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A1B77257F6000407.h"

class A8EB745DA234C3CC;
namespace System { class String; }

#define FCF2A17764106DAB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FCF2A17764106DAB_TypeDefinitionIndex = 7049;

class FCF2A17764106DAB : public ::A1B77257F6000407
{
public:
	::System::String* A4E84C173B0D2D94; // 0x10
	::System::String* E8482CB629DCB67C; // 0x18
	::A8EB745DA234C3CC* E503CF3EAE138E9D; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCF2A17764106DAB__CTOR_OFFSET))(this);
	}
};
