#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEEFPOLFCOO;
namespace System { class Object; }

#define JEEFPOLFCOO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E716640)
#define JEEFPOLFCOO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E716680)
#define JEEFPOLFCOO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E716690)

	class JEEFPOLFCOO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEEFPOLFCOO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO___C_CTOR_OFFSET))(this);
		}

		::JEEFPOLFCOO* __cctor_b__18_0()
		{
			return ((::JEEFPOLFCOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
