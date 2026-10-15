#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartPropSceneSelection; }

#define RPG_GAMECORE_STARTPROPSCENESELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1DDC0)
#define RPG_GAMECORE_STARTPROPSCENESELECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1DDD0)
#define RPG_GAMECORE_STARTPROPSCENESELECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1DD80)

namespace RPG::GameCore
{
	class StartPropSceneSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MultiSelect; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single ClickCd; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPSCENESELECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartPropSceneSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartPropSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPSCENESELECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartPropSceneSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartPropSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTPROPSCENESELECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
