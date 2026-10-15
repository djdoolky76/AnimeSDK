#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonoEffectFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D957000)
#define RPG_GAMECORE_REMOVEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D957020)
#define RPG_GAMECORE_REMOVEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D956FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveEffect_TypeDefinitionIndex = 22882;

	class RemoveEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPathKey; // 0x20
		::System::String* EffectPath; // 0x28
		::System::String* UniqueEffectName; // 0x30
		::System::String* AttachPointName; // 0x38
		::Il2CppArray<::RPG::GameCore::MonoEffectFlag>* Flags; // 0x40
		::System::Boolean Unbind; // 0x48
		::System::Boolean IsNeedFadeOut; // 0x49
		::System::Boolean ForceImmediateFadeOut; // 0x4A
		::System::Byte _padding0[0x1];
		::System::Single FadeOutRegionStart; // 0x4C
		::System::Single FadeOutRegionEnd; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
