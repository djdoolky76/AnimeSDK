#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationEntityEffect; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }

#define RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82F4A0)
#define RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D82F4B0)
#define RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D82F320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationEntityEffectConfig_TypeDefinitionIndex = 17029;

	class MapRotationEntityEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationEntityEffect*>* EffectsOnHide; // 0x10
		::Il2CppArray<::RPG::GameCore::MapRotationEntityEffect*>* EffectsOnInactive; // 0x18
		::Il2CppArray<::RPG::GameCore::MapRotationEntityEffect*>* EffectsOnActive; // 0x20
		::Il2CppArray<::RPG::GameCore::MapRotationEntityEffect*>* EffectsOnDelete; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationEntityEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationEntityEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONENTITYEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
