#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineEntityAction.h"

class BOFJAODPMNI;
class PINBHKFHPAL;
namespace MoleMole { class BlendTextureSheetData; }
namespace System { class String; }

#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x131C55C0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_FINDBLENDTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x131C5560)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_RUN_OFFSET UNITYSDK_OFFSET(0x131C4CC0)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x131C5830)
#define MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x131C5840)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int SubStateFadeOutEntityAction_TypeDefinitionIndex = 79115;

	class SubStateFadeOutEntityAction : public ::MoleMole::ChessStateMachine::StateMachineEntityAction
	{
	public:
		::BOFJAODPMNI* _actionContext; // 0x28
		::System::Int32 FadeOutConfigID; // 0x30
		::System::Boolean UseTextureSheetFade; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_RUN_OFFSET))(this, context);
		}

		::MoleMole::BlendTextureSheetData* FindBlendTextureSheetData(::System::String* key)
		{
			return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_FINDBLENDTEXTURESHEETDATA_OFFSET))(this, key);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SUBSTATEFADEOUTENTITYACTION___BASE_ACTIONOVER_OFFSET))(this);
		}
	};
}
