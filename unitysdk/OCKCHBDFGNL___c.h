#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCKCHBDFGNL;
namespace System { class Object; }

#define OCKCHBDFGNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE17030)
#define OCKCHBDFGNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE17060)
#define OCKCHBDFGNL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE17070)

	class OCKCHBDFGNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCKCHBDFGNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL___C_CTOR_OFFSET))(this);
		}

		::OCKCHBDFGNL* __cctor_b__28_0()
		{
			return ((::OCKCHBDFGNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKCHBDFGNL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
