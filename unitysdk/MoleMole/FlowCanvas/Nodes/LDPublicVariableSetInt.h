#pragma once
#include "unitysdk/unitysdk.h"

class PJHKDJEGJOG;

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT_DOSET_OFFSET UNITYSDK_OFFSET(0x16238170)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16238340)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT___BASE_DOSET_OFFSET UNITYSDK_OFFSET(0x16238390)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPublicVariableSetInt_TypeDefinitionIndex = 45694;

	class LDPublicVariableSetInt
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT__CTOR_OFFSET))(this);
		}

		::System::Void DoSet(::PJHKDJEGJOG* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT_DOSET_OFFSET))(this, ctx);
		}

		::System::Void __base_DoSet(::PJHKDJEGJOG* P0)
		{
			return ((::System::Void(*)(::PVOID, ::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUBLICVARIABLESETINT___BASE_DOSET_OFFSET))(this, P0);
		}
	};
}
