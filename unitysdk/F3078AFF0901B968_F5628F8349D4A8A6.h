#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A4303A8C190967DD;
namespace System { template <typename T1, typename T2> class Func_2; }

#define F3078AFF0901B968_F5628F8349D4A8A6_B57260D184B15AD5_OFFSET UNITYSDK_OFFSET(0x2099DE0)
#define F3078AFF0901B968_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x209A200)
#define F3078AFF0901B968_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F3078AFF0901B968_F5628F8349D4A8A6_TypeDefinitionIndex = 8540;

class F3078AFF0901B968_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F3078AFF0901B968_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F3078AFF0901B968_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F3078AFF0901B968_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::A4303A8C190967DD*, ::System::Boolean>** StaticGet_B2B462D767EFBA79()
	{
		return (::System::Func_2<::A4303A8C190967DD*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(F3078AFF0901B968_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F3078AFF0901B968_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3078AFF0901B968_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean B57260D184B15AD5(::A4303A8C190967DD* E858A10FDFCEEECB)
	{
		return ((::System::Boolean(*)(::PVOID, ::A4303A8C190967DD*))((::PBYTE)hIl2Cpp + F3078AFF0901B968_F5628F8349D4A8A6_B57260D184B15AD5_OFFSET))(this, E858A10FDFCEEECB);
	}
};
