#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchMascotSection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchMascotResetSection; }

#define RPG_GAMECORE_SWITCHMASCOTRESETSECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB44290)
#define RPG_GAMECORE_SWITCHMASCOTRESETSECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB442A0)
#define RPG_GAMECORE_SWITCHMASCOTRESETSECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB44260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchMascotResetSection_TypeDefinitionIndex = 22001;

	class SwitchMascotResetSection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SwitchMascotSection Section; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTRESETSECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotResetSection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotResetSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTRESETSECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotResetSection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotResetSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTRESETSECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
