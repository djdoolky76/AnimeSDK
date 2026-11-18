#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKJJMCPGLMO.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::MiniUIGame::BezierCurve { class UIInLevelBezierCurveGameWidgetController; }
namespace MoleMole::Project::Config { class CollisionShapeData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_ADDCOLLIDER_OFFSET UNITYSDK_OFFSET(0x15AB62E0)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_GETANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x15AB6200)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_GET_POINTTYPE_OFFSET UNITYSDK_OFFSET(0x15AB6440)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x15AB6030)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_RESET_OFFSET UNITYSDK_OFFSET(0x15AB61C0)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_SETANCHOREDPOSITION_OFFSET UNITYSDK_OFFSET(0x15AB6270)
#define MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AB6450)

namespace MoleMole::MiniUIGame::BezierCurve
{
	inline static constexpr unsigned int UIBezierCurveGamePointWidgetController_TypeDefinitionIndex = 54368;

	class UIBezierCurveGamePointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::UnityEngine::RectTransform* _rect; // 0x2C8
		::MoleMole::MiniUIGame::BezierCurve::UIInLevelBezierCurveGameWidgetController* _inLevelWidget; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::MiniUIGame::BezierCurve::UIInLevelBezierCurveGameWidgetController* inLevelWidget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniUIGame::BezierCurve::UIInLevelBezierCurveGameWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_INIT_OFFSET))(this, inLevelWidget);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_RESET_OFFSET))(this);
		}

		::UnityEngine::Vector2 GetAnchoredPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_GETANCHOREDPOSITION_OFFSET))(this);
		}

		::System::Void SetAnchoredPosition(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_SETANCHOREDPOSITION_OFFSET))(this, position);
		}

		::System::Void AddCollider(::MoleMole::Project::Config::CollisionShapeData* data, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Project::Config::CollisionShapeData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_ADDCOLLIDER_OFFSET))(this, data, go);
		}

		::DKJJMCPGLMO get_PointType()
		{
			return ((::DKJJMCPGLMO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIUIGAME_BEZIERCURVE_UIBEZIERCURVEGAMEPOINTWIDGETCONTROLLER_GET_POINTTYPE_OFFSET))(this);
		}
	};
}
