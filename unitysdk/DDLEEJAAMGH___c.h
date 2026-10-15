#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDLEEJAAMGH;
namespace System { class Object; }

#define DDLEEJAAMGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1811E0)
#define DDLEEJAAMGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E181220)
#define DDLEEJAAMGH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E181230)

	class DDLEEJAAMGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDLEEJAAMGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH___C_CTOR_OFFSET))(this);
		}

		::DDLEEJAAMGH* __cctor_b__23_0()
		{
			return ((::DDLEEJAAMGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLEEJAAMGH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
