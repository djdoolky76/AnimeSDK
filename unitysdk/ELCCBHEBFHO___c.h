#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELCCBHEBFHO;
namespace System { class Object; }

#define ELCCBHEBFHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE62250)
#define ELCCBHEBFHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE62290)
#define ELCCBHEBFHO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE622A0)

inline static constexpr unsigned int ELCCBHEBFHO___c_TypeDefinitionIndex = 26645;

	class ELCCBHEBFHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELCCBHEBFHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO___C_CTOR_OFFSET))(this);
		}

		::ELCCBHEBFHO* __cctor_b__28_0()
		{
			return ((::ELCCBHEBFHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCCBHEBFHO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
