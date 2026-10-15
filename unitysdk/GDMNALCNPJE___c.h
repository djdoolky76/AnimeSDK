#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBMCNLIKBKL;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GDMNALCNPJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1599D840)
#define GDMNALCNPJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1599D870)
#define GDMNALCNPJE___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1599D880)

inline static constexpr unsigned int GDMNALCNPJE___c_TypeDefinitionIndex = 82213;

	class GDMNALCNPJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D690);
		}

		static ::System::Func_2<::IBMCNLIKBKL*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::IBMCNLIKBKL*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDMNALCNPJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDMNALCNPJE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__2_0(::IBMCNLIKBKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBMCNLIKBKL*))((::PBYTE)hIl2Cpp + GDMNALCNPJE___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

	};
