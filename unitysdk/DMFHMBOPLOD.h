#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELEJCHBKNBF.h"

class GONKHDAJLNE;

#define DMFHMBOPLOD_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x12BBA740)
#define DMFHMBOPLOD_LGGIJKBLAIN_OFFSET UNITYSDK_OFFSET(0x12BBA6E0)
#define DMFHMBOPLOD_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x12BBA7A0)
#define DMFHMBOPLOD__CTOR_OFFSET UNITYSDK_OFFSET(0x12BBA6D0)

inline static constexpr unsigned int DMFHMBOPLOD_TypeDefinitionIndex = 76534;

class DMFHMBOPLOD : public ::ELEJCHBKNBF
{
public:
	::System::Void _ctor(::GONKHDAJLNE* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::GONKHDAJLNE*))((::PBYTE)hIl2Cpp + DMFHMBOPLOD__CTOR_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void LGGIJKBLAIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFHMBOPLOD_LGGIJKBLAIN_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFHMBOPLOD_HBPLINHBFFK_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DMFHMBOPLOD_OKJCHFGIKBH_OFFSET))(this, EGEGIMGMJHN);
	}
};
