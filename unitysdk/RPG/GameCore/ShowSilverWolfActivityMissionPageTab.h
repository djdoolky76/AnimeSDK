#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowSilverWolfActivityMissionPageTab; }

#define RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB7090)
#define RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB70A0)
#define RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB7060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSilverWolfActivityMissionPageTab_TypeDefinitionIndex = 21701;

	class ShowSilverWolfActivityMissionPageTab : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 TabIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowSilverWolfActivityMissionPageTab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSILVERWOLFACTIVITYMISSIONPAGETAB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
