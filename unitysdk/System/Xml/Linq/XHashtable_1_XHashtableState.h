#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Xml::Linq
{
	template <typename T>
	class XHashtable_1_XHashtableState : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* buckets; // 0x0
		::Il2CppArray<::System::Object*>* entries; // 0x0
		::System::Int32 numEntries; // 0x0
		::System::Object* extractKey; // 0x0
	};
}
