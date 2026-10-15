#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define FDPALAEIHPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA3E3F0)
#define FDPALAEIHPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3E430)
#define FDPALAEIHPB___C___CTOR_B__103_0_OFFSET UNITYSDK_OFFSET(0x1CA3E440)

inline static constexpr unsigned int FDPALAEIHPB___c_TypeDefinitionIndex = 42095;

	class FDPALAEIHPB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__103_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39990);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39998);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDPALAEIHPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPALAEIHPB___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__103_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + FDPALAEIHPB___C___CTOR_B__103_0_OFFSET))(this, a1);
		}

	};
