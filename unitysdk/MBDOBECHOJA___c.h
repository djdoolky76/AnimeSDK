#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBDOBECHOJA;
namespace System { class Object; }

#define MBDOBECHOJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4250)
#define MBDOBECHOJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4290)
#define MBDOBECHOJA___C___CCTOR_B__93_0_OFFSET UNITYSDK_OFFSET(0x1E9E42A0)

	class MBDOBECHOJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x443F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBDOBECHOJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDOBECHOJA___C_CTOR_OFFSET))(this);
		}

		::MBDOBECHOJA* __cctor_b__93_0()
		{
			return ((::MBDOBECHOJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDOBECHOJA___C___CCTOR_B__93_0_OFFSET))(this);
		}

	};
