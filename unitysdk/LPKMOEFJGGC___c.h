#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPKMOEFJGGC;
namespace System { class Object; }

#define LPKMOEFJGGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D2810)
#define LPKMOEFJGGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D2850)
#define LPKMOEFJGGC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9D2860)

	class LPKMOEFJGGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x421F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPKMOEFJGGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC___C_CTOR_OFFSET))(this);
		}

		::LPKMOEFJGGC* __cctor_b__33_0()
		{
			return ((::LPKMOEFJGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKMOEFJGGC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
