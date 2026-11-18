#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

namespace UnityEngine { class RectTransform; }

#define CAIFBJBAPEJ_DAGAICADDON_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x1399A480)
#define CAIFBJBAPEJ_DAGAICADDON__CTOR_OFFSET UNITYSDK_OFFSET(0x1399A5D0)

inline static constexpr unsigned int CAIFBJBAPEJ_DAGAICADDON_TypeDefinitionIndex = 63436;

class CAIFBJBAPEJ_DAGAICADDON : public ::PIOMHDMPINF
{
public:
	::UnityEngine::RectTransform* BEACCICIIFN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIFBJBAPEJ_DAGAICADDON__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAIFBJBAPEJ_DAGAICADDON_LBJEOHBBBPN_OFFSET))(this);
	}
};
