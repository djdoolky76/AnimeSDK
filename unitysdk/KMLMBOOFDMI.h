#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define KMLMBOOFDMI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x19965610)
#define KMLMBOOFDMI__CTOR_OFFSET UNITYSDK_OFFSET(0x19965660)

inline static constexpr unsigned int KMLMBOOFDMI_TypeDefinitionIndex = 44150;

class KMLMBOOFDMI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLMBOOFDMI__CTOR_OFFSET))(this);
	}

	::System::Boolean Evaluate(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + KMLMBOOFDMI_EVALUATE_OFFSET))(this, KECKGDFIALJ);
	}
};
