#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCKFCFGIDIE.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FOBFHKABDDM_FEGFHEIEMNO_OFFSET UNITYSDK_OFFSET(0x116C36E0)
#define FOBFHKABDDM_OHPBEBBABLK_OFFSET UNITYSDK_OFFSET(0x116C3700)
#define FOBFHKABDDM__CTOR_OFFSET UNITYSDK_OFFSET(0x116C3710)

inline static constexpr unsigned int FOBFHKABDDM_TypeDefinitionIndex = 90477;

class FOBFHKABDDM : public ::OCKFCFGIDIE
{
public:
	::UnityEngine::Vector3 _GADIIFPHFGK_k__BackingField; // 0x10

	::System::Void _ctor(::UnityEngine::Vector3 FCNPOKNKMOD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOBFHKABDDM__CTOR_OFFSET))(this, FCNPOKNKMOD);
	}

	::UnityEngine::Vector3 FEGFHEIEMNO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBFHKABDDM_FEGFHEIEMNO_OFFSET))(this);
	}

	::System::Boolean OHPBEBBABLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBFHKABDDM_OHPBEBBABLK_OFFSET))(this);
	}
};
