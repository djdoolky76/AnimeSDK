#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class Obsolete; }
namespace System { class String; }

#define RPG_GAMECORE_OBSOLETE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DE8F0)
#define RPG_GAMECORE_OBSOLETE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8DE900)
#define RPG_GAMECORE_OBSOLETE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DE8C0)

namespace RPG::GameCore
{
	class Obsolete : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Message; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSOLETE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Obsolete* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Obsolete*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSOLETE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Obsolete* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Obsolete*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OBSOLETE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
