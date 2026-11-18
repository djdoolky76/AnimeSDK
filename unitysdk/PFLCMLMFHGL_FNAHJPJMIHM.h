#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOMHDMPINF.h"

class LGINJIKKBJA;
namespace UnityEngine { class GameObject; }

#define PFLCMLMFHGL_FNAHJPJMIHM_LBJEOHBBBPN_OFFSET UNITYSDK_OFFSET(0x14B991F0)
#define PFLCMLMFHGL_FNAHJPJMIHM__CTOR_OFFSET UNITYSDK_OFFSET(0x14B99340)

inline static constexpr unsigned int PFLCMLMFHGL_FNAHJPJMIHM_TypeDefinitionIndex = 57449;

class PFLCMLMFHGL_FNAHJPJMIHM : public ::PIOMHDMPINF
{
public:
	::UnityEngine::GameObject* AGKDFCGPHBF; // 0x10
	::UnityEngine::GameObject* IAKIMCNBNFM; // 0x18
	::LGINJIKKBJA* CHPJINOECAP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLCMLMFHGL_FNAHJPJMIHM__CTOR_OFFSET))(this);
	}

	::System::Boolean LBJEOHBBBPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLCMLMFHGL_FNAHJPJMIHM_LBJEOHBBBPN_OFFSET))(this);
	}
};
