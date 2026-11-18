#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKOPPMAKPH.h"
#include "unitysdk/System/Object.h"

#define PBHPOOFFAFI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1552C4C0)
#define PBHPOOFFAFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1552C4B0)

inline static constexpr unsigned int PBHPOOFFAFI_TypeDefinitionIndex = 76778;

class PBHPOOFFAFI : public ::System::Object
{
public:
	::System::Int32 FNMDICKEGCJ; // 0x10
	::System::Int32 HPDKPILNKCH; // 0x14
	::System::Int32 KGADDPILJME; // 0x18
	::System::Int32 CFNHKJCDOKC; // 0x1C
	::ABKOPPMAKPH BEGGKPBDKCI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHPOOFFAFI__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::ABKOPPMAKPH EHNJCPCLCOJ, ::System::Int32 PAEEEHKILOC, ::System::Int32 LHHIIDPIJJB)
	{
		return ((::System::Void(*)(::PVOID, ::ABKOPPMAKPH, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PBHPOOFFAFI_BBOMJDBNHIC_OFFSET))(this, EHNJCPCLCOJ, PAEEEHKILOC, LHHIIDPIJJB);
	}
};
