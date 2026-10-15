#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIGKGOOHGAG;
namespace System { class Object; }

#define CIGKGOOHGAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D2F10)
#define CIGKGOOHGAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D2F50)
#define CIGKGOOHGAG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0D2F60)

	class CIGKGOOHGAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x175C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIGKGOOHGAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKGOOHGAG___C_CTOR_OFFSET))(this);
		}

		::CIGKGOOHGAG* __cctor_b__23_0()
		{
			return ((::CIGKGOOHGAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGKGOOHGAG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
