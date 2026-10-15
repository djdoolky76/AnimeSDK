#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIOHNCDIAPM;
namespace System { class Object; }

#define LIOHNCDIAPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E973770)
#define LIOHNCDIAPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9737B0)
#define LIOHNCDIAPM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9737C0)

	class LIOHNCDIAPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIOHNCDIAPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM___C_CTOR_OFFSET))(this);
		}

		::LIOHNCDIAPM* __cctor_b__28_0()
		{
			return ((::LIOHNCDIAPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIOHNCDIAPM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
