#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class LGINJIKKBJA;
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_VIEWCONTENT_VIEWDETAILS__CTOR_OFFSET UNITYSDK_OFFSET(0x168C40A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRoleItemWidgetController_ViewContent_ViewDetails_TypeDefinitionIndex = 92628;

	class UIMonsterFantasyRoleItemWidgetController_ViewContent_ViewDetails : public ::System::Object
	{
	public:
		::FGCOIBFFCHB* LongPressFillImg; // 0x10
		::UnityEngine::GameObject* PlayerTagGo; // 0x18
		::FGCOIBFFCHB* HpImg; // 0x20
		::UnityEngine::GameObject* TagGo; // 0x28
		::FGCOIBFFCHB* TagRightImg; // 0x30
		::FGCOIBFFCHB* TagLeftImg; // 0x38
		::UnityEngine::GameObject* ExtraGo; // 0x40
		::GCIMMDDIFBJ* HpAddLight; // 0x48
		::FGCOIBFFCHB* Img; // 0x50
		::UnityEngine::GameObject* DisableGo; // 0x58
		::UnityEngine::GameObject* EnemyTagGo; // 0x60
		::FGCOIBFFCHB* TagImg; // 0x68
		::UnityEngine::GameObject* LongPressGo; // 0x70
		::UnityEngine::GameObject* Go; // 0x78
		::LGINJIKKBJA* Btn; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_VIEWCONTENT_VIEWDETAILS__CTOR_OFFSET))(this);
		}
	};
}
