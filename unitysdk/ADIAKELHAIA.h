#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMNHFJOBPKL;

#define ADIAKELHAIA_LJBGMAMNLDN_OFFSET UNITYSDK_OFFSET(0x154E2810)
#define ADIAKELHAIA__CCTOR_OFFSET UNITYSDK_OFFSET(0x154E27F0)
#define ADIAKELHAIA__CTOR_OFFSET UNITYSDK_OFFSET(0x154E27E0)

inline static constexpr unsigned int ADIAKELHAIA_TypeDefinitionIndex = 91538;

class ADIAKELHAIA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_ALKMCFOFGPE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ADIAKELHAIA_TypeDefinitionIndex)->GetStaticField(0xB290);
	}
	static ::System::Int32* StaticGet_HFHIJEILJKO()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ADIAKELHAIA_TypeDefinitionIndex)->GetStaticField(0xB294);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIAKELHAIA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADIAKELHAIA__CCTOR_OFFSET))();
	}

	static ::System::Int32 LJBGMAMNLDN(::AMNHFJOBPKL* FGLJPLFOOKH, ::AMNHFJOBPKL* JKJBHEJKNDO)
	{
		return ((::System::Int32(*)(::AMNHFJOBPKL*, ::AMNHFJOBPKL*))((::PBYTE)hIl2Cpp + ADIAKELHAIA_LJBGMAMNLDN_OFFSET))(FGLJPLFOOKH, JKJBHEJKNDO);
	}
};
