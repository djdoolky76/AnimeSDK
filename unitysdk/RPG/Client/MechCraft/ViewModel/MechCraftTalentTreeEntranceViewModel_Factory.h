#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLDDCOCBMMD;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentTreeEntranceViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTTREEENTRANCEVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD67F6A0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTTREEENTRANCEVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xD67F730)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTTREEENTRANCEVIEWMODEL_FACTORY_GET_REDDOT_OFFSET UNITYSDK_OFFSET(0xD67F680)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTTREEENTRANCEVIEWMODEL_FACTORY_SET_REDDOT_OFFSET UNITYSDK_OFFSET(0xD67F690)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftTalentTreeEntranceViewModel_Factory_TypeDefinitionIndex = 79673;

	class MechCraftTalentTreeEntranceViewModel_Factory : public ::System::Object
	{
	public:
		::BLDDCOCBMMD* _RedDot_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTTREEENTRANCEVIEWMODEL_FACTORY_CTOR_OFFSET))(this);
		}

		::BLDDCOCBMMD* get_RedDot()
		{
			return ((::BLDDCOCBMMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTTREEENTRANCEVIEWMODEL_FACTORY_GET_REDDOT_OFFSET))(this);
		}

		::System::Void set_RedDot(::BLDDCOCBMMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLDDCOCBMMD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTTREEENTRANCEVIEWMODEL_FACTORY_SET_REDDOT_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel* Create()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentTreeEntranceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTTREEENTRANCEVIEWMODEL_FACTORY_CREATE_OFFSET))(this);
		}

	};
}
