#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEEJHBCIGGI;
class FOACJPEHDKO;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }

#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTACTORVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xD685E50)
#define RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTACTORVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xD685E40)

namespace RPG::Client::MechCraft::ViewModel
{
	inline static constexpr unsigned int MechCraftTalentActorViewModel_Factory_TypeDefinitionIndex = 79758;

	class MechCraftTalentActorViewModel_Factory : public ::System::Object
	{
	public:
		::BEEJHBCIGGI* _ActorConfigRepository; // 0x10
		::System::Void _ctor(::BEEJHBCIGGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEJHBCIGGI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTACTORVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* Create(::FOACJPEHDKO* a1)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*(*)(::PVOID, ::FOACJPEHDKO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEWMODEL_MECHCRAFTTALENTACTORVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
