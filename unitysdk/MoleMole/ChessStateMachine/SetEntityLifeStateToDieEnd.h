#pragma once
#include "unitysdk/unitysdk.h"

class BOFJAODPMNI;

#define MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND_RUN_OFFSET UNITYSDK_OFFSET(0x192240D0)
#define MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x19224210)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SetEntityLifeStateToDieEnd_TypeDefinitionIndex = 45358;

	class SetEntityLifeStateToDieEnd
	{
	public:
		::BOFJAODPMNI* _actionContext; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND__CTOR_OFFSET))(this);
		}

		::System::Void Run(::BOFJAODPMNI* context)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJAODPMNI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SETENTITYLIFESTATETODIEEND_RUN_OFFSET))(this, context);
		}
	};
}
