#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEIDHKJDDJF;
namespace System { class Object; }

#define KEIDHKJDDJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80BE10)
#define KEIDHKJDDJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80BE50)
#define KEIDHKJDDJF___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E80BE60)

inline static constexpr unsigned int KEIDHKJDDJF___c_TypeDefinitionIndex = 25769;

	class KEIDHKJDDJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x129B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEIDHKJDDJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIDHKJDDJF___C_CTOR_OFFSET))(this);
		}

		::KEIDHKJDDJF* __cctor_b__53_0()
		{
			return ((::KEIDHKJDDJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIDHKJDDJF___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
