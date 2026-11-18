#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIQuestionsAnswerPageController.h"

class GMCPAFDJNLH;
namespace MoleMole { class UIQuestionsAnswer3D3DModelController; }
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace MoleMole { class UIQuestionsListWidgetController; }

#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168DE540)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168DE490)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168DE3E0)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168DE5D0)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168DE5E0)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168DE6B0)
#define MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x168DE6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerV2PageController_TypeDefinitionIndex = 44672;

	class UIQuestionsAnswerV2PageController : public ::MoleMole::UIQuestionsAnswerPageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsListWidgetController* CreateUIQuestionsListWidgetController(::GMCPAFDJNLH* openParams)
		{
			return ((::MoleMole::UIQuestionsListWidgetController*(*)(::PVOID, ::GMCPAFDJNLH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET))(this, openParams);
		}

		::MoleMole::UIQuestionsAnswerWidgetController* CreateUIQuestionsAnswerWidgetController(::GMCPAFDJNLH* openParams)
		{
			return ((::MoleMole::UIQuestionsAnswerWidgetController*(*)(::PVOID, ::GMCPAFDJNLH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET))(this, openParams);
		}

		::MoleMole::UIQuestionsAnswer3D3DModelController* CreateUIQuestionsAnswer3D3DModelController()
		{
			return ((::MoleMole::UIQuestionsAnswer3D3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswer3D3DModelController* __base_CreateUIQuestionsAnswer3D3DModelController()
		{
			return ((::MoleMole::UIQuestionsAnswer3D3DModelController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWER3D3DMODELCONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerWidgetController* __base_CreateUIQuestionsAnswerWidgetController(::GMCPAFDJNLH* P0)
		{
			return ((::MoleMole::UIQuestionsAnswerWidgetController*(*)(::PVOID, ::GMCPAFDJNLH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSANSWERWIDGETCONTROLLER_OFFSET))(this, P0);
		}

		::MoleMole::UIQuestionsListWidgetController* __base_CreateUIQuestionsListWidgetController(::GMCPAFDJNLH* P0)
		{
			return ((::MoleMole::UIQuestionsListWidgetController*(*)(::PVOID, ::GMCPAFDJNLH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERV2PAGECONTROLLER___BASE_CREATEUIQUESTIONSLISTWIDGETCONTROLLER_OFFSET))(this, P0);
		}
	};
}
