#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKCNOIGHOPM;
namespace System { class Object; }

#define GKCNOIGHOPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B06F0)
#define GKCNOIGHOPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B0730)
#define GKCNOIGHOPM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4B0740)

	class GKCNOIGHOPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKCNOIGHOPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM___C_CTOR_OFFSET))(this);
		}

		::GKCNOIGHOPM* __cctor_b__33_0()
		{
			return ((::GKCNOIGHOPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNOIGHOPM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
