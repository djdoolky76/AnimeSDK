#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetCharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6C5E0)
#define RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6C5F0)
#define RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6C5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterAtlasFaceEmotion_TypeDefinitionIndex = 20626;

	class SetCharacterAtlasFaceEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* CharacterUniqueName; // 0x20
		::System::String* MeshName; // 0x28
		::System::UInt32 EmotionIndex; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERATLASFACEEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
