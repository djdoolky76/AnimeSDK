#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELCCBHEBFHO;
namespace System { class Object; }

#define ELCCBHEBFHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CB040)
#define ELCCBHEBFHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CB080)
#define ELCCBHEBFHO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2CB090)

inline static constexpr unsigned int ELCCBHEBFHO___c_TypeDefinitionIndex = 26118;

	class ELCCBHEBFHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FBA0);
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
