#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMCIFMBGOLP;
namespace System { class Object; }

#define NMCIFMBGOLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6EDE0)
#define NMCIFMBGOLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6EE20)
#define NMCIFMBGOLP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB6EE30)

	class NMCIFMBGOLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BF60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMCIFMBGOLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP___C_CTOR_OFFSET))(this);
		}

		::NMCIFMBGOLP* __cctor_b__23_0()
		{
			return ((::NMCIFMBGOLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
