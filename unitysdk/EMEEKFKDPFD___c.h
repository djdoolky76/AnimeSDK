#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMEEKFKDPFD;
namespace System { class Object; }

#define EMEEKFKDPFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DFC80)
#define EMEEKFKDPFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DFCC0)
#define EMEEKFKDPFD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2DFCD0)

	class EMEEKFKDPFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMEEKFKDPFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD___C_CTOR_OFFSET))(this);
		}

		::EMEEKFKDPFD* __cctor_b__23_0()
		{
			return ((::EMEEKFKDPFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
