#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEIDHKJDDJF;
namespace System { class Object; }

#define KEIDHKJDDJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F99E9B0)
#define KEIDHKJDDJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F99E9F0)
#define KEIDHKJDDJF___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F99EA00)

inline static constexpr unsigned int KEIDHKJDDJF___c_TypeDefinitionIndex = 26266;

	class KEIDHKJDDJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xAC70);
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
