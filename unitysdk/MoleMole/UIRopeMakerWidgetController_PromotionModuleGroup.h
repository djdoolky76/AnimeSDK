#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIHDFJCGKEM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_PROMOTIONMODULEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x15D50920)

namespace MoleMole
{
	inline static constexpr unsigned int UIRopeMakerWidgetController_PromotionModuleGroup_TypeDefinitionIndex = 90212;

	class UIRopeMakerWidgetController_PromotionModuleGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* LevelDes; // 0x10
		::System::String* TitleKey; // 0x18
		::DIHDFJCGKEM Module; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROPEMAKERWIDGETCONTROLLER_PROMOTIONMODULEGROUP__CTOR_OFFSET))(this);
		}
	};
}
