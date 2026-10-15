#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MapRotationEntityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpecialNPCEffectConfig; }

#define RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFFCF0)
#define RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAFFD00)
#define RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAFFCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCEffectConfig_TypeDefinitionIndex = 17031;

	class SpecialNPCEffectConfig : public ::RPG::GameCore::MapRotationEntityEffectConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* NpcIDs; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialNPCEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialNPCEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialNPCEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialNPCEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
