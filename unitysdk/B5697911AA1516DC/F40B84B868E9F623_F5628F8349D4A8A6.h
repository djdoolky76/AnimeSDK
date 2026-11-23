#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define B5697911AA1516DC_F40B84B868E9F623_F5628F8349D4A8A6_B1495D7EA0ED132D_OFFSET UNITYSDK_OFFSET(0x403C0D0)
#define B5697911AA1516DC_F40B84B868E9F623_F5628F8349D4A8A6_E60C36D9AE53DD97_OFFSET UNITYSDK_OFFSET(0x41C2560)
#define B5697911AA1516DC_F40B84B868E9F623_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x41C2660)
#define B5697911AA1516DC_F40B84B868E9F623_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace B5697911AA1516DC
{
	inline static constexpr unsigned int F40B84B868E9F623_F5628F8349D4A8A6_TypeDefinitionIndex = 20774;

	class F40B84B868E9F623_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::B5697911AA1516DC::F40B84B868E9F623_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::B5697911AA1516DC::F40B84B868E9F623_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F40B84B868E9F623_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>** StaticGet_AD569E9A79F860BB()
		{
			return (::System::Func_2<::System::Reflection::MethodInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(F40B84B868E9F623_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>** StaticGet_E176852753E7ADDB()
		{
			return (::System::Func_2<::System::Reflection::MemberInfo*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(F40B84B868E9F623_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B5697911AA1516DC_F40B84B868E9F623_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5697911AA1516DC_F40B84B868E9F623_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Boolean E60C36D9AE53DD97(::System::Reflection::MethodInfo* BB8C609F76620E45)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + B5697911AA1516DC_F40B84B868E9F623_F5628F8349D4A8A6_E60C36D9AE53DD97_OFFSET))(this, BB8C609F76620E45);
		}

		::System::Int32 B1495D7EA0ED132D(::System::Reflection::MemberInfo* BB8C609F76620E45)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + B5697911AA1516DC_F40B84B868E9F623_F5628F8349D4A8A6_B1495D7EA0ED132D_OFFSET))(this, BB8C609F76620E45);
		}
	};
}
