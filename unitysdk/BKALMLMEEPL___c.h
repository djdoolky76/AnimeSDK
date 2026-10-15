#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKALMLMEEPL;
namespace System { class Object; }

#define BKALMLMEEPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4E400)
#define BKALMLMEEPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4E440)
#define BKALMLMEEPL___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DF4E450)

	class BKALMLMEEPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKALMLMEEPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL___C_CTOR_OFFSET))(this);
		}

		::BKALMLMEEPL* __cctor_b__43_0()
		{
			return ((::BKALMLMEEPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKALMLMEEPL___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
