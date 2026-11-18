#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ChessboardView/LineInfo.h"
#include "unitysdk/PIHKNACMKIC.h"
#include "unitysdk/System/Object.h"

#define MDPPENCOFEI__CTOR_OFFSET UNITYSDK_OFFSET(0x11F378E0)

inline static constexpr unsigned int MDPPENCOFEI_TypeDefinitionIndex = 59342;

class MDPPENCOFEI : public ::System::Object
{
public:
	::System::Int32 GLOJDIODCCJ; // 0x10
	::PIHKNACMKIC NHACJAEKBCJ; // 0x14
	::MoleMole::HollowChessboard::ChessboardView::LineInfo OGAMHNKMNDA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDPPENCOFEI__CTOR_OFFSET))(this);
	}
};
