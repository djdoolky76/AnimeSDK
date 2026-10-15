#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFGEMCJLGPP;
namespace System { class Object; }

#define GFGEMCJLGPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E469DC0)
#define GFGEMCJLGPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E469E00)
#define GFGEMCJLGPP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E469E10)

	class GFGEMCJLGPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFGEMCJLGPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP___C_CTOR_OFFSET))(this);
		}

		::GFGEMCJLGPP* __cctor_b__33_0()
		{
			return ((::GFGEMCJLGPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
