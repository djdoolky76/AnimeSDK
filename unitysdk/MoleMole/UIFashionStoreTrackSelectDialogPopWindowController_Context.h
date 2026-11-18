#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class GPOCDKHHGFG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
template <typename T> class LGFJMNEABJP_1;

#define MOLEMOLE_UIFASHIONSTORETRACKSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_KEYBOARDDATAS_OFFSET UNITYSDK_OFFSET(0x18930610)
#define MOLEMOLE_UIFASHIONSTORETRACKSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18930620)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreTrackSelectDialogPopWindowController_Context_TypeDefinitionIndex = 49854;

	class UIFashionStoreTrackSelectDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Object*>* OnClickItemCallback; // 0x28
		::GPOCDKHHGFG* _propertyAllocateHelper; // 0x30
		::LGFJMNEABJP_1<::System::Object*>* _KeyBoardDatas_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORETRACKSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::LGFJMNEABJP_1<::System::Object*>* get_KeyBoardDatas()
		{
			return ((::LGFJMNEABJP_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORETRACKSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_KEYBOARDDATAS_OFFSET))(this);
		}
	};
}
