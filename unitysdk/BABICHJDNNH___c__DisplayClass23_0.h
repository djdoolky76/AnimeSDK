#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABICHJDNNH;
class EDGNLGIJLOJ;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BABICHJDNNH___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15BCE300)
#define BABICHJDNNH___C__DISPLAYCLASS23_0___REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x15BCE3E0)

	class BABICHJDNNH___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* displayDataList; // 0x10
		::BABICHJDNNH* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABICHJDNNH___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void __RefreshView_b__0(::EDGNLGIJLOJ* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EDGNLGIJLOJ*, ::System::Int32))((::PBYTE)hIl2Cpp + BABICHJDNNH___C__DISPLAYCLASS23_0___REFRESHVIEW_B__0_OFFSET))(this, a1, a2);
		}

	};
