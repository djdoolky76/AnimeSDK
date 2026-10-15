#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicEntityParam; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICENTITYPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA71CF0)
#define RPG_GAMECORE_SETDYNAMICENTITYPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA71B50)
#define RPG_GAMECORE_SETDYNAMICENTITYPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA71B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicEntityParam_TypeDefinitionIndex = 22670;

	class SetDynamicEntityParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* ParamTargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICENTITYPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICENTITYPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicEntityParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicEntityParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICENTITYPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
