#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDIHMOLCGED;
namespace System { class Object; }

#define KDIHMOLCGED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E801C30)
#define KDIHMOLCGED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E801C70)
#define KDIHMOLCGED___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E801C80)

	class KDIHMOLCGED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDIHMOLCGED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED___C_CTOR_OFFSET))(this);
		}

		::KDIHMOLCGED* __cctor_b__28_0()
		{
			return ((::KDIHMOLCGED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDIHMOLCGED___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
