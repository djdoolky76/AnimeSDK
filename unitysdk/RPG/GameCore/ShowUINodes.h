#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowUINodes; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWUINODES_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE7990)
#define RPG_GAMECORE_SHOWUINODES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE79A0)
#define RPG_GAMECORE_SHOWUINODES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE7960)

namespace RPG::GameCore
{
	class ShowUINodes : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* Nodes; // 0x18
		::System::Boolean Open; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUINODES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowUINodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowUINodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUINODES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowUINodes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowUINodes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWUINODES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
