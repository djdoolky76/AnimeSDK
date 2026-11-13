#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftActorViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTACTORVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1E90C110)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTACTORVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90C1B0)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftActorViewModel_Factory_TypeDefinitionIndex = 82433;

	class MechCraftActorViewModel_Factory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTACTORVIEWMODEL_FACTORY_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel* Create(::BCFAKEGJPKN* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftActorViewModel*(*)(::PVOID, ::BCFAKEGJPKN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTACTORVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
