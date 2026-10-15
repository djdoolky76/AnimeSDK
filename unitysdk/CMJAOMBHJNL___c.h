#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMJAOMBHJNL;
namespace System { class Object; }

#define CMJAOMBHJNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E103110)
#define CMJAOMBHJNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E103140)
#define CMJAOMBHJNL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E103150)

	class CMJAOMBHJNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMJAOMBHJNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL___C_CTOR_OFFSET))(this);
		}

		::CMJAOMBHJNL* __cctor_b__28_0()
		{
			return ((::CMJAOMBHJNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJAOMBHJNL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
