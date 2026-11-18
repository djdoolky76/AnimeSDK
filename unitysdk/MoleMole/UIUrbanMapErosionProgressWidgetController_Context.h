#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B23000)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapErosionProgressWidgetController_Context_TypeDefinitionIndex = 71384;

	class UIUrbanMapErosionProgressWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* ErosionBasicData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEROSIONPROGRESSWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
