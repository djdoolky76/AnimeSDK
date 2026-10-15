#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLNKIGMDODK;
namespace System { class Object; }

#define NLNKIGMDODK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB69740)
#define NLNKIGMDODK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB69780)
#define NLNKIGMDODK___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1EB69790)

	class NLNKIGMDODK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BC10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLNKIGMDODK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK___C_CTOR_OFFSET))(this);
		}

		::NLNKIGMDODK* __cctor_b__58_0()
		{
			return ((::NLNKIGMDODK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
