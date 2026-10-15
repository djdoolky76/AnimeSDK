#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ReplaceCharacterEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REPLACECHARACTEREMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95A4A0)
#define RPG_GAMECORE_REPLACECHARACTEREMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D95A4B0)
#define RPG_GAMECORE_REPLACECHARACTEREMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95A470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReplaceCharacterEmotion_TypeDefinitionIndex = 22413;

	class ReplaceCharacterEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* UniqueName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACECHARACTEREMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReplaceCharacterEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReplaceCharacterEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACECHARACTEREMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReplaceCharacterEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReplaceCharacterEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACECHARACTEREMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
