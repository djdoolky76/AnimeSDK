#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EventTriggerListener.h"
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D9FB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x1C6D9D80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x1C6D9DA0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1C6D9E50)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x1C6D9F00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_SET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x1C6D9D90)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftChipPieceEventTriggerListener_TypeDefinitionIndex = 82644;

	class MechCraftCraftChipPieceEventTriggerListener : public ::RPG::Client::EventTriggerListener
	{
	public:
		::System::Boolean _IsDragging_k__BackingField; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_GET_ISDRAGGING_OFFSET))(this);
		}

		::System::Void set_IsDragging(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_SET_ISDRAGGING_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCHIPPIECEEVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, a1);
		}

	};
}
