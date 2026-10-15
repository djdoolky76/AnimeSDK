#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDJNPJKFBPJ;
namespace System { class Object; }

#define HDJNPJKFBPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54E6D0)
#define HDJNPJKFBPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54E710)
#define HDJNPJKFBPJ___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E54E720)

	class HDJNPJKFBPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDJNPJKFBPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJNPJKFBPJ___C_CTOR_OFFSET))(this);
		}

		::HDJNPJKFBPJ* __cctor_b__53_0()
		{
			return ((::HDJNPJKFBPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJNPJKFBPJ___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
