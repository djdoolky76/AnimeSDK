#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBCKAGHDPEB;
namespace System { class Object; }

#define GBCKAGHDPEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E427AD0)
#define GBCKAGHDPEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E427B10)
#define GBCKAGHDPEB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E427B20)

	class GBCKAGHDPEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCAF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBCKAGHDPEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAGHDPEB___C_CTOR_OFFSET))(this);
		}

		::GBCKAGHDPEB* __cctor_b__18_0()
		{
			return ((::GBCKAGHDPEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCKAGHDPEB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
