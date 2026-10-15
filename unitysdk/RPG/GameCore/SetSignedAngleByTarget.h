#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSignedAngleByTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC0E70)
#define RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC0E80)
#define RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC0E40)

namespace RPG::GameCore
{
	class SetSignedAngleByTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSignedAngleByTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSignedAngleByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSignedAngleByTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSignedAngleByTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSIGNEDANGLEBYTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
