#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/PINBHKFHPAL.h"

#define GMMKDLPDENC_DOODNGLPOJK_OFFSET UNITYSDK_OFFSET(0x13D6B590)
#define GMMKDLPDENC_GKLGMCNKKPD_OFFSET UNITYSDK_OFFSET(0x13D6B5D0)
#define GMMKDLPDENC_JAILGLBIMNK_OFFSET UNITYSDK_OFFSET(0x13D6B550)
#define GMMKDLPDENC__CTOR_OFFSET UNITYSDK_OFFSET(0x13D6B610)

inline static constexpr unsigned int GMMKDLPDENC_TypeDefinitionIndex = 79794;

class GMMKDLPDENC : public ::PINBHKFHPAL
{
public:
	::MoleMole::HollowChessboard::HollowCell MBECJOGLHFA; // 0x10
	::MoleMole::HollowChessboard::HollowCell MCKGJHFAILB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMKDLPDENC__CTOR_OFFSET))(this);
	}

	::System::Boolean JAILGLBIMNK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMKDLPDENC_JAILGLBIMNK_OFFSET))(this);
	}

	::System::Void DOODNGLPOJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMKDLPDENC_DOODNGLPOJK_OFFSET))(this);
	}

	::System::Void GKLGMCNKKPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMMKDLPDENC_GKLGMCNKKPD_OFFSET))(this);
	}
};
