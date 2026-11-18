#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define PIPECBJCNHD__CTOR_OFFSET UNITYSDK_OFFSET(0x194A9060)

inline static constexpr unsigned int PIPECBJCNHD_TypeDefinitionIndex = 68341;

class PIPECBJCNHD : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell MKIFDGAEBIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPECBJCNHD__CTOR_OFFSET))(this);
	}
};
