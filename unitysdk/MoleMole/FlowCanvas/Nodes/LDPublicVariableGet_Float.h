#pragma once
#include "unitysdk/unitysdk.h"

class PJHKDJEGJOG;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT_DOGET_OFFSET UNITYSDK_OFFSET(0x1A8EE820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EE890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT___BASE_DOGET_OFFSET UNITYSDK_OFFSET(0x1A8EE8E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableGet_Float_TypeDefinitionIndex = 44406;

	class LDPublicVariableGet_Float
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT__CTOR_OFFSET))(this);
		}

		::System::Void DoGet(::PJHKDJEGJOG* ctx, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT_DOGET_OFFSET))(this, ctx, key);
		}

		::System::Void __base_DoGet(::PJHKDJEGJOG* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLEGET_FLOAT___BASE_DOGET_OFFSET))(this, P0, P1);
		}
	};
}
