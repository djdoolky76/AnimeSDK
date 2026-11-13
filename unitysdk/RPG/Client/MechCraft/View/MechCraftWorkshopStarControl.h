#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class OCBJLBIEFJN;
namespace RPG::Client::MechCraft::View { class MechCraftWorkshopStarControlBinder; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90BC40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1E90B9B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1E90B9F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPSTARCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1E90ACE0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftWorkshopStarControl_TypeDefinitionIndex = 82856;

	class MechCraftWorkshopStarControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::OCBJLBIEFJN* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftWorkshopStarControlBinder* _Binder; // 0x20
		::System::String* _StateActive; // 0x28
		::System::String* _StateUnactive; // 0x30
		::System::String* _StateSwitchActive; // 0x38
		::System::Nullable_1<::System::Boolean> FMNEEONAMNO; // 0x40
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
