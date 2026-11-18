#pragma once
#include "unitysdk/unitysdk.h"

class PJHKDJEGJOG;

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT_DOSET_OFFSET UNITYSDK_OFFSET(0x10D13F20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D14100)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT___BASE_DOSET_OFFSET UNITYSDK_OFFSET(0x10D14150)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSetFloat_TypeDefinitionIndex = 82251;

	class LDPublicVariableSetFloat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT__CTOR_OFFSET))(this);
		}

		::System::Void DoSet(::PJHKDJEGJOG* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT_DOSET_OFFSET))(this, ctx);
		}

		::System::Void __base_DoSet(::PJHKDJEGJOG* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETFLOAT___BASE_DOSET_OFFSET))(this, P0);
		}
	};
}
