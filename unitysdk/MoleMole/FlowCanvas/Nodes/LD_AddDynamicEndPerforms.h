#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDDYNAMICENDPERFORMS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1245D2C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDDYNAMICENDPERFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1245D3F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AddDynamicEndPerforms_TypeDefinitionIndex = 73345;

	class LD_AddDynamicEndPerforms
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDDYNAMICENDPERFORMS__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* performIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDDYNAMICENDPERFORMS_INVOKE_OFFSET))(this, performIdList);
		}
	};
}
