#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFAF2E7547F02B7C.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define E1F3B616FC8706E6_F5628F8349D4A8A6_B48EADA5488543BB_OFFSET UNITYSDK_OFFSET(0x3D80D50)
#define E1F3B616FC8706E6_F5628F8349D4A8A6_F6564419DDA87E48_OFFSET UNITYSDK_OFFSET(0x3D80D50)
#define E1F3B616FC8706E6_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DB8AC0)
#define E1F3B616FC8706E6_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E1F3B616FC8706E6_F5628F8349D4A8A6_TypeDefinitionIndex = 18879;

class E1F3B616FC8706E6_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E1F3B616FC8706E6_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E1F3B616FC8706E6_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E1F3B616FC8706E6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::EFAF2E7547F02B7C, ::System::Single>** StaticGet_A7539CEF38B4E00D()
	{
		return (::System::Func_2<::EFAF2E7547F02B7C, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(E1F3B616FC8706E6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::EFAF2E7547F02B7C, ::System::Single>** StaticGet_E96D0FCBF684535C()
	{
		return (::System::Func_2<::EFAF2E7547F02B7C, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(E1F3B616FC8706E6_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E1F3B616FC8706E6_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1F3B616FC8706E6_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Single F6564419DDA87E48(::EFAF2E7547F02B7C E7DA75E24DB3F328)
	{
		return ((::System::Single(*)(::PVOID, ::EFAF2E7547F02B7C))((::PBYTE)hIl2Cpp + E1F3B616FC8706E6_F5628F8349D4A8A6_F6564419DDA87E48_OFFSET))(this, E7DA75E24DB3F328);
	}

	::System::Single B48EADA5488543BB(::EFAF2E7547F02B7C E7DA75E24DB3F328)
	{
		return ((::System::Single(*)(::PVOID, ::EFAF2E7547F02B7C))((::PBYTE)hIl2Cpp + E1F3B616FC8706E6_F5628F8349D4A8A6_B48EADA5488543BB_OFFSET))(this, E7DA75E24DB3F328);
	}
};
