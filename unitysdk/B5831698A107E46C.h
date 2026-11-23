#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B5831698A107E46C_EC109B564403EDBF_OFFSET UNITYSDK_OFFSET(0x440EF50)
#define B5831698A107E46C_ED907C9B70454077_OFFSET UNITYSDK_OFFSET(0x440F260)
#define B5831698A107E46C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B5831698A107E46C_TypeDefinitionIndex = 19447;

class B5831698A107E46C : public ::System::Object
{
public:
	static ::System::String** StaticGet_B55708798113B03E()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(B5831698A107E46C_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5831698A107E46C__CTOR_OFFSET))(this);
	}

	static ::System::String* EC109B564403EDBF()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + B5831698A107E46C_EC109B564403EDBF_OFFSET))();
	}

	static ::System::Void ED907C9B70454077(::System::String* A13D2CF42AFEA353)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + B5831698A107E46C_ED907C9B70454077_OFFSET))(A13D2CF42AFEA353);
	}
};
