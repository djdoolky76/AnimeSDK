#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEDNDGLKGKN;
namespace System { class Object; }

#define PEDNDGLKGKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF15190)
#define PEDNDGLKGKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF151D0)
#define PEDNDGLKGKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF151E0)

	class PEDNDGLKGKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x384B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEDNDGLKGKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN___C_CTOR_OFFSET))(this);
		}

		::PEDNDGLKGKN* __cctor_b__28_0()
		{
			return ((::PEDNDGLKGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDNDGLKGKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
