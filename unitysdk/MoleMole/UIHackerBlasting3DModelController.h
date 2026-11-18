#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class DJOKEPOFNGL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_BDDMMGDMJLJ_OFFSET UNITYSDK_OFFSET(0x1A27A7A0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x1A27A4A0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x1A27A4B0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A27A490)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1A27A730)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A27A4C0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A27A560)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A27B3E0)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A27B450)
#define MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A27B4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerBlasting3DModelController_TypeDefinitionIndex = 69024;

	class UIHackerBlasting3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_AutoProcessCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET))(this);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void BDDMMGDMJLJ(::System::UInt32 NJNCGJLHLKC, ::System::String* JMBNHKNMAND)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_BDDMMGDMJLJ_OFFSET))(this, NJNCGJLHLKC, JMBNHKNMAND);
		}

		::DJOKEPOFNGL* OGMPOGIHBIK()
		{
			return ((::DJOKEPOFNGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERBLASTING3DMODELCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
