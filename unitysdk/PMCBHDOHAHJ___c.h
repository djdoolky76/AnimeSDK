#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJIAEJICFAA_BPAOIDDLHMJ;

#define PMCBHDOHAHJ___C_HFIDHECDLGC_OFFSET UNITYSDK_OFFSET(0x13723CB0)
#define PMCBHDOHAHJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13723C60)
#define PMCBHDOHAHJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13723CA0)

inline static constexpr unsigned int PMCBHDOHAHJ___c_TypeDefinitionIndex = 40953;

class PMCBHDOHAHJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PMCBHDOHAHJ___c_TypeDefinitionIndex)->GetStaticField(0x4C9D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMCBHDOHAHJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCBHDOHAHJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HFIDHECDLGC(::PJIAEJICFAA_BPAOIDDLHMJ* KILPCOMOCMD, ::PJIAEJICFAA_BPAOIDDLHMJ* BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::PJIAEJICFAA_BPAOIDDLHMJ*, ::PJIAEJICFAA_BPAOIDDLHMJ*))((::PBYTE)hIl2Cpp + PMCBHDOHAHJ___C_HFIDHECDLGC_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}
};
