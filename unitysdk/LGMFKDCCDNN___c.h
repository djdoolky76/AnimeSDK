#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGMFKDCCDNN;
namespace System { class Object; }

#define LGMFKDCCDNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E957870)
#define LGMFKDCCDNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9578B0)
#define LGMFKDCCDNN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9578C0)

	class LGMFKDCCDNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FD90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGMFKDCCDNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN___C_CTOR_OFFSET))(this);
		}

		::LGMFKDCCDNN* __cctor_b__28_0()
		{
			return ((::LGMFKDCCDNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGMFKDCCDNN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
