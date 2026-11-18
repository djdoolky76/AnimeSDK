#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/DoubleScreenShiftState.h"
#include "unitysdk/System/Object.h"

#define GFHIJLCDBFN__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD5B90)

inline static constexpr unsigned int GFHIJLCDBFN_TypeDefinitionIndex = 77957;

class GFHIJLCDBFN : public ::System::Object
{
public:
	::MoleMole::GalGame::DoubleScreenShiftState LIBKODPFBNG; // 0x10

	::System::Void _ctor(::MoleMole::GalGame::DoubleScreenShiftState OHNPMPKPFLA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::DoubleScreenShiftState))((::PBYTE)hIl2Cpp + GFHIJLCDBFN__CTOR_OFFSET))(this, OHNPMPKPFLA);
	}
};
