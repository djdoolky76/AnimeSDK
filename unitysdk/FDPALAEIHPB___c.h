#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define FDPALAEIHPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC301F0)
#define FDPALAEIHPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC30230)
#define FDPALAEIHPB___C___CTOR_B__107_0_OFFSET UNITYSDK_OFFSET(0x1DC30240)

inline static constexpr unsigned int FDPALAEIHPB___c_TypeDefinitionIndex = 43070;

	class FDPALAEIHPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25B50);
		}

		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet___9__107_0()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25B58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDPALAEIHPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPALAEIHPB___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ctor_b__107_0(::System::Reflection::MethodInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + FDPALAEIHPB___C___CTOR_B__107_0_OFFSET))(this, a1);
		}

	};
