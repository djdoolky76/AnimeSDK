#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define LPGCOCMLBHN___C_ONLPAHHIMDB_OFFSET UNITYSDK_OFFSET(0x17CF82D0)
#define LPGCOCMLBHN___C_PKGKHADPFBB_OFFSET UNITYSDK_OFFSET(0x17CF82E0)
#define LPGCOCMLBHN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17CF8280)
#define LPGCOCMLBHN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF82C0)

inline static constexpr unsigned int LPGCOCMLBHN___c_TypeDefinitionIndex = 43913;

class LPGCOCMLBHN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LPGCOCMLBHN___c_TypeDefinitionIndex)->GetStaticField(0x484D0);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(LPGCOCMLBHN___c_TypeDefinitionIndex)->GetStaticField(0x484D8);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(LPGCOCMLBHN___c_TypeDefinitionIndex)->GetStaticField(0x484E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPGCOCMLBHN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGCOCMLBHN___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 ONLPAHHIMDB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPGCOCMLBHN___C_ONLPAHHIMDB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PKGKHADPFBB(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPGCOCMLBHN___C_PKGKHADPFBB_OFFSET))(this, EGEGIMGMJHN);
	}
};
