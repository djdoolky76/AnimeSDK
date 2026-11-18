#pragma once
#include "unitysdk/unitysdk.h"

class PJHKDJEGJOG;

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING_DOSET_OFFSET UNITYSDK_OFFSET(0x14304710)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x143048F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING___BASE_DOSET_OFFSET UNITYSDK_OFFSET(0x14304940)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSetString_TypeDefinitionIndex = 63733;

	class LDPublicVariableSetString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING__CTOR_OFFSET))(this);
		}

		::System::Void DoSet(::PJHKDJEGJOG* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING_DOSET_OFFSET))(this, ctx);
		}

		::System::Void __base_DoSet(::PJHKDJEGJOG* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETSTRING___BASE_DOSET_OFFSET))(this, P0);
		}
	};
}
