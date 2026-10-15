#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJBPJPEDLJL;
namespace System { class Object; }

#define EJBPJPEDLJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B07B0)
#define EJBPJPEDLJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B07F0)
#define EJBPJPEDLJL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2B0800)

	class EJBPJPEDLJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ADB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJBPJPEDLJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL___C_CTOR_OFFSET))(this);
		}

		::EJBPJPEDLJL* __cctor_b__28_0()
		{
			return ((::EJBPJPEDLJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
