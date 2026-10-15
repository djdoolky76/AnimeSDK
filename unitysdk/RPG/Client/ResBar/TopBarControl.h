#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class OBOLGLHJLBP;
namespace RPG::Client { class ListView; }
namespace RPG::Client { class NavigationEntryShortcut; }
namespace RPG::UINavigation { class UINavigationChildActiveSwitch; }
namespace RPG::UINavigation { class UINavigationZone; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_RESBAR_TOPBARCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xDEBBAF0)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xDEBAE90)

namespace RPG::Client::ResBar
{
	inline static constexpr unsigned int TopBarControl_TypeDefinitionIndex = 79144;

	class TopBarControl
	{
	public:
		::RPG::Client::ListView* _ResourcesListView; // 0x70
		::RPG::Client::ListView* _FunctionButtonsListView; // 0x78
		::RPG::Client::NavigationEntryShortcut* _NavigationEntryShortcut; // 0x80
		::UnityEngine::Transform* _ShortcutNode; // 0x88
		::RPG::UINavigation::UINavigationChildActiveSwitch* _NavigationActiveSwitch; // 0x90
		::RPG::UINavigation::UINavigationZone* _NavigationZone; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL__BINDING_OFFSET))(this, a1);
		}

	};
}
