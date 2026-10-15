#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHNNEFBOPIE;
namespace System { class Object; }

#define MHNNEFBOPIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA39380)
#define MHNNEFBOPIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA393C0)
#define MHNNEFBOPIE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA393D0)

	class MHNNEFBOPIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x527C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHNNEFBOPIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE___C_CTOR_OFFSET))(this);
		}

		::MHNNEFBOPIE* __cctor_b__28_0()
		{
			return ((::MHNNEFBOPIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNNEFBOPIE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
