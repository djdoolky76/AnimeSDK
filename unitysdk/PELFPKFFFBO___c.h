#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PELFPKFFFBO;
namespace System { class Object; }

#define PELFPKFFFBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1C9C0)
#define PELFPKFFFBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1CA00)
#define PELFPKFFFBO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF1CA10)

	class PELFPKFFFBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PELFPKFFFBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO___C_CTOR_OFFSET))(this);
		}

		::PELFPKFFFBO* __cctor_b__28_0()
		{
			return ((::PELFPKFFFBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
