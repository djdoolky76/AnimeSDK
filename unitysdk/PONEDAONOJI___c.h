#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PONEDAONOJI;
namespace System { class Object; }

#define PONEDAONOJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCE8C0)
#define PONEDAONOJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCE900)
#define PONEDAONOJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFCE910)

	class PONEDAONOJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PONEDAONOJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI___C_CTOR_OFFSET))(this);
		}

		::PONEDAONOJI* __cctor_b__28_0()
		{
			return ((::PONEDAONOJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
