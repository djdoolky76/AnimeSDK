#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAIDCOJBCCB;
class HGAJKHIMKJP;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_GETITEMDATA_OFFSET UNITYSDK_OFFSET(0x16F0D830)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_INITITEM_OFFSET UNITYSDK_OFFSET(0x16F0D260)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_PLAY_OFFSET UNITYSDK_OFFSET(0x16F0DAD0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_SETARCANAITEMDATA_OFFSET UNITYSDK_OFFSET(0x16F0D870)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x16F0DC50)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F0D250)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController_UIArcanFlagItem_TypeDefinitionIndex = 84635;

	class UIHollowMainPageController_UIArcanFlagItem : public ::System::Object
	{
	public:
		::UnityEngine::UI::Button* _clickBtn; // 0x10
		::UnityEngine::Transform* _root; // 0x18
		::UnityEngine::Transform* _emptyGo; // 0x20
		::UnityEngine::UI::Image* _icon; // 0x28
		::UnityEngine::GameObject* _selectedGo; // 0x30
		::MoleMole::UIBaseController* _baseCtrl; // 0x38
		::HGAJKHIMKJP* _curItemData; // 0x40
		::UnityEngine::Animation* _anim; // 0x48

		::System::Void _ctor(::UnityEngine::Transform* root, ::MoleMole::UIBaseController* baseController)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM__CTOR_OFFSET))(this, root, baseController);
		}

		::System::Void InitItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_INITITEM_OFFSET))(this);
		}

		::HGAJKHIMKJP* GetItemData()
		{
			return ((::HGAJKHIMKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_GETITEMDATA_OFFSET))(this);
		}

		::System::Void SetArcanaItemData(::BAIDCOJBCCB* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::BAIDCOJBCCB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_SETARCANAITEMDATA_OFFSET))(this, itemData);
		}

		::System::Boolean Play()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_PLAY_OFFSET))(this);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_UIARCANFLAGITEM_SETEMPTY_OFFSET))(this);
		}
	};
}
