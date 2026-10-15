#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopEffectFollow; }
namespace System { class String; }

#define RPG_GAMECORE_STOPEFFECTFOLLOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB24FC0)
#define RPG_GAMECORE_STOPEFFECTFOLLOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB24FD0)
#define RPG_GAMECORE_STOPEFFECTFOLLOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB24F80)

namespace RPG::GameCore
{
	class StopEffectFollow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* EffectList; // 0x18
		::System::String* UniqueEffectName; // 0x20
		::System::Boolean IsStop; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopEffectFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopEffectFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopEffectFollow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopEffectFollow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPEFFECTFOLLOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
