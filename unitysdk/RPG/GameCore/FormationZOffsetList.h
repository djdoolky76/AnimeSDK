#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FormationZOffsetList; }
namespace RPG::GameCore { class FormationZOffsetParams; }

#define RPG_GAMECORE_FORMATIONZOFFSETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EC020)
#define RPG_GAMECORE_FORMATIONZOFFSETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EBF30)

namespace RPG::GameCore
{
	class FormationZOffsetList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FormationZOffsetParams*>* TeamZOffset; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONZOFFSETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FormationZOffsetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FormationZOffsetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONZOFFSETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
