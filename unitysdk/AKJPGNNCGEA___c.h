#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKJPGNNCGEA___C_NJPHNPPJJOC_OFFSET UNITYSDK_OFFSET(0x17DDC810)
#define AKJPGNNCGEA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DDC7C0)
#define AKJPGNNCGEA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDC800)

inline static constexpr unsigned int AKJPGNNCGEA___c_TypeDefinitionIndex = 90426;

class AKJPGNNCGEA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AKJPGNNCGEA___c_TypeDefinitionIndex)->GetStaticField(0x4E050);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKJPGNNCGEA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKJPGNNCGEA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 NJPHNPPJJOC(::System::UInt32 EJCBEJMGFAJ, ::System::UInt32 EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKJPGNNCGEA___C_NJPHNPPJJOC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
