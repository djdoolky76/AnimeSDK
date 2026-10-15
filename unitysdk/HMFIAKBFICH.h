#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class OOCCBMLAELL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMFIAKBFICH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D7C5C0)

	class HMFIAKBFICH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* HKMIJJBMKDJ; // 0x10
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x18
		::System::Void _ctor(::OOCCBMLAELL* a1, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*, ::System::Collections::Generic::List_1<::BJHMBGLPOLB*>*))((::PBYTE)hIl2Cpp + HMFIAKBFICH_CTOR_OFFSET))(this, a1, a2);
		}

	};
