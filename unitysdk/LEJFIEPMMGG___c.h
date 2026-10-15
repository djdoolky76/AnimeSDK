#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEJFIEPMMGG;
namespace System { class Object; }

#define LEJFIEPMMGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E934260)
#define LEJFIEPMMGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E934290)
#define LEJFIEPMMGG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9342A0)

	class LEJFIEPMMGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x390E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEJFIEPMMGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG___C_CTOR_OFFSET))(this);
		}

		::LEJFIEPMMGG* __cctor_b__33_0()
		{
			return ((::LEJFIEPMMGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJFIEPMMGG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
