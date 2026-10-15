#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OENPFHDKPNJ;
namespace System { class Object; }

#define OENPFHDKPNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE32EB0)
#define OENPFHDKPNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE32EF0)
#define OENPFHDKPNJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE32F00)

	class OENPFHDKPNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OENPFHDKPNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OENPFHDKPNJ___C_CTOR_OFFSET))(this);
		}

		::OENPFHDKPNJ* __cctor_b__33_0()
		{
			return ((::OENPFHDKPNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OENPFHDKPNJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
