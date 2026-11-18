#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEKLIGLLJKM;
namespace System { template <typename T> class Predicate_1; }

#define LCHGEBBKBNG___C_KHILJBDKDNH_OFFSET UNITYSDK_OFFSET(0x1517FE40)
#define LCHGEBBKBNG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1517FDF0)
#define LCHGEBBKBNG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1517FE30)

inline static constexpr unsigned int LCHGEBBKBNG___c_TypeDefinitionIndex = 63655;

class LCHGEBBKBNG___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::MEKLIGLLJKM*>** StaticGet___9__18_0()
	{
		return (::System::Predicate_1<::MEKLIGLLJKM*>**)Il2CppClass::FromTypeDefinitionIndex(LCHGEBBKBNG___c_TypeDefinitionIndex)->GetStaticField(0x4E6F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LCHGEBBKBNG___c_TypeDefinitionIndex)->GetStaticField(0x4E6F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCHGEBBKBNG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCHGEBBKBNG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KHILJBDKDNH(::MEKLIGLLJKM* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + LCHGEBBKBNG___C_KHILJBDKDNH_OFFSET))(this, EJCBEJMGFAJ);
	}
};
