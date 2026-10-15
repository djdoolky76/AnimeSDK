#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKFDIJLEOJA;
namespace System { class Object; }

#define IKFDIJLEOJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A0970)
#define IKFDIJLEOJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A09A0)
#define IKFDIJLEOJA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E6A09B0)

	class IKFDIJLEOJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKFDIJLEOJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFDIJLEOJA___C_CTOR_OFFSET))(this);
		}

		::IKFDIJLEOJA* __cctor_b__18_0()
		{
			return ((::IKFDIJLEOJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFDIJLEOJA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
