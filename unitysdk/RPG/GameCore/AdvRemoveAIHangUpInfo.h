#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvRemoveAIHangUpInfo; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37EC20)
#define RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37EC30)
#define RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37EBF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRemoveAIHangUpInfo_TypeDefinitionIndex = 20234;

	class AdvRemoveAIHangUpInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* EntityInstanceID; // 0x20
		::RPG::GameCore::DynamicString* HangUpKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRemoveAIHangUpInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRemoveAIHangUpInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRemoveAIHangUpInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRemoveAIHangUpInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVEAIHANGUPINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
