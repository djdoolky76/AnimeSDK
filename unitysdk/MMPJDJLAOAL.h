#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define MMPJDJLAOAL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x174AD530)
#define MMPJDJLAOAL__CTOR_OFFSET UNITYSDK_OFFSET(0x174AD6E0)

inline static constexpr unsigned int MMPJDJLAOAL_TypeDefinitionIndex = 86269;

class MMPJDJLAOAL : public ::System::Object
{
public:
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x10
	::System::Int32 OLDDKHNMMOI; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPJDJLAOAL__CTOR_OFFSET))(this);
	}

	::System::Boolean Evaluate(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + MMPJDJLAOAL_EVALUATE_OFFSET))(this, KECKGDFIALJ);
	}
};
