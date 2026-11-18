#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes { template <typename T> class LDDGenericDataSource_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSORTDAILYCARDDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F0070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSORTDAILYCARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F0130)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSortDailyCardData_TypeDefinitionIndex = 77901;

	class LDSortDailyCardData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSORTDAILYCARDDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Int32>* Invoke(::System::Collections::Generic::List_1<::System::Int32>* cardList)
		{
			return ((::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSORTDAILYCARDDATA_INVOKE_OFFSET))(this, cardList);
		}
	};
}
