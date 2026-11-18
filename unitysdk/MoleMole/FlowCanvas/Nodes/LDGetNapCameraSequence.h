#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETNAPCAMERASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0E1A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequence_TypeDefinitionIndex = 84552;

	class LDGetNapCameraSequence
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETNAPCAMERASEQUENCE__CTOR_OFFSET))(this);
		}
	};
}
