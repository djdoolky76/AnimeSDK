#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAODLPJMEFE;
namespace System { class Object; }

#define KAODLPJMEFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8210)
#define KAODLPJMEFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8250)
#define KAODLPJMEFE___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1E7E8260)

	class KAODLPJMEFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAODLPJMEFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAODLPJMEFE___C_CTOR_OFFSET))(this);
		}

		::KAODLPJMEFE* __cctor_b__68_0()
		{
			return ((::KAODLPJMEFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAODLPJMEFE___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
