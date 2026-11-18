#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define BCEIDBIIJAH_DOCMMCPPBLE_OFFSET UNITYSDK_OFFSET(0x750040)
#define BCEIDBIIJAH_PIDBNFCDNKM_OFFSET UNITYSDK_OFFSET(0x358710)

inline static constexpr unsigned int BCEIDBIIJAH_TypeDefinitionIndex = 83527;

struct alignas(4) BCEIDBIIJAH
{
	::MoleMole::EntityHandle HAGJCBEEDPJ; // 0x10

	::MoleMole::EntityHandle PIDBNFCDNKM()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + BCEIDBIIJAH_PIDBNFCDNKM_OFFSET))(this);
	}

	::System::Void DOCMMCPPBLE(::MoleMole::EntityHandle EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + BCEIDBIIJAH_DOCMMCPPBLE_OFFSET))(this, EGEGIMGMJHN);
	}
};
