#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELEJCHBKNBF.h"

class GONKHDAJLNE;

#define AHEJGGKDHDF_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x143A38A0)
#define AHEJGGKDHDF_LGGIJKBLAIN_OFFSET UNITYSDK_OFFSET(0x143A3800)
#define AHEJGGKDHDF__CTOR_OFFSET UNITYSDK_OFFSET(0x143A37F0)

inline static constexpr unsigned int AHEJGGKDHDF_TypeDefinitionIndex = 81069;

class AHEJGGKDHDF : public ::ELEJCHBKNBF
{
public:
	::System::Int32 KGBDIICHFEL; // 0x18

	::System::Void _ctor(::GONKHDAJLNE* AEJAMJDBHAM, ::System::Int32 CKELOFDFEEM)
	{
		return ((::System::Void(*)(::PVOID, ::GONKHDAJLNE*, ::System::Int32))((::PBYTE)hIl2Cpp + AHEJGGKDHDF__CTOR_OFFSET))(this, AEJAMJDBHAM, CKELOFDFEEM);
	}

	::System::Void LGGIJKBLAIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEJGGKDHDF_LGGIJKBLAIN_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEJGGKDHDF_HBPLINHBFFK_OFFSET))(this);
	}
};
