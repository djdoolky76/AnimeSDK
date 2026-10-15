#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByHPRatio; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA5E30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA61B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA5E40)
#define RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA5CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByHPRatio_TypeDefinitionIndex = 23086;

	class SetDynamicValueByHPRatio : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByHPRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByHPRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByHPRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYHPRATIO_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
