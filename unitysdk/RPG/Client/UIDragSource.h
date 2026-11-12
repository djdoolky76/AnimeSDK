#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIDRAGSOURCE_ADD_DRAGBEGAN_OFFSET UNITYSDK_OFFSET(0xEE52940)
#define RPG_CLIENT_UIDRAGSOURCE_ADD_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xEE52A00)
#define RPG_CLIENT_UIDRAGSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0xEE52C10)
#define RPG_CLIENT_UIDRAGSOURCE_GET_CANDRAG_OFFSET UNITYSDK_OFFSET(0xEE52920)
#define RPG_CLIENT_UIDRAGSOURCE_KELIJEIBAFB_OFFSET UNITYSDK_OFFSET(0xEE52830)
#define RPG_CLIENT_UIDRAGSOURCE_NFLFOFGLIIF_OFFSET UNITYSDK_OFFSET(0xEE52710)
#define RPG_CLIENT_UIDRAGSOURCE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xEE52AC0)
#define RPG_CLIENT_UIDRAGSOURCE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xEE52BC0)
#define RPG_CLIENT_UIDRAGSOURCE_REMOVE_DRAGBEGAN_OFFSET UNITYSDK_OFFSET(0xEE529A0)
#define RPG_CLIENT_UIDRAGSOURCE_REMOVE_DRAGENDED_OFFSET UNITYSDK_OFFSET(0xEE52A60)
#define RPG_CLIENT_UIDRAGSOURCE_SET_CANDRAG_OFFSET UNITYSDK_OFFSET(0xEE52930)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragSource_TypeDefinitionIndex = 75179;

	class UIDragSource : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _CanDrag_k__BackingField; // 0x18
		::System::Byte _padding0[0x7];
		::System::Action* DragBegan; // 0x20
		::System::Action* DragEnded; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_GET_CANDRAG_OFFSET))(this);
		}

		::System::Void set_CanDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_SET_CANDRAG_OFFSET))(this, a1);
		}

		::System::Void add_DragBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_ADD_DRAGBEGAN_OFFSET))(this, a1);
		}

		::System::Void remove_DragBegan(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_REMOVE_DRAGBEGAN_OFFSET))(this, a1);
		}

		::System::Void add_DragEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_ADD_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Void remove_DragEnded(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_REMOVE_DRAGENDED_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void NFLFOFGLIIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_NFLFOFGLIIF_OFFSET))(this);
		}

		::System::Void KELIJEIBAFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGSOURCE_KELIJEIBAFB_OFFSET))(this);
		}

	};
}
