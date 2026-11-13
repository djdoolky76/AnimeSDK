#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchHandShowPuzzleFinishToast; }

#define RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_CTOR_OFFSET UNITYSDK_OFFSET(0x1E684E50)
#define RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E684E60)
#define RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E684E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandShowPuzzleFinishToast_TypeDefinitionIndex = 21307;

	class SwitchHandShowPuzzleFinishToast : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRaid; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandShowPuzzleFinishToast*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDSHOWPUZZLEFINISHTOAST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
