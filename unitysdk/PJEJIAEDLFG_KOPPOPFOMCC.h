#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJEJIAEDLFG;
class PMGADJAODDB;

#define PJEJIAEDLFG_KOPPOPFOMCC_ONABEFMEBPA_OFFSET UNITYSDK_OFFSET(0x1556BC60)
#define PJEJIAEDLFG_KOPPOPFOMCC__CTOR_OFFSET UNITYSDK_OFFSET(0x1556BC50)

inline static constexpr unsigned int PJEJIAEDLFG_KOPPOPFOMCC_TypeDefinitionIndex = 45427;

class PJEJIAEDLFG_KOPPOPFOMCC : public ::System::Object
{
public:
	::PJEJIAEDLFG* KLHPEBKNIFB; // 0x10
	::System::Int32 LJMJKBKIMLF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_KOPPOPFOMCC__CTOR_OFFSET))(this);
	}

	::System::Int32 ONABEFMEBPA(::PMGADJAODDB* HAAEBCOBKFF, ::PMGADJAODDB* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::PMGADJAODDB*, ::PMGADJAODDB*))((::PBYTE)hIl2Cpp + PJEJIAEDLFG_KOPPOPFOMCC_ONABEFMEBPA_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
