#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AINLDBCGKOO;
namespace System { template <typename T> class Action_1; }

#define GKCOHFPFEBN___C_IFEKGINJPAF_OFFSET UNITYSDK_OFFSET(0x13D5DED0)
#define GKCOHFPFEBN___C_OGLPFFKIKAP_OFFSET UNITYSDK_OFFSET(0x13D5DFF0)
#define GKCOHFPFEBN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D5DE80)
#define GKCOHFPFEBN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D5DEC0)

inline static constexpr unsigned int GKCOHFPFEBN___c_TypeDefinitionIndex = 54789;

class GKCOHFPFEBN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GKCOHFPFEBN___c_TypeDefinitionIndex)->GetStaticField(0x378E0);
	}
	static ::System::Action_1<::AINLDBCGKOO*>** StaticGet___9__13_0()
	{
		return (::System::Action_1<::AINLDBCGKOO*>**)Il2CppClass::FromTypeDefinitionIndex(GKCOHFPFEBN___c_TypeDefinitionIndex)->GetStaticField(0x378E8);
	}
	static ::System::Action_1<::AINLDBCGKOO*>** StaticGet___9__16_0()
	{
		return (::System::Action_1<::AINLDBCGKOO*>**)Il2CppClass::FromTypeDefinitionIndex(GKCOHFPFEBN___c_TypeDefinitionIndex)->GetStaticField(0x378F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKCOHFPFEBN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCOHFPFEBN___C__CTOR_OFFSET))(this);
	}

	::System::Void IFEKGINJPAF(::AINLDBCGKOO* CCKIJJAHCIB)
	{
		return ((::System::Void(*)(::PVOID, ::AINLDBCGKOO*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN___C_IFEKGINJPAF_OFFSET))(this, CCKIJJAHCIB);
	}

	::System::Void OGLPFFKIKAP(::AINLDBCGKOO* CCKIJJAHCIB)
	{
		return ((::System::Void(*)(::PVOID, ::AINLDBCGKOO*))((::PBYTE)hIl2Cpp + GKCOHFPFEBN___C_OGLPFFKIKAP_OFFSET))(this, CCKIJJAHCIB);
	}
};
