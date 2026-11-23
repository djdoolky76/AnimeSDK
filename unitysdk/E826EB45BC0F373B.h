#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Version; }

#define E826EB45BC0F373B__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DF58B0)
#define E826EB45BC0F373B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E826EB45BC0F373B_TypeDefinitionIndex = 14626;

class E826EB45BC0F373B : public ::System::Object
{
public:
	static ::System::Version** StaticGet_F97986650381B56D()
	{
		return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(E826EB45BC0F373B_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Version** StaticGet_EC1809C5440AA10A()
	{
		return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(E826EB45BC0F373B_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Version** StaticGet_F03E333300DBD37C()
	{
		return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(E826EB45BC0F373B_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Version** StaticGet_B02672186C54B099()
	{
		return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(E826EB45BC0F373B_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E826EB45BC0F373B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E826EB45BC0F373B__CTOR_OFFSET))(this);
	}
};
