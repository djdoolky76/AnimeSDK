#pragma once
#include "unitysdk/unitysdk.h"

class PJHKDJEGJOG;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING_DOGET_OFFSET UNITYSDK_OFFSET(0x1B4B4BC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B4C30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING___BASE_DOGET_OFFSET UNITYSDK_OFFSET(0x1B4B4C80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableGet_String_TypeDefinitionIndex = 86036;

	class LDPublicVariableGet_String
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING__CTOR_OFFSET))(this);
		}

		::System::Void DoGet(::PJHKDJEGJOG* ctx, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING_DOGET_OFFSET))(this, ctx, key);
		}

		::System::Void __base_DoGet(::PJHKDJEGJOG* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_STRING___BASE_DOGET_OFFSET))(this, P0, P1);
		}
	};
}
