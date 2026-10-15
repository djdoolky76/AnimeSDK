#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CPJNHBCIMGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCD1410)
#define CPJNHBCIMGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD1450)
#define CPJNHBCIMGA___C___EXECUTESWITCH_B__10_4_OFFSET UNITYSDK_OFFSET(0xDCD1460)

inline static constexpr unsigned int CPJNHBCIMGA___c_TypeDefinitionIndex = 77725;

	class CPJNHBCIMGA___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__10_4()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x534A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x534A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPJNHBCIMGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJNHBCIMGA___C_CTOR_OFFSET))(this);
		}

		::System::Void __ExecuteSwitch_b__10_4(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CPJNHBCIMGA___C___EXECUTESWITCH_B__10_4_OFFSET))(this, a1);
		}

	};
