#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define MFPPANAELJJ___C_AAAMPHBCCIO_OFFSET UNITYSDK_OFFSET(0x156A6590)
#define MFPPANAELJJ___C_NOMFGKLNCEM_OFFSET UNITYSDK_OFFSET(0x156A6580)
#define MFPPANAELJJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156A6530)
#define MFPPANAELJJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156A6570)

inline static constexpr unsigned int MFPPANAELJJ___c_TypeDefinitionIndex = 77763;

class MFPPANAELJJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFPPANAELJJ___c_TypeDefinitionIndex)->GetStaticField(0x32C10);
	}
	static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__10_1()
	{
		return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(MFPPANAELJJ___c_TypeDefinitionIndex)->GetStaticField(0x32C18);
	}
	static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__10_0()
	{
		return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(MFPPANAELJJ___c_TypeDefinitionIndex)->GetStaticField(0x32C20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFPPANAELJJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPPANAELJJ___C__CTOR_OFFSET))(this);
	}

	::System::Void NOMFGKLNCEM(::DGDNKBFMHME* HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MFPPANAELJJ___C_NOMFGKLNCEM_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void AAAMPHBCCIO(::DGDNKBFMHME* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MFPPANAELJJ___C_AAAMPHBCCIO_OFFSET))(this, JGPIGFLIDOJ);
	}
};
