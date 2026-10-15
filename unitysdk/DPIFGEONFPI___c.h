#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPIFGEONFPI;
namespace System { class Object; }

#define DPIFGEONFPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E211420)
#define DPIFGEONFPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E211460)
#define DPIFGEONFPI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E211470)

	class DPIFGEONFPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPIFGEONFPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI___C_CTOR_OFFSET))(this);
		}

		::DPIFGEONFPI* __cctor_b__28_0()
		{
			return ((::DPIFGEONFPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIFGEONFPI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
