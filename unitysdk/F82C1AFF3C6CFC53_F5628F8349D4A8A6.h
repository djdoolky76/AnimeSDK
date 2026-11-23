#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class F9780C2983C25814;
namespace System { template <typename T1, typename T2> class Func_2; }

#define F82C1AFF3C6CFC53_F5628F8349D4A8A6_AAE4A6E1F9903325_OFFSET UNITYSDK_OFFSET(0x16F6D10)
#define F82C1AFF3C6CFC53_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F6E50)
#define F82C1AFF3C6CFC53_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F82C1AFF3C6CFC53_F5628F8349D4A8A6_TypeDefinitionIndex = 590;

class F82C1AFF3C6CFC53_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F82C1AFF3C6CFC53_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F82C1AFF3C6CFC53_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F82C1AFF3C6CFC53_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::F9780C2983C25814*, ::System::Boolean>** StaticGet_A7539CEF38B4E00D()
	{
		return (::System::Func_2<::F9780C2983C25814*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(F82C1AFF3C6CFC53_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F82C1AFF3C6CFC53_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F82C1AFF3C6CFC53_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean AAE4A6E1F9903325(::F9780C2983C25814* EC35F88C87A83BEB)
	{
		return ((::System::Boolean(*)(::PVOID, ::F9780C2983C25814*))((::PBYTE)hIl2Cpp + F82C1AFF3C6CFC53_F5628F8349D4A8A6_AAE4A6E1F9903325_OFFSET))(this, EC35F88C87A83BEB);
	}
};
