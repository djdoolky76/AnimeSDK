#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKOKOAJBHFN;
namespace System { class Object; }

#define KKOKOAJBHFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87E8A0)
#define KKOKOAJBHFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87E8E0)
#define KKOKOAJBHFN___C___CCTOR_B__93_0_OFFSET UNITYSDK_OFFSET(0x1E87E8F0)

	class KKOKOAJBHFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKOKOAJBHFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOKOAJBHFN___C_CTOR_OFFSET))(this);
		}

		::KKOKOAJBHFN* __cctor_b__93_0()
		{
			return ((::KKOKOAJBHFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOKOAJBHFN___C___CCTOR_B__93_0_OFFSET))(this);
		}

	};
