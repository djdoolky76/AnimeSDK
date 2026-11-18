#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FODHABILILB.h"

namespace UnityEngine { class Animator; }

#define KEGGBMEOPDG_GNABBELBPOC_OFFSET UNITYSDK_OFFSET(0x130B6F90)
#define KEGGBMEOPDG_ONGFIOMODMJ_OFFSET UNITYSDK_OFFSET(0x130B6DC0)
#define KEGGBMEOPDG__CTOR_OFFSET UNITYSDK_OFFSET(0x130B6F80)

inline static constexpr unsigned int KEGGBMEOPDG_TypeDefinitionIndex = 62138;

class KEGGBMEOPDG : public ::FODHABILILB
{
public:
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGGBMEOPDG__CTOR_OFFSET))(this);
	}

	::System::Void ONGFIOMODMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGGBMEOPDG_ONGFIOMODMJ_OFFSET))(this);
	}

	::System::Void GNABBELBPOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGGBMEOPDG_GNABBELBPOC_OFFSET))(this);
	}
};
