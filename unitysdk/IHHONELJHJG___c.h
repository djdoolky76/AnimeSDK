#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHHONELJHJG;
namespace System { class Object; }

#define IHHONELJHJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67CCC0)
#define IHHONELJHJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67CD00)
#define IHHONELJHJG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E67CD10)

	class IHHONELJHJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DCF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHHONELJHJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHONELJHJG___C_CTOR_OFFSET))(this);
		}

		::IHHONELJHJG* __cctor_b__33_0()
		{
			return ((::IHHONELJHJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHONELJHJG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
