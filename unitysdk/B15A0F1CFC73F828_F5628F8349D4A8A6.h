#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define B15A0F1CFC73F828_F5628F8349D4A8A6_AF23BE994C373662_OFFSET UNITYSDK_OFFSET(0x1678550)
#define B15A0F1CFC73F828_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2081BF0)
#define B15A0F1CFC73F828_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B15A0F1CFC73F828_F5628F8349D4A8A6_TypeDefinitionIndex = 8473;

class B15A0F1CFC73F828_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B15A0F1CFC73F828_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B15A0F1CFC73F828_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B15A0F1CFC73F828_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Single, ::System::Boolean>** StaticGet_AD64BB6C8EC2E491()
	{
		return (::System::Func_2<::System::Single, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(B15A0F1CFC73F828_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B15A0F1CFC73F828_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B15A0F1CFC73F828_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean AF23BE994C373662(::System::Single BAF8A3E3C5E8EAEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + B15A0F1CFC73F828_F5628F8349D4A8A6_AF23BE994C373662_OFFSET))(this, BAF8A3E3C5E8EAEF);
	}
};
