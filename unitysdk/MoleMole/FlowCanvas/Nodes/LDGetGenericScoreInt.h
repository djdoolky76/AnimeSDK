#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCOREINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D0DEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCOREINT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0E180)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetGenericScoreInt_TypeDefinitionIndex = 65331;

	class LDGetGenericScoreInt
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCOREINT__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::String* scoreName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCOREINT_INVOKE_OFFSET))(this, scoreName);
		}
	};
}
