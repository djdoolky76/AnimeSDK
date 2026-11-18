#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UIWIDGETGROUP_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C2CBB10)
#define UIWIDGETGROUP_GETALLCHILDLIST_OFFSET UNITYSDK_OFFSET(0x1C2CBAD0)
#define UIWIDGETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2CBB80)

inline static constexpr unsigned int UIWidgetGroup_TypeDefinitionIndex = 60420;

class UIWidgetGroup : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _childList; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETGROUP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* GetAllChildList()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETGROUP_GETALLCHILDLIST_OFFSET))(this);
	}

	::System::Void Destroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWIDGETGROUP_DESTROY_OFFSET))(this);
	}
};
