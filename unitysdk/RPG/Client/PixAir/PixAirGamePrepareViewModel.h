#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class JIAPCHALLMF;
class KIICEFFNEGG;
class LPOOJCMOLDC;
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirGameProgressViewModel; }
namespace RPG::Client::PixAir { class PixAirPrepareContentViewModel; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDB43970)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_GET_BTNSHOWEQUIPASSEMBLE_OFFSET UNITYSDK_OFFSET(0xDB43C40)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_SET_BTNSHOWEQUIPASSEMBLE_OFFSET UNITYSDK_OFFSET(0xDB43C50)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xDB43C60)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGamePrepareViewModel_TypeDefinitionIndex = 79255;

	class PixAirGamePrepareViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::PixAir::PixAirBattleEquipsViewModel* BattleEquipsViewModel; // 0x20
		::Sofa::Core::SimpleCommand* _BtnShowEquipAssemble_k__BackingField; // 0x28
		::KIICEFFNEGG* _WindowService; // 0x30
		::RPG::Client::PixAir::PixAirPrepareContentViewModel* ContentViewModel; // 0x38
		::RPG::Client::PixAir::PixAirGameProgressViewModel* ProgressViewModel; // 0x40
		::JIAPCHALLMF* _GameFlowService; // 0x48
		::LPOOJCMOLDC* _EquipService; // 0x50
		::System::Void _ctor(::KIICEFFNEGG* a1, ::JIAPCHALLMF* a2, ::LPOOJCMOLDC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KIICEFFNEGG*, ::JIAPCHALLMF*, ::LPOOJCMOLDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Sofa::Core::SimpleCommand* get_BtnShowEquipAssemble()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_GET_BTNSHOWEQUIPASSEMBLE_OFFSET))(this);
		}

		::System::Void set_BtnShowEquipAssemble(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL_SET_BTNSHOWEQUIPASSEMBLE_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPREPAREVIEWMODEL___CTOR_B__0_0_OFFSET))(this);
		}

	};
}
