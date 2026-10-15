#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveBpFeature; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEBPFEATURE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9842E0)
#define RPG_GAMECORE_REMOVEBPFEATURE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9842F0)
#define RPG_GAMECORE_REMOVEBPFEATURE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9842B0)

namespace RPG::GameCore
{
	class RemoveBpFeature : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ModifierNameOfSpeicalBp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBPFEATURE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveBpFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveBpFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBPFEATURE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveBpFeature* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveBpFeature*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBPFEATURE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
