#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSHEATACTIVELIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE2D40)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSHEATACTIVELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE2FC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssHeatActiveList_TypeDefinitionIndex = 45034;

	class LD_AbyssHeatActiveList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSHEATACTIVELIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSHEATACTIVELIST_INVOKE_OFFSET))(this);
		}
	};
}
