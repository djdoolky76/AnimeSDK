#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JFLOHNOGCHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16657260)
#define JFLOHNOGCHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x166572A0)
#define JFLOHNOGCHP___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x166572B0)

inline static constexpr unsigned int JFLOHNOGCHP___c_TypeDefinitionIndex = 77714;

	class JFLOHNOGCHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD010);
		}

		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFLOHNOGCHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHNOGCHP___C_CTOR_OFFSET))(this);
		}

		::System::Single __ctor_b__0_0(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JFLOHNOGCHP___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};
