#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class A4303A8C190967DD;
class F4974D2FC3971B21;
namespace System { template <typename T1, typename T2> class Func_2; }

#define F90F27EA5904AB78_F5628F8349D4A8A6_AAE4A6E1F9903325_OFFSET UNITYSDK_OFFSET(0x167C670)
#define F90F27EA5904AB78_F5628F8349D4A8A6_FB0C618490DE1548_OFFSET UNITYSDK_OFFSET(0x167C6E0)
#define F90F27EA5904AB78_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x167C750)
#define F90F27EA5904AB78_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F90F27EA5904AB78_F5628F8349D4A8A6_TypeDefinitionIndex = 81;

class F90F27EA5904AB78_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F90F27EA5904AB78_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F90F27EA5904AB78_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F90F27EA5904AB78_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::F4974D2FC3971B21*>, ::System::Boolean>** StaticGet_A7539CEF38B4E00D()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::F4974D2FC3971B21*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(F90F27EA5904AB78_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::A4303A8C190967DD*>, ::System::Boolean>** StaticGet_E96D0FCBF684535C()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::A4303A8C190967DD*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(F90F27EA5904AB78_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F90F27EA5904AB78_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F90F27EA5904AB78_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean AAE4A6E1F9903325(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::F4974D2FC3971B21*> AC077DE329913A66)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::F4974D2FC3971B21*>))((::PBYTE)hIl2Cpp + F90F27EA5904AB78_F5628F8349D4A8A6_AAE4A6E1F9903325_OFFSET))(this, AC077DE329913A66);
	}

	::System::Boolean FB0C618490DE1548(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::A4303A8C190967DD*> AC077DE329913A66)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::A4303A8C190967DD*>))((::PBYTE)hIl2Cpp + F90F27EA5904AB78_F5628F8349D4A8A6_FB0C618490DE1548_OFFSET))(this, AC077DE329913A66);
	}
};
