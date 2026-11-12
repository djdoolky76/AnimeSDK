#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }

#define RPG_CLIENT_UIDROPTARGET_ADD_DRAGENTERED_OFFSET UNITYSDK_OFFSET(0xEE56BA0)
#define RPG_CLIENT_UIDROPTARGET_ADD_DRAGEXITED_OFFSET UNITYSDK_OFFSET(0xEE56C60)
#define RPG_CLIENT_UIDROPTARGET_ADD_DROPPED_OFFSET UNITYSDK_OFFSET(0xEE56D20)
#define RPG_CLIENT_UIDROPTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0xEE56DE0)
#define RPG_CLIENT_UIDROPTARGET_GET_CANACCEPT_OFFSET UNITYSDK_OFFSET(0xEE56B80)
#define RPG_CLIENT_UIDROPTARGET_IINHPOJPFFM_OFFSET UNITYSDK_OFFSET(0xEE527D0)
#define RPG_CLIENT_UIDROPTARGET_JNEJBJKAJFH_OFFSET UNITYSDK_OFFSET(0xEE52770)
#define RPG_CLIENT_UIDROPTARGET_KOBDIECHFEO_OFFSET UNITYSDK_OFFSET(0xEE52430)
#define RPG_CLIENT_UIDROPTARGET_REMOVE_DRAGENTERED_OFFSET UNITYSDK_OFFSET(0xEE56C00)
#define RPG_CLIENT_UIDROPTARGET_REMOVE_DRAGEXITED_OFFSET UNITYSDK_OFFSET(0xEE56CC0)
#define RPG_CLIENT_UIDROPTARGET_REMOVE_DROPPED_OFFSET UNITYSDK_OFFSET(0xEE56D80)
#define RPG_CLIENT_UIDROPTARGET_SET_CANACCEPT_OFFSET UNITYSDK_OFFSET(0xEE56B90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDropTarget_TypeDefinitionIndex = 75180;

	class UIDropTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _CanAccept_k__BackingField; // 0x18
		::System::Byte _padding0[0x7];
		::System::Action* DragEntered; // 0x20
		::System::Action* DragExited; // 0x28
		::System::Action* Dropped; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_CTOR_OFFSET))(this);
		}

		::System::Boolean get_CanAccept()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_GET_CANACCEPT_OFFSET))(this);
		}

		::System::Void set_CanAccept(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_SET_CANACCEPT_OFFSET))(this, a1);
		}

		::System::Void add_DragEntered(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_ADD_DRAGENTERED_OFFSET))(this, a1);
		}

		::System::Void remove_DragEntered(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_REMOVE_DRAGENTERED_OFFSET))(this, a1);
		}

		::System::Void add_DragExited(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_ADD_DRAGEXITED_OFFSET))(this, a1);
		}

		::System::Void remove_DragExited(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_REMOVE_DRAGEXITED_OFFSET))(this, a1);
		}

		::System::Void add_Dropped(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_ADD_DROPPED_OFFSET))(this, a1);
		}

		::System::Void remove_Dropped(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_REMOVE_DROPPED_OFFSET))(this, a1);
		}

		::System::Void IINHPOJPFFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_IINHPOJPFFM_OFFSET))(this);
		}

		::System::Void JNEJBJKAJFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_JNEJBJKAJFH_OFFSET))(this);
		}

		::System::Void KOBDIECHFEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDROPTARGET_KOBDIECHFEO_OFFSET))(this);
		}

	};
}
