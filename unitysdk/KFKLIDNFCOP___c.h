#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFKLIDNFCOP;
namespace System { class Object; }

#define KFKLIDNFCOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB33240)
#define KFKLIDNFCOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB33280)
#define KFKLIDNFCOP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB33290)

inline static constexpr unsigned int KFKLIDNFCOP___c_TypeDefinitionIndex = 32812;

	class KFKLIDNFCOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBD60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFKLIDNFCOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP___C_CTOR_OFFSET))(this);
		}

		::KFKLIDNFCOP* __cctor_b__28_0()
		{
			return ((::KFKLIDNFCOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFKLIDNFCOP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
