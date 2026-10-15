#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveMiniEmoEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEMINIEMOEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D985D60)
#define RPG_GAMECORE_REMOVEMINIEMOEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D985DA0)
#define RPG_GAMECORE_REMOVEMINIEMOEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D985D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveMiniEmoEffect_TypeDefinitionIndex = 21864;

	class RemoveMiniEmoEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMINIEMOEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveMiniEmoEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveMiniEmoEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMINIEMOEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveMiniEmoEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveMiniEmoEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEMINIEMOEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
