#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class EIAGEHNBONE;

#define EIAGEHNBONE_KCPPGKKDCJA_CKHKIPLAJCM_OFFSET UNITYSDK_OFFSET(0x1354BD20)
#define EIAGEHNBONE_KCPPGKKDCJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1354BD10)

inline static constexpr unsigned int EIAGEHNBONE_KCPPGKKDCJA_TypeDefinitionIndex = 67788;

class EIAGEHNBONE_KCPPGKKDCJA : public ::System::Object
{
public:
	::EIAGEHNBONE* KLHPEBKNIFB; // 0x10
	::MoleMole::HollowChessboard::HollowCell OPCJCEJKNGJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAGEHNBONE_KCPPGKKDCJA__CTOR_OFFSET))(this);
	}

	::System::Void CKHKIPLAJCM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIAGEHNBONE_KCPPGKKDCJA_CKHKIPLAJCM_OFFSET))(this);
	}
};
