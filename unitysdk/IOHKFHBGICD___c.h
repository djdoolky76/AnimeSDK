#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOHKFHBGICD;
namespace System { class Object; }

#define IOHKFHBGICD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D6430)
#define IOHKFHBGICD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D6470)
#define IOHKFHBGICD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6D6480)

	class IOHKFHBGICD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59E00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOHKFHBGICD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHKFHBGICD___C_CTOR_OFFSET))(this);
		}

		::IOHKFHBGICD* __cctor_b__23_0()
		{
			return ((::IOHKFHBGICD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOHKFHBGICD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
