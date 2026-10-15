#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByStanceCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAB2B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAAB470)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAB2C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAB280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByStanceCount_TypeDefinitionIndex = 23083;

	class SetDynamicValueByStanceCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByStanceCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByStanceCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYSTANCECOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
