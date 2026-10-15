#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIKCDPGKKLF;
namespace System { class Object; }

#define NIKCDPGKKLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB347C0)
#define NIKCDPGKKLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB34800)
#define NIKCDPGKKLF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB34810)

	class NIKCDPGKKLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIKCDPGKKLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCDPGKKLF___C_CTOR_OFFSET))(this);
		}

		::NIKCDPGKKLF* __cctor_b__23_0()
		{
			return ((::NIKCDPGKKLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIKCDPGKKLF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
