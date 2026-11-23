#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FF3A23FED4B56F74__CCTOR_OFFSET UNITYSDK_OFFSET(0x37F6810)
#define FF3A23FED4B56F74__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FF3A23FED4B56F74_TypeDefinitionIndex = 17817;

class FF3A23FED4B56F74 : public ::System::Object
{
public:
	static ::System::String** StaticGet_A625AF010229D082()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FF3A23FED4B56F74_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_BD201AC42A629BE3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FF3A23FED4B56F74_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_F8A1BB60B604F2F7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FF3A23FED4B56F74_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::String** StaticGet_B777B42A5792E294()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FF3A23FED4B56F74_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::System::Int32* StaticGet_FAAE6D28A93EB766()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FF3A23FED4B56F74_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::System::Int32* StaticGet_E8CC00172257766F()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FF3A23FED4B56F74_TypeDefinitionIndex)->GetStaticField(0x24);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF3A23FED4B56F74__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FF3A23FED4B56F74__CCTOR_OFFSET))();
	}
};
