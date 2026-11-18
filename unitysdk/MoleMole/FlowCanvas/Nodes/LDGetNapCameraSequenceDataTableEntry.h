#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETNAPCAMERASEQUENCEDATATABLEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1465D610)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetNapCameraSequenceDataTableEntry_TypeDefinitionIndex = 90242;

	class LDGetNapCameraSequenceDataTableEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETNAPCAMERASEQUENCEDATATABLEENTRY__CTOR_OFFSET))(this);
		}
	};
}
