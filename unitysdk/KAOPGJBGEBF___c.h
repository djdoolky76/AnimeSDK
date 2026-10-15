#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAOPGJBGEBF;
namespace System { class Object; }

#define KAOPGJBGEBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8C90)
#define KAOPGJBGEBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8CD0)
#define KAOPGJBGEBF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7E8CE0)

	class KAOPGJBGEBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAOPGJBGEBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF___C_CTOR_OFFSET))(this);
		}

		::KAOPGJBGEBF* __cctor_b__33_0()
		{
			return ((::KAOPGJBGEBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAOPGJBGEBF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
