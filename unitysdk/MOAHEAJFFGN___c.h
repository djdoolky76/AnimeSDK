#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOAHEAJFFGN;
namespace System { class Object; }

#define MOAHEAJFFGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA4AF0)
#define MOAHEAJFFGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA4B30)
#define MOAHEAJFFGN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAA4B40)

	class MOAHEAJFFGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOAHEAJFFGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN___C_CTOR_OFFSET))(this);
		}

		::MOAHEAJFFGN* __cctor_b__28_0()
		{
			return ((::MOAHEAJFFGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAHEAJFFGN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
