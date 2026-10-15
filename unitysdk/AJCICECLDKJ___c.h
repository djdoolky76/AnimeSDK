#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJCICECLDKJ;
namespace System { class Object; }

#define AJCICECLDKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BDD80)
#define AJCICECLDKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BDDC0)
#define AJCICECLDKJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3BDDD0)

	class AJCICECLDKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJCICECLDKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCICECLDKJ___C_CTOR_OFFSET))(this);
		}

		::AJCICECLDKJ* __cctor_b__23_0()
		{
			return ((::AJCICECLDKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJCICECLDKJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
