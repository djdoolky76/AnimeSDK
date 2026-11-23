#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
class E945252ECE50FE4E;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define B6AFCF052BEF626C_F5628F8349D4A8A6_B899CD6841EB6C36_OFFSET UNITYSDK_OFFSET(0x1C70450)
#define B6AFCF052BEF626C_F5628F8349D4A8A6_EC0A354432C83299_OFFSET UNITYSDK_OFFSET(0x1C70480)
#define B6AFCF052BEF626C_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C70A90)
#define B6AFCF052BEF626C_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B6AFCF052BEF626C_F5628F8349D4A8A6_TypeDefinitionIndex = 9624;

class B6AFCF052BEF626C_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B6AFCF052BEF626C_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B6AFCF052BEF626C_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B6AFCF052BEF626C_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::E945252ECE50FE4E*, ::System::Boolean>** StaticGet_BD38FA80B668E0D5()
	{
		return (::System::Func_2<::E945252ECE50FE4E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(B6AFCF052BEF626C_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Action_1<::AB642D1382756991*>** StaticGet_E922CBFABE1A589D()
	{
		return (::System::Action_1<::AB642D1382756991*>**)Il2CppClass::FromTypeDefinitionIndex(B6AFCF052BEF626C_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B6AFCF052BEF626C_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6AFCF052BEF626C_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean B899CD6841EB6C36(::E945252ECE50FE4E* F5571C3B9601193F)
	{
		return ((::System::Boolean(*)(::PVOID, ::E945252ECE50FE4E*))((::PBYTE)hIl2Cpp + B6AFCF052BEF626C_F5628F8349D4A8A6_B899CD6841EB6C36_OFFSET))(this, F5571C3B9601193F);
	}

	::System::Void EC0A354432C83299(::AB642D1382756991* A1601ED98A77DB44)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + B6AFCF052BEF626C_F5628F8349D4A8A6_EC0A354432C83299_OFFSET))(this, A1601ED98A77DB44);
	}
};
