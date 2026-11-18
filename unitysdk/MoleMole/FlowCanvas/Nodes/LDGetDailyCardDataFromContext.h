#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes { template <typename T> class LDDGenericDataSource_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDAILYCARDDATAFROMCONTEXT_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B35080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDAILYCARDDATAFROMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B35390)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetDailyCardDataFromContext_TypeDefinitionIndex = 82053;

	class LDGetDailyCardDataFromContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDAILYCARDDATAFROMCONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Int32>* Invoke()
		{
			return ((::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDAILYCARDDATAFROMCONTEXT_INVOKE_OFFSET))(this);
		}
	};
}
