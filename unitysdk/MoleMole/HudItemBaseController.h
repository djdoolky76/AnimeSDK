#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class GIEJNOEAKAK;
class HJDNNLKBHBA;
class KFHNCJALFJK;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_HUDITEMBASECONTROLLER_DMKHJDAJNOB_OFFSET UNITYSDK_OFFSET(0x1A909E80)
#define MOLEMOLE_HUDITEMBASECONTROLLER_DODESTROY_OFFSET UNITYSDK_OFFSET(0x1A90A100)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1A909550)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1A909530)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_FOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0x1A909930)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1A909920)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A909540)
#define MOLEMOLE_HUDITEMBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A909520)
#define MOLEMOLE_HUDITEMBASECONTROLLER_ISINCAMERAVISIBLERANGE_OFFSET UNITYSDK_OFFSET(0x1A90A400)
#define MOLEMOLE_HUDITEMBASECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A909C70)
#define MOLEMOLE_HUDITEMBASECONTROLLER_SETDISABLE_OFFSET UNITYSDK_OFFSET(0x1A90A050)
#define MOLEMOLE_HUDITEMBASECONTROLLER_SETUNACTIVE_OFFSET UNITYSDK_OFFSET(0x1A909DD0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A909CC0)
#define MOLEMOLE_HUDITEMBASECONTROLLER_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1A909730)
#define MOLEMOLE_HUDITEMBASECONTROLLER_UPDATEHUDPOSITION_OFFSET UNITYSDK_OFFSET(0x1A90A150)
#define MOLEMOLE_HUDITEMBASECONTROLLER_UPDATEHUD_OFFSET UNITYSDK_OFFSET(0x1A90A1C0)
#define MOLEMOLE_HUDITEMBASECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A90A6F0)
#define MOLEMOLE_HUDITEMBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90A6E0)
#define MOLEMOLE_HUDITEMBASECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A90A710)

namespace MoleMole
{
	inline static constexpr unsigned int HudItemBaseController_TypeDefinitionIndex = 41975;

	class HudItemBaseController : public ::MoleMole::UIWindowController
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_InValidUIAnchoredPosition()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(HudItemBaseController_TypeDefinitionIndex)->GetStaticField(0x12960);
		}
		::UnityEngine::RectTransform* FHHJKLEDDGM; // 0x320
		::System::Single _offset; // 0x328
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* IAFAOELGMOM; // 0x330
		::System::UInt32 _entityID; // 0x338
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* IHPBAGNHMNM; // 0x340
		::GEIHCPAOKKK* modelComponent; // 0x348
		::HJDNNLKBHBA* dataComponent; // 0x350
		::GIEJNOEAKAK* hudComponent; // 0x358
		::KFHNCJALFJK* abilityComponent; // 0x360
		::System::Boolean _enable; // 0x368
		::System::Byte _padding2[0x7];
		::System::String* spineName; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_ENTITYID_OFFSET))(this);
		}

		::System::Single get_HeightOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_HEIGHTOFFSET_OFFSET))(this);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void set_FollowTarget(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_SET_FOLLOWTARGET_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_FollowTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_FollowPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_GET_FOLLOWPOSITION_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetupView(::System::UInt32 entityId, ::UnityEngine::GameObject* target, ::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_SETUPVIEW_OFFSET))(this, entityId, target, offset);
		}

		::System::Void SetUnActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_SETUNACTIVE_OFFSET))(this);
		}

		::System::Void SetDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_SETDISABLE_OFFSET))(this);
		}

		::System::Void DoDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_DODESTROY_OFFSET))(this);
		}

		::System::Void UpdateHUDPosition(::UnityEngine::Vector2 screenPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_UPDATEHUDPOSITION_OFFSET))(this, screenPos);
		}

		::System::Void UpdateHUD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_UPDATEHUD_OFFSET))(this);
		}

		::System::Boolean IsInCameraVisibleRange(::UnityEngine::Bounds bounds, ::UnityEngine::Vector3 worldPos, ::System::Single heightOffset, ::UnityEngine::Vector2& vTargetScreenPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_ISINCAMERAVISIBLERANGE_OFFSET))(this, bounds, worldPos, heightOffset, vTargetScreenPos);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* DMKHJDAJNOB()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HUDITEMBASECONTROLLER_DMKHJDAJNOB_OFFSET))(this);
		}
	};
}
