#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }
namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfigList; }

#define RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B3170)
#define RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B30B0)

namespace RPG::GameCore
{
	class CinemachineVirtualCameraTemplateConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>* TemplateList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CINEMACHINEVIRTUALCAMERATEMPLATECONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
