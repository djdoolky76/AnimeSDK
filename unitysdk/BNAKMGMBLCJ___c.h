#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNAKMGMBLCJ;
namespace System { class Object; }

#define BNAKMGMBLCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E030B60)
#define BNAKMGMBLCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E030BA0)
#define BNAKMGMBLCJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E030BB0)

	class BNAKMGMBLCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNAKMGMBLCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ___C_CTOR_OFFSET))(this);
		}

		::BNAKMGMBLCJ* __cctor_b__18_0()
		{
			return ((::BNAKMGMBLCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAKMGMBLCJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
