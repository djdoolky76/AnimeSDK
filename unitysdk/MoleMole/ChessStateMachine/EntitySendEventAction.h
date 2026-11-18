#pragma once
#include "unitysdk/unitysdk.h"

class BOFJAODPMNI;
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUNINNER_OFFSET UNITYSDK_OFFSET(0x1BA16BF0)
#define MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1BA16B90)
#define MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA16ED0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int EntitySendEventAction_TypeDefinitionIndex = 45546;

	class EntitySendEventAction
	{
	public:
		::System::String* EventName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::BOFJAODPMNI* context)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJAODPMNI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUN_OFFSET))(this, context);
		}

		::System::Void RunInner(::BOFJAODPMNI* context)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJAODPMNI*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_ENTITYSENDEVENTACTION_RUNINNER_OFFSET))(this, context);
		}
	};
}
