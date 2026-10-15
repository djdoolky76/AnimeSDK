#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAPHLHEJGEI;
namespace System { class Object; }

#define EAPHLHEJGEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22FFF0)
#define EAPHLHEJGEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E230030)
#define EAPHLHEJGEI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E230040)

	class EAPHLHEJGEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAPHLHEJGEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI___C_CTOR_OFFSET))(this);
		}

		::EAPHLHEJGEI* __cctor_b__38_0()
		{
			return ((::EAPHLHEJGEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAPHLHEJGEI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
