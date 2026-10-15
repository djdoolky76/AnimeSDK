#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class IFJAGMJNJIL;
namespace RPG::Client::MechCraft::View { class MechCraftWorkshopLevelUpControlBinder; }
namespace RPG::Client::MechCraft::View { class MechCraftWorkshopStarControl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD675D00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD674E30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD674ED0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD674E70)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftWorkshopLevelUpControl_TypeDefinitionIndex = 80076;

	class MechCraftWorkshopLevelUpControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::IFJAGMJNJIL* LFGMLJCCPCH; // 0x18
		::RPG::Client::MechCraft::View::MechCraftWorkshopLevelUpControlBinder* _Binder; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MechCraft::View::MechCraftWorkshopStarControl*>* _StarControls; // 0x28
		::System::String* _AnimEventSwitch; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_CTOR_OFFSET))(this);
		}

		::IFJAGMJNJIL* get_Content()
		{
			return ((::IFJAGMJNJIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::IFJAGMJNJIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFJAGMJNJIL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::IFJAGMJNJIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFJAGMJNJIL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTWORKSHOPLEVELUPCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
