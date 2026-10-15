#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropFastDeliverInitEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CABMJIHCEFC_CTOR_OFFSET UNITYSDK_OFFSET(0xC1BBCC0)
#define CABMJIHCEFC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1BC550)
#define CABMJIHCEFC_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0xC1BC070)
#define CABMJIHCEFC_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0xC1BC670)
#define CABMJIHCEFC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1BBCE0)
#define CABMJIHCEFC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC1BC4B0)
#define CABMJIHCEFC_TICK_OFFSET UNITYSDK_OFFSET(0xC1BC610)

	class CABMJIHCEFC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropFastDeliverInitEntity* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::UnityEngine::Quaternion IKCHDCCFADG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverInitEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverInitEntity*))((::PBYTE)hIl2Cpp + CABMJIHCEFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABMJIHCEFC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABMJIHCEFC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABMJIHCEFC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CABMJIHCEFC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CABMJIHCEFC_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CABMJIHCEFC_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

	};
