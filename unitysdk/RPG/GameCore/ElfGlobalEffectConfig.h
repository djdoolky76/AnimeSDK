#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfGlobalEffectConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFGLOBALEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D608AD0)
#define RPG_GAMECORE_ELFGLOBALEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6089A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfGlobalEffectConfig_TypeDefinitionIndex = 18456;

	class ElfGlobalEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SmokeEffectFood; // 0x10
		::System::String* SmokeEffectBuild; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFGLOBALEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfGlobalEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfGlobalEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFGLOBALEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
