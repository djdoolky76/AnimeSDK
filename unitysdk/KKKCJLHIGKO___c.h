#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKKCJLHIGKO;
namespace System { class Object; }

#define KKKCJLHIGKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87A220)
#define KKKCJLHIGKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87A260)
#define KKKCJLHIGKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E87A270)

	class KKKCJLHIGKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKKCJLHIGKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO___C_CTOR_OFFSET))(this);
		}

		::KKKCJLHIGKO* __cctor_b__28_0()
		{
			return ((::KKKCJLHIGKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKCJLHIGKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
