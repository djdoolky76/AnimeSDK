#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIGBFGJMAPA;
namespace System { class Object; }

#define MIGBFGJMAPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3B6F0)
#define MIGBFGJMAPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA3B730)
#define MIGBFGJMAPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA3B740)

	class MIGBFGJMAPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52B20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIGBFGJMAPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA___C_CTOR_OFFSET))(this);
		}

		::MIGBFGJMAPA* __cctor_b__28_0()
		{
			return ((::MIGBFGJMAPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
