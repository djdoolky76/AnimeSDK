#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAttachPointComponentConfig; }
namespace RPG::GameCore { class LittleGameAttachPointConfig; }

#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DD2B0)
#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DD2C0)
#define RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DD280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAttachPointComponentConfig_TypeDefinitionIndex = 18856;

	class LittleGameAttachPointComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean HasAttachPoint; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::LittleGameAttachPointConfig* Config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAttachPointComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAttachPointComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAttachPointComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAttachPointComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEATTACHPOINTCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
