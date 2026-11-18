#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

#define ELCIGKLDNCF_IIPFCHGOLKI_FMFDHJIEHNP_OFFSET UNITYSDK_OFFSET(0x154BBCD0)
#define ELCIGKLDNCF_IIPFCHGOLKI__CTOR_OFFSET UNITYSDK_OFFSET(0x3CAAD0)

inline static constexpr unsigned int ELCIGKLDNCF_IIPFCHGOLKI_TypeDefinitionIndex = 53126;

struct alignas(4) ELCIGKLDNCF_IIPFCHGOLKI
{
	::MoleMole::HollowChessboard::HollowCell GGLLPLPGMOA; // 0x10
	::MoleMole::HollowChessboard::HollowCell DKEEEDBKMEO; // 0x1C

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell GGLLPLPGMOA, ::MoleMole::HollowChessboard::HollowCell DKEEEDBKMEO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + ELCIGKLDNCF_IIPFCHGOLKI__CTOR_OFFSET))(this, GGLLPLPGMOA, DKEEEDBKMEO);
	}

	/*
	static ::ELCIGKLDNCF_IIPFCHGOLKI FMFDHJIEHNP()
	{
		return ((::ELCIGKLDNCF_IIPFCHGOLKI(*)())((::PBYTE)hIl2Cpp + ELCIGKLDNCF_IIPFCHGOLKI_FMFDHJIEHNP_OFFSET))();
	}
	*/
};
