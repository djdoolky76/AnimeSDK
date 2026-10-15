#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEKIPIJNJBJ;
class LDJIOJPKFAJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCD79D30)
#define RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS11_0__SETUPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xCD7A620)

namespace RPG::Client
{
	class ElationBuffPresenter___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DEKIPIJNJBJ*>* mergedList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetupView_b__0(::LDJIOJPKFAJ* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDJIOJPKFAJ*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELATIONBUFFPRESENTER___C__DISPLAYCLASS11_0__SETUPVIEW_B__0_OFFSET))(this, a1, a2);
		}

	};
}
