#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMESSAGEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147D39A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMessageWidgetContext_TypeDefinitionIndex = 76312;

	class UIMessageWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* MessageUsers; // 0x28
		::System::Boolean newBie; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMESSAGEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
