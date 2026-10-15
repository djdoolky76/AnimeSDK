#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournCollectionBoothUpdate; }
namespace System { class Object; }

#define PODKCCMGDLA_CTOR_OFFSET UNITYSDK_OFFSET(0xC35A060)
#define PODKCCMGDLA_LBAJLHMMEEK_OFFSET UNITYSDK_OFFSET(0xC35A310)
#define PODKCCMGDLA__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC35A1D0)
#define PODKCCMGDLA__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC35A270)

inline static constexpr unsigned int PODKCCMGDLA_TypeDefinitionIndex = 58923;

	class PODKCCMGDLA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueTournCollectionBoothUpdate*))((::PBYTE)hIl2Cpp + PODKCCMGDLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODKCCMGDLA__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODKCCMGDLA__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void LBAJLHMMEEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PODKCCMGDLA_LBAJLHMMEEK_OFFSET))(this, a1);
		}

	};
