#pragma once
#include "unitysdk/unitysdk.h"

class PJHKDJEGJOG;

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN_DOSET_OFFSET UNITYSDK_OFFSET(0x1356D0B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1356D280)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN___BASE_DOSET_OFFSET UNITYSDK_OFFSET(0x1356D2D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSetBoolean_TypeDefinitionIndex = 47072;

	class LDPublicVariableSetBoolean
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::Void DoSet(::PJHKDJEGJOG* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN_DOSET_OFFSET))(this, ctx);
		}

		::System::Void __base_DoSet(::PJHKDJEGJOG* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETBOOLEAN___BASE_DOSET_OFFSET))(this, P0);
		}
	};
}
