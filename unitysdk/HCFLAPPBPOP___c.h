#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCFLAPPBPOP;
namespace System { class Object; }

#define HCFLAPPBPOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53A810)
#define HCFLAPPBPOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53A850)
#define HCFLAPPBPOP___C___CCTOR_B__90_0_OFFSET UNITYSDK_OFFSET(0x1E53A860)

	class HCFLAPPBPOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCFLAPPBPOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLAPPBPOP___C_CTOR_OFFSET))(this);
		}

		::HCFLAPPBPOP* __cctor_b__90_0()
		{
			return ((::HCFLAPPBPOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCFLAPPBPOP___C___CCTOR_B__90_0_OFFSET))(this);
		}

	};
