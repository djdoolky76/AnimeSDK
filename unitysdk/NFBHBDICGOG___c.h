#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFBHBDICGOG;
namespace System { class Object; }

#define NFBHBDICGOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAFFB90)
#define NFBHBDICGOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFFBC0)
#define NFBHBDICGOG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EAFFBD0)

	class NFBHBDICGOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E5D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFBHBDICGOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBHBDICGOG___C_CTOR_OFFSET))(this);
		}

		::NFBHBDICGOG* __cctor_b__18_0()
		{
			return ((::NFBHBDICGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFBHBDICGOG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
