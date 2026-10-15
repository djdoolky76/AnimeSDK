#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleEffect; }
namespace RPG::GameCore { class MarbleEffectConfig; }

#define RPG_GAMECORE_MARBLEEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83CE00)
#define RPG_GAMECORE_MARBLEEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83CC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleEffectConfig_TypeDefinitionIndex = 16909;

	class MarbleEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleEffect*>* EffectList; // 0x10
		::System::Boolean OverrideDefault; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
