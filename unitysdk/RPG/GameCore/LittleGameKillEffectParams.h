#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameKillEffectParams; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEKILLEFFECTPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E35A0)
#define RPG_GAMECORE_LITTLEGAMEKILLEFFECTPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E33E0)

namespace RPG::GameCore
{
	class LittleGameKillEffectParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectName; // 0x10
		::System::String* GlobalUniqueName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::Boolean NeedFade; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEKILLEFFECTPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameKillEffectParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameKillEffectParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEKILLEFFECTPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
