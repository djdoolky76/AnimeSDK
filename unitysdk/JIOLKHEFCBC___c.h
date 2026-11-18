#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJCBDKKEMMD;
namespace System { template <typename T> class Comparison_1; }

#define JIOLKHEFCBC___C_NBODLBDEAMK_OFFSET UNITYSDK_OFFSET(0x1B635130)
#define JIOLKHEFCBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6350E0)
#define JIOLKHEFCBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B635120)

inline static constexpr unsigned int JIOLKHEFCBC___c_TypeDefinitionIndex = 9589;

class JIOLKHEFCBC___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JIOLKHEFCBC___c_TypeDefinitionIndex)->GetStaticField(0x7660);
	}
	static ::System::Comparison_1<::FJCBDKKEMMD*>** StaticGet___9__21_0()
	{
		return (::System::Comparison_1<::FJCBDKKEMMD*>**)Il2CppClass::FromTypeDefinitionIndex(JIOLKHEFCBC___c_TypeDefinitionIndex)->GetStaticField(0x7668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIOLKHEFCBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOLKHEFCBC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 NBODLBDEAMK(::FJCBDKKEMMD* EJCBEJMGFAJ, ::FJCBDKKEMMD* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::FJCBDKKEMMD*, ::FJCBDKKEMMD*))((::PBYTE)hIl2Cpp + JIOLKHEFCBC___C_NBODLBDEAMK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
