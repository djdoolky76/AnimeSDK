#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveDynamicEntityParam; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984770)
#define RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984780)
#define RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveDynamicEntityParam_TypeDefinitionIndex = 22672;

	class RemoveDynamicEntityParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* ParamTargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEDYNAMICENTITYPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
