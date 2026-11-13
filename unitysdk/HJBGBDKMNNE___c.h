#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJBGBDKMNNE;
namespace System { class Object; }

#define HJBGBDKMNNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2015E100)
#define HJBGBDKMNNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2015E140)
#define HJBGBDKMNNE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2015E150)

inline static constexpr unsigned int HJBGBDKMNNE___c_TypeDefinitionIndex = 31194;

	class HJBGBDKMNNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJBGBDKMNNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBGBDKMNNE___C_CTOR_OFFSET))(this);
		}

		::HJBGBDKMNNE* __cctor_b__23_0()
		{
			return ((::HJBGBDKMNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBGBDKMNNE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
