#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define NNCILIONLBN__CTOR_OFFSET UNITYSDK_OFFSET(0x5A6C10)

inline static constexpr unsigned int NNCILIONLBN_TypeDefinitionIndex = 84834;

struct alignas(4) NNCILIONLBN
{
	::System::Single LLBEKEFONPC; // 0x10
	::System::Byte _padding0[0x4];
	::MoleMole::EntityHandle FKNBFFACJPM; // 0x18

	::System::Void _ctor(::System::Single& PMNLNNGEIFM, ::MoleMole::EntityHandle& HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + NNCILIONLBN__CTOR_OFFSET))(this, PMNLNNGEIFM, HPADNAEINPK);
	}
};
