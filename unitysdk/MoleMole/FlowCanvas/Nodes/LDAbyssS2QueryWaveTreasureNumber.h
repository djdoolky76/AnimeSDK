#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYWAVETREASURENUMBER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1244A730)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYWAVETREASURENUMBER__CTOR_OFFSET UNITYSDK_OFFSET(0x1244A7E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2QueryWaveTreasureNumber_TypeDefinitionIndex = 49909;

	class LDAbyssS2QueryWaveTreasureNumber
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYWAVETREASURENUMBER__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 areaNo)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2QUERYWAVETREASURENUMBER_INVOKE_OFFSET))(this, areaNo);
		}
	};
}
