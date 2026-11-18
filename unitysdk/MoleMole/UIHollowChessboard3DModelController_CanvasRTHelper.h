#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GMCPAFDJNLH;
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHELPER_POSTCREATEASSET_OFFSET UNITYSDK_OFFSET(0x18C79140)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboard3DModelController_CanvasRTHelper_TypeDefinitionIndex = 43492;

	class UIHollowChessboard3DModelController_CanvasRTHelper : public ::System::Object
	{
	public:
		static ::System::Void PostCreateAsset(::MoleMole::UIWindowController* uiCtrl, ::GMCPAFDJNLH* openParams, ::MoleMole::UIWindowController* parentCtrl, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::MoleMole::UIWindowController*, ::GMCPAFDJNLH*, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARD3DMODELCONTROLLER_CANVASRTHELPER_POSTCREATEASSET_OFFSET))(uiCtrl, openParams, parentCtrl, parent);
		}
	};
}
