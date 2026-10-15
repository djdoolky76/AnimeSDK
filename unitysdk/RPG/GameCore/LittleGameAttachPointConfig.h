#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAttachPointConfig; }
namespace RPG::GameCore { class LittleGameAttachPointInfo; }

#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AFA00)
#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AF940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAttachPointConfig_TypeDefinitionIndex = 18855;

	class LittleGameAttachPointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameAttachPointInfo*>* AttachPoints; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAttachPointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAttachPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
