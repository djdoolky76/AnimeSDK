#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBNLILKKBFN;
namespace System { class Object; }

#define HBNLILKKBFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E52F470)
#define HBNLILKKBFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E52F4B0)
#define HBNLILKKBFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E52F4C0)

	class HBNLILKKBFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBNLILKKBFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN___C_CTOR_OFFSET))(this);
		}

		::HBNLILKKBFN* __cctor_b__28_0()
		{
			return ((::HBNLILKKBFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNLILKKBFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
