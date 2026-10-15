#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFCBKJEFKPG;
namespace System { class Object; }

#define AFCBKJEFKPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E114150)
#define AFCBKJEFKPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E114190)
#define AFCBKJEFKPG___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E1141A0)

	class AFCBKJEFKPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFCBKJEFKPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBKJEFKPG___C_CTOR_OFFSET))(this);
		}

		::AFCBKJEFKPG* __cctor_b__53_0()
		{
			return ((::AFCBKJEFKPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFCBKJEFKPG___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
