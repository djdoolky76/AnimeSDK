#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELEJCHBKNBF.h"
#include "unitysdk/GMCAGEKFNMP.h"

class GONKHDAJLNE;
namespace UnityEngine { class RectTransform; }

#define GILBPIMBPKB_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x14CEB1C0)
#define GILBPIMBPKB_LGGIJKBLAIN_OFFSET UNITYSDK_OFFSET(0x14CEB0B0)
#define GILBPIMBPKB_MBGFOKMKLNH_OFFSET UNITYSDK_OFFSET(0x14CEB100)
#define GILBPIMBPKB__CTOR_OFFSET UNITYSDK_OFFSET(0x14CEB0A0)

inline static constexpr unsigned int GILBPIMBPKB_TypeDefinitionIndex = 89074;

class GILBPIMBPKB : public ::ELEJCHBKNBF
{
public:
	::GMCAGEKFNMP NNJHOOLPIDE; // 0x18

	::System::Void _ctor(::GONKHDAJLNE* AEJAMJDBHAM, ::GMCAGEKFNMP IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::GONKHDAJLNE*, ::GMCAGEKFNMP))((::PBYTE)hIl2Cpp + GILBPIMBPKB__CTOR_OFFSET))(this, AEJAMJDBHAM, IGAAKDOIPNN);
	}

	::System::Void LGGIJKBLAIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBPIMBPKB_LGGIJKBLAIN_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBPIMBPKB_HBPLINHBFFK_OFFSET))(this);
	}

	::UnityEngine::RectTransform* MBGFOKMKLNH()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + GILBPIMBPKB_MBGFOKMKLNH_OFFSET))(this);
	}
};
