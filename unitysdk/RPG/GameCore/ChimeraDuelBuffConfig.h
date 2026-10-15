#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace RPG::GameCore { class ChimeraDuelBuffDisplayConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59B930)
#define RPG_GAMECORE_CHIMERADUELBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59B780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffConfig_TypeDefinitionIndex = 16004;

	class ChimeraDuelBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelBuffType BuffType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::ChimeraDuelEffectConfig* EffectConfig; // 0x18
		::RPG::GameCore::BaseChimeraDuelValueGetter* DurationValueGetter; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::GameCore::ChimeraDuelBuffDisplayConfig* Display; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
