#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTAREAIDSELECTIONS_INVOKE_OFFSET UNITYSDK_OFFSET(0x180E5930)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTAREAIDSELECTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x180E5A80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetNextAreaIDSelections_TypeDefinitionIndex = 85310;

	class LD_AbyssS2_GetNextAreaIDSelections
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTAREAIDSELECTIONS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETNEXTAREAIDSELECTIONS_INVOKE_OFFSET))(this);
		}
	};
}
