#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MEDCLDPMDAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8BC1B0)
#define MEDCLDPMDAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BC1F0)
#define MEDCLDPMDAA___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xB8BC200)

inline static constexpr unsigned int MEDCLDPMDAA___c_TypeDefinitionIndex = 73460;

	class MEDCLDPMDAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6EFC0);
		}

		static ::System::Func_2<::System::Boolean, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6EFC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEDCLDPMDAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCLDPMDAA___C_CTOR_OFFSET))(this);
		}

		::System::String* __ctor_b__0_0(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEDCLDPMDAA___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};
