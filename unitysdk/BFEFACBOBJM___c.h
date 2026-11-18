#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class POPMPAPKINK;
namespace System { template <typename T> class Predicate_1; }

#define BFEFACBOBJM___C_AIFLKPCJBHC_OFFSET UNITYSDK_OFFSET(0x12D21310)
#define BFEFACBOBJM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D212C0)
#define BFEFACBOBJM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12D21300)

inline static constexpr unsigned int BFEFACBOBJM___c_TypeDefinitionIndex = 83136;

class BFEFACBOBJM___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::POPMPAPKINK*>** StaticGet___9__2_0()
	{
		return (::System::Predicate_1<::POPMPAPKINK*>**)Il2CppClass::FromTypeDefinitionIndex(BFEFACBOBJM___c_TypeDefinitionIndex)->GetStaticField(0x42D80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BFEFACBOBJM___c_TypeDefinitionIndex)->GetStaticField(0x42D88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFEFACBOBJM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEFACBOBJM___C__CTOR_OFFSET))(this);
	}

	::System::Boolean AIFLKPCJBHC(::POPMPAPKINK* GPMOKAFOLBL)
	{
		return ((::System::Boolean(*)(::PVOID, ::POPMPAPKINK*))((::PBYTE)hIl2Cpp + BFEFACBOBJM___C_AIFLKPCJBHC_OFFSET))(this, GPMOKAFOLBL);
	}
};
