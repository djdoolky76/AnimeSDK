#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KOGLOGLDFFA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C89E30)

inline static constexpr unsigned int KOGLOGLDFFA_TypeDefinitionIndex = 60198;

class KOGLOGLDFFA : public ::System::Object
{
public:
	::System::Single EJAOAGGJHHA; // 0x10
	::System::Boolean CPPGHJDIBKL; // 0x14
	::System::Boolean NENLMCBOEPM; // 0x15
	::System::Byte _padding0[0x2];
	::System::Int32 LJMPPBEMEPP; // 0x18
	::System::Single PDCFDLKMKHI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOGLOGLDFFA__CTOR_OFFSET))(this);
	}
};
