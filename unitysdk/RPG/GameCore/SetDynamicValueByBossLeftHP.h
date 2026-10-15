#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByBossLeftHP; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA74E20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA74FE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA74E30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA74DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBossLeftHP_TypeDefinitionIndex = 22771;

	class SetDynamicValueByBossLeftHP : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* BossTargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBossLeftHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBossLeftHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBossLeftHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBossLeftHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBOSSLEFTHP_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
