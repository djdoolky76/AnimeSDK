#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }

#define GMCOPGFANFM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1814FAE0)
#define GMCOPGFANFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1814FB30)

inline static constexpr unsigned int GMCOPGFANFM_TypeDefinitionIndex = 92585;

class GMCOPGFANFM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMCOPGFANFM__CTOR_OFFSET))(this);
	}

	::System::Boolean Evaluate(::MoleMole::HollowChessboard::HollowEntity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + GMCOPGFANFM_EVALUATE_OFFSET))(this, KECKGDFIALJ);
	}
};
