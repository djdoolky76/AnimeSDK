#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class OCBJLBIEFJN;
namespace RPG::Client::MechCraft::View { class MechCraftWorkshopStarControlBinder; }
namespace System { class Nullable; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD676C10)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD676980)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD6769C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD675CA0)

namespace RPG::Client::MechCraft::View
{
	class MechCraftWorkshopStarControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::OCBJLBIEFJN* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftWorkshopStarControlBinder* _Binder; // 0x20
		::System::String* _StateActive; // 0x28
		::System::String* _StateUnactive; // 0x30
		::System::String* _StateSwitchActive; // 0x38
		::System::Nullable* FMNEEONAMNO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_CTOR_OFFSET))(this);
		}

		::OCBJLBIEFJN* get_Content()
		{
			return ((::OCBJLBIEFJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::OCBJLBIEFJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBJLBIEFJN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::OCBJLBIEFJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCBJLBIEFJN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
