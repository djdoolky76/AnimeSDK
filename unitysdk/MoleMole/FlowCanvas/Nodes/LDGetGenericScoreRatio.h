#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERATIO_INVOKE_OFFSET UNITYSDK_OFFSET(0x142FC4D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x142FC590)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetGenericScoreRatio_TypeDefinitionIndex = 54110;

	class LDGetGenericScoreRatio
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERATIO__CTOR_OFFSET))(this);
		}

		::System::Single Invoke(::System::String* scoreName, ::System::Boolean plusOne)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETGENERICSCORERATIO_INVOKE_OFFSET))(this, scoreName, plusOne);
		}
	};
}
