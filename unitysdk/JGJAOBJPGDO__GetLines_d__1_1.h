#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }

	template <typename T>
	class JGJAOBJPGDO__GetLines_d__1_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::String* __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::Il2CppArray<::System::String*>* header; // 0x0
		::Il2CppArray<::System::String*>* __3__header; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* table; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* __3__table; // 0x0
		::Il2CppArray<::System::Reflection::FieldInfo*>* fields; // 0x0
		::Il2CppArray<::System::Reflection::FieldInfo*>* __3__fields; // 0x0
		::System::Object* __7__wrap1; // 0x0
	};
