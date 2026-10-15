#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKIAEJLCPHL;
namespace System { class Object; }

#define PKIAEJLCPHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF939E0)
#define PKIAEJLCPHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF93A20)
#define PKIAEJLCPHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF93A30)

	class PKIAEJLCPHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKIAEJLCPHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL___C_CTOR_OFFSET))(this);
		}

		::PKIAEJLCPHL* __cctor_b__28_0()
		{
			return ((::PKIAEJLCPHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKIAEJLCPHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
