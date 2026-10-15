#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHELNMGMENO;
namespace System { class Object; }

#define EHELNMGMENO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E29F090)
#define EHELNMGMENO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E29F0D0)
#define EHELNMGMENO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E29F0E0)

	class EHELNMGMENO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x484D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHELNMGMENO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELNMGMENO___C_CTOR_OFFSET))(this);
		}

		::EHELNMGMENO* __cctor_b__23_0()
		{
			return ((::EHELNMGMENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHELNMGMENO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
