#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMDIBFIGIEG;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD67EFA0)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xD67F040)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftTalentPointViewModel_Factory_TypeDefinitionIndex = 79778;

	class MechCraftTalentPointViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTVIEWMODEL_FACTORY_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* Create(::GMDIBFIGIEG* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID, ::GMDIBFIGIEG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTPOINTVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
