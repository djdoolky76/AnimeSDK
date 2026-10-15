#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGBAOKHOJJP;
namespace System { class Object; }

#define AGBAOKHOJJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E126970)
#define AGBAOKHOJJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1269B0)
#define AGBAOKHOJJP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1269C0)

	class AGBAOKHOJJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBAOKHOJJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP___C_CTOR_OFFSET))(this);
		}

		::AGBAOKHOJJP* __cctor_b__23_0()
		{
			return ((::AGBAOKHOJJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBAOKHOJJP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
