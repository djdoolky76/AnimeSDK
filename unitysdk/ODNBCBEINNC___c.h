#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODNBCBEINNC;
namespace System { class Object; }

#define ODNBCBEINNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE21C50)
#define ODNBCBEINNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE21C80)
#define ODNBCBEINNC___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DE21C90)

	class ODNBCBEINNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODNBCBEINNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNBCBEINNC___C_CTOR_OFFSET))(this);
		}

		::ODNBCBEINNC* __cctor_b__53_0()
		{
			return ((::ODNBCBEINNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNBCBEINNC___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
