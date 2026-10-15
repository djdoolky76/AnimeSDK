#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartAdvTutorialGraph; }
namespace System { class String; }

#define RPG_GAMECORE_STARTADVTUTORIALGRAPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1B700)
#define RPG_GAMECORE_STARTADVTUTORIALGRAPH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1B710)
#define RPG_GAMECORE_STARTADVTUTORIALGRAPH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1B6D0)

namespace RPG::GameCore
{
	class StartAdvTutorialGraph : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* LevelGraphPath; // 0x18
		::System::Boolean Close; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVTUTORIALGRAPH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartAdvTutorialGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartAdvTutorialGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVTUTORIALGRAPH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartAdvTutorialGraph* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartAdvTutorialGraph*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVTUTORIALGRAPH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
