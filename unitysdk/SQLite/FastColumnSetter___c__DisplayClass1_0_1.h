#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnection; }
namespace System { class Type; }

namespace SQLite
{
	inline static constexpr unsigned int FastColumnSetter___c__DisplayClass1_0_1_TypeDefinitionIndex = 37071;

	template <typename T>
	class FastColumnSetter___c__DisplayClass1_0_1 : public ::System::Object
	{
	public:
		::System::Type* clrType; // 0x0
		::SQLite::SQLiteConnection* conn; // 0x0
	};
}
