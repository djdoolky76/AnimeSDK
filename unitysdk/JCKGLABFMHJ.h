#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELEJCHBKNBF.h"

class GONKHDAJLNE;

#define JCKGLABFMHJ_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x16AC7FB0)
#define JCKGLABFMHJ_LGGIJKBLAIN_OFFSET UNITYSDK_OFFSET(0x16AC7F50)
#define JCKGLABFMHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC7F00)

inline static constexpr unsigned int JCKGLABFMHJ_TypeDefinitionIndex = 42029;

class JCKGLABFMHJ : public ::ELEJCHBKNBF
{
public:
	::System::Void _ctor(::GONKHDAJLNE* AEJAMJDBHAM, ::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::GONKHDAJLNE*, ::System::Int32))((::PBYTE)hIl2Cpp + JCKGLABFMHJ__CTOR_OFFSET))(this, AEJAMJDBHAM, HAAEBCOBKFF);
	}

	::System::Void LGGIJKBLAIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGLABFMHJ_LGGIJKBLAIN_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKGLABFMHJ_HBPLINHBFFK_OFFSET))(this);
	}
};
