#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { template <typename T> class TableQuery_1; }

namespace SQLite
{
	inline static constexpr unsigned int AsyncTableQuery_1_TypeDefinitionIndex = 37141;

	template <typename T>
	class AsyncTableQuery_1 : public ::System::Object
	{
	public:
		::SQLite::TableQuery_1<T>* _innerQuery; // 0x0
	};
}
