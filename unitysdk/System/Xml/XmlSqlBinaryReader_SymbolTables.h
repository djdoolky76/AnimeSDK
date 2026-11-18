#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_XML_XMLSQLBINARYREADER_SYMBOLTABLES_INIT_OFFSET UNITYSDK_OFFSET(0x97E290)

namespace System::Xml
{
	inline static constexpr unsigned int XmlSqlBinaryReader_SymbolTables_TypeDefinitionIndex = 1675;

	struct alignas(8) XmlSqlBinaryReader_SymbolTables
	{
		::Il2CppArray<::System::String*>* symtable; // 0x10
		::System::Int32 symCount; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* qnametable; // 0x20
		::System::Int32 qnameCount; // 0x28

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLSQLBINARYREADER_SYMBOLTABLES_INIT_OFFSET))(this);
		}
	};
}
