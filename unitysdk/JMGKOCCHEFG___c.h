#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNGKJFAMKLI;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JMGKOCCHEFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA90070)
#define JMGKOCCHEFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA900A0)
#define JMGKOCCHEFG___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xBA900B0)

inline static constexpr unsigned int JMGKOCCHEFG___c_TypeDefinitionIndex = 64798;

	class JMGKOCCHEFG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FNGKJFAMKLI*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::FNGKJFAMKLI*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17430);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17438);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMGKOCCHEFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMGKOCCHEFG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__2_0(::FNGKJFAMKLI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNGKJFAMKLI*))((::PBYTE)hIl2Cpp + JMGKOCCHEFG___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

	};
