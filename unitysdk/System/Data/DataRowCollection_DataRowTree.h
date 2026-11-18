#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Data { class DataRow; }

#define SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE_COMPARENODE_OFFSET UNITYSDK_OFFSET(0x1EFDF260)
#define SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE_COMPARESATELITETREENODE_OFFSET UNITYSDK_OFFSET(0x1EFDF2A0)
#define SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFDF1F0)

namespace System::Data
{
	inline static constexpr unsigned int DataRowCollection_DataRowTree_TypeDefinitionIndex = 37258;

	class DataRowCollection_DataRowTree
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE__CTOR_OFFSET))(this);
		}

		::System::Int32 CompareNode(::System::Data::DataRow* record1, ::System::Data::DataRow* record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE_COMPARENODE_OFFSET))(this, record1, record2);
		}

		::System::Int32 CompareSateliteTreeNode(::System::Data::DataRow* record1, ::System::Data::DataRow* record2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataRow*, ::System::Data::DataRow*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATAROWCOLLECTION_DATAROWTREE_COMPARESATELITETREENODE_OFFSET))(this, record1, record2);
		}
	};
}
