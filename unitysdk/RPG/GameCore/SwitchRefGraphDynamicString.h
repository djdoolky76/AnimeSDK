#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchRefGraphDynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB46290)
#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB462A0)
#define RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46A20)

namespace RPG::GameCore
{
	class SwitchRefGraphDynamicString : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchRefGraphDynamicString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchRefGraphDynamicString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGRAPHDYNAMICSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
