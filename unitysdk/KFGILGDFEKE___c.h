#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFGILGDFEKE;
namespace System { class Object; }

#define KFGILGDFEKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81AA20)
#define KFGILGDFEKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81AA60)
#define KFGILGDFEKE___C___CCTOR_B__93_0_OFFSET UNITYSDK_OFFSET(0x1E81AA70)

	class KFGILGDFEKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFGILGDFEKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGILGDFEKE___C_CTOR_OFFSET))(this);
		}

		::KFGILGDFEKE* __cctor_b__93_0()
		{
			return ((::KFGILGDFEKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGILGDFEKE___C___CCTOR_B__93_0_OFFSET))(this);
		}

	};
