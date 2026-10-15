#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPValueType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByCurrentBP; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA3960)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA3B70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA3970)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA3920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCurrentBP_TypeDefinitionIndex = 23093;

	class SetDynamicValueByCurrentBP : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TeamType Team; // 0x24
		::RPG::GameCore::BPValueType ValueType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCurrentBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCurrentBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCurrentBP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCurrentBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCURRENTBP_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
