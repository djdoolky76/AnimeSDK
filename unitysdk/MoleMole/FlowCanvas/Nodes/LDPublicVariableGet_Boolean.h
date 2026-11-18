#pragma once
#include "unitysdk/unitysdk.h"

class PJHKDJEGJOG;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_BOOLEAN_DOGET_OFFSET UNITYSDK_OFFSET(0x1A7C5D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_BOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C5DB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_BOOLEAN___BASE_DOGET_OFFSET UNITYSDK_OFFSET(0x1A7C5E00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableGet_Boolean_TypeDefinitionIndex = 57107;

	class LDPublicVariableGet_Boolean
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_BOOLEAN__CTOR_OFFSET))(this);
		}

		::System::Void DoGet(::PJHKDJEGJOG* ctx, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_BOOLEAN_DOGET_OFFSET))(this, ctx, key);
		}

		::System::Void __base_DoGet(::PJHKDJEGJOG* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_BOOLEAN___BASE_DOGET_OFFSET))(this, P0, P1);
		}
	};
}
