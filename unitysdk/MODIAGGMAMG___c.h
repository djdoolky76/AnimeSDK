#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MODIAGGMAMG;
namespace System { class Object; }

#define MODIAGGMAMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAA5B80)
#define MODIAGGMAMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA5BC0)
#define MODIAGGMAMG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAA5BD0)

	class MODIAGGMAMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A2A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MODIAGGMAMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIAGGMAMG___C_CTOR_OFFSET))(this);
		}

		::MODIAGGMAMG* __cctor_b__18_0()
		{
			return ((::MODIAGGMAMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIAGGMAMG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
