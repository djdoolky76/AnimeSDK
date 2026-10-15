#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvAddAIHangUpInfo; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVADDAIHANGUPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38DD60)
#define RPG_GAMECORE_ADVADDAIHANGUPINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38DD70)
#define RPG_GAMECORE_ADVADDAIHANGUPINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38DD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAddAIHangUpInfo_TypeDefinitionIndex = 20233;

	class AdvAddAIHangUpInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::RPG::GameCore::DynamicString* HangUpKey; // 0x28
		::System::Boolean AITickImmediately; // 0x30
		::System::Boolean SuccessWhenNoAIComponent; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDAIHANGUPINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAddAIHangUpInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAddAIHangUpInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDAIHANGUPINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAddAIHangUpInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAddAIHangUpInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVADDAIHANGUPINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
