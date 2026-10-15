#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIGPNAOGHEP.h"
#include "unitysdk/System/Object.h"
class ILCJAJBPOMO;
namespace System { class Object; }

#define ILCJAJBPOMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AA040)
#define ILCJAJBPOMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AA080)
#define ILCJAJBPOMO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6AA090)
#define ILCJAJBPOMO___C___CCTOR_B__33_1_OFFSET UNITYSDK_OFFSET(0x1E6AA0C0)
#define ILCJAJBPOMO___C___CCTOR_B__33_2_OFFSET UNITYSDK_OFFSET(0x1E6AA0D0)

	class ILCJAJBPOMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCJAJBPOMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO___C_CTOR_OFFSET))(this);
		}

		::ILCJAJBPOMO* __cctor_b__33_0()
		{
			return ((::ILCJAJBPOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCJAJBPOMO___C___CCTOR_B__33_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__33_1(::MIGPNAOGHEP a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MIGPNAOGHEP))((::PBYTE)hIl2Cpp + ILCJAJBPOMO___C___CCTOR_B__33_1_OFFSET))(this, a1);
		}

		::MIGPNAOGHEP __cctor_b__33_2(::System::Int32 a1)
		{
			return ((::MIGPNAOGHEP(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILCJAJBPOMO___C___CCTOR_B__33_2_OFFSET))(this, a1);
		}

	};
