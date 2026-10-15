#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIMJFGIPDKI;
namespace System { class Object; }

#define GIMJFGIPDKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A0FC0)
#define GIMJFGIPDKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A1000)
#define GIMJFGIPDKI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4A1010)

	class GIMJFGIPDKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1AB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIMJFGIPDKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI___C_CTOR_OFFSET))(this);
		}

		::GIMJFGIPDKI* __cctor_b__28_0()
		{
			return ((::GIMJFGIPDKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMJFGIPDKI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
