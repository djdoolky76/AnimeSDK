#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOAHNKGLKKG;
namespace System { template <typename T> class Comparison_1; }

#define JAJNOEDOILI___C_AAPMDMOFDFB_OFFSET UNITYSDK_OFFSET(0x13CA5B60)
#define JAJNOEDOILI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CA5B10)
#define JAJNOEDOILI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA5B50)

inline static constexpr unsigned int JAJNOEDOILI___c_TypeDefinitionIndex = 76007;

class JAJNOEDOILI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JAJNOEDOILI___c_TypeDefinitionIndex)->GetStaticField(0x465F0);
	}
	static ::System::Comparison_1<::NOAHNKGLKKG*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::NOAHNKGLKKG*>**)Il2CppClass::FromTypeDefinitionIndex(JAJNOEDOILI___c_TypeDefinitionIndex)->GetStaticField(0x465F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAJNOEDOILI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJNOEDOILI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 AAPMDMOFDFB(::NOAHNKGLKKG* HAAEBCOBKFF, ::NOAHNKGLKKG* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::NOAHNKGLKKG*, ::NOAHNKGLKKG*))((::PBYTE)hIl2Cpp + JAJNOEDOILI___C_AAPMDMOFDFB_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
