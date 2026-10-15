#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowHintEffect; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWHINTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB3190)
#define RPG_GAMECORE_SHOWHINTEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB31A0)
#define RPG_GAMECORE_SHOWHINTEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB3160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHintEffect_TypeDefinitionIndex = 20564;

	class ShowHintEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 InstanceID; // 0x1C
		::System::Single TriggerHintRadius; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* HintEffectAttachPoint; // 0x28
		::System::String* HintEffectPath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHintEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowHintEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHINTEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
