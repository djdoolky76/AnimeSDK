#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"
class JIAPCHALLMF;
class KIICEFFNEGG;
class LPOOJCMOLDC;
namespace RPG::Client::PixAir { class PixAirBagEquipsViewModel; }
namespace RPG::Client::PixAir { class PixAirBattleEquipsViewModel; }
namespace Sofa::Core { class SimpleCommand; }

#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDB39B00)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_GET_BTNCLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0xDB39CA0)
#define RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_SET_BTNCLOSECOMMAND_OFFSET UNITYSDK_OFFSET(0xDB39CB0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirEquipAssembleViewModel_TypeDefinitionIndex = 79253;

	class PixAirEquipAssembleViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::PixAir::PixAirBagEquipsViewModel* BagEquipsViewModel; // 0x20
		::JIAPCHALLMF* _GameFlowService; // 0x28
		::KIICEFFNEGG* _WindowService; // 0x30
		::LPOOJCMOLDC* _EquipService; // 0x38
		::RPG::Client::PixAir::PixAirBattleEquipsViewModel* BattleEquipsViewModel; // 0x40
		::Sofa::Core::SimpleCommand* _BtnCloseCommand_k__BackingField; // 0x48
		::System::Void _ctor(::KIICEFFNEGG* a1, ::JIAPCHALLMF* a2, ::LPOOJCMOLDC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KIICEFFNEGG*, ::JIAPCHALLMF*, ::LPOOJCMOLDC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::Sofa::Core::SimpleCommand* get_BtnCloseCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_GET_BTNCLOSECOMMAND_OFFSET))(this);
		}

		::System::Void set_BtnCloseCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIREQUIPASSEMBLEVIEWMODEL_SET_BTNCLOSECOMMAND_OFFSET))(this, a1);
		}

	};
}
