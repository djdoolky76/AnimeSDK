#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_FC_GETLASTITEM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1622A820)
#define MOLEMOLE_FLOWCANVAS_FC_GETLASTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1622A8B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int FC_GetLastItem_TypeDefinitionIndex = 68464;

	class FC_GetLastItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FC_GETLASTITEM__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::Il2CppArray<::System::String*>* a)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_FC_GETLASTITEM_INVOKE_OFFSET))(this, a);
		}
	};
}
