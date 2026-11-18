#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class GLPLHJNGEEC;
class PIHMAKEPOGO;

#define PIHMAKEPOGO_CLMKDINCHIL_AMJDLNIANNG_OFFSET UNITYSDK_OFFSET(0x1197E7C0)
#define PIHMAKEPOGO_CLMKDINCHIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1197E7B0)

inline static constexpr unsigned int PIHMAKEPOGO_CLMKDINCHIL_TypeDefinitionIndex = 42381;

class PIHMAKEPOGO_CLMKDINCHIL : public ::System::Object
{
public:
	::GLPLHJNGEEC* HMMMOCJAEOA; // 0x10
	::PIHMAKEPOGO* AMANIOGMBHI; // 0x18
	::BPHGNMNLLHF* ELDENCFCNNE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMAKEPOGO_CLMKDINCHIL__CTOR_OFFSET))(this);
	}

	::BPHGNMNLLHF* AMJDLNIANNG(::System::Int32 PKMFBJMJCOO)
	{
		return ((::BPHGNMNLLHF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PIHMAKEPOGO_CLMKDINCHIL_AMJDLNIANNG_OFFSET))(this, PKMFBJMJCOO);
	}
};
