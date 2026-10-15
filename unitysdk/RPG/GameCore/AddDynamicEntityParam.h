#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddDynamicEntityParam; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADDDYNAMICENTITYPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3866C0)
#define RPG_GAMECORE_ADDDYNAMICENTITYPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3866D0)
#define RPG_GAMECORE_ADDDYNAMICENTITYPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D386690)

namespace RPG::GameCore
{
	class AddDynamicEntityParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* ParamTargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDDYNAMICENTITYPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDDYNAMICENTITYPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDDYNAMICENTITYPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
