#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTSELECTIONS_INVOKE_OFFSET UNITYSDK_OFFSET(0x13EDB8A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTSELECTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x13EDBA00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetNextSelections_TypeDefinitionIndex = 69280;

	class LD_AbyssS2_GetNextSelections
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTSELECTIONS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTSELECTIONS_INVOKE_OFFSET))(this);
		}
	};
}
