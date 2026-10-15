#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEODEMHEBKC;
namespace System { class Object; }

#define JEODEMHEBKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E720D50)
#define JEODEMHEBKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E720D90)
#define JEODEMHEBKC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E720DA0)

inline static constexpr unsigned int JEODEMHEBKC___c_TypeDefinitionIndex = 26345;

	class JEODEMHEBKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEODEMHEBKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC___C_CTOR_OFFSET))(this);
		}

		::JEODEMHEBKC* __cctor_b__28_0()
		{
			return ((::JEODEMHEBKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEODEMHEBKC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
