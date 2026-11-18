#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define ALHNDPMOFNF_DFGIJNPJGGP_GLAKLCDNKHO_OFFSET UNITYSDK_OFFSET(0x135F6020)
#define ALHNDPMOFNF_DFGIJNPJGGP__CTOR_OFFSET UNITYSDK_OFFSET(0x135F6010)

inline static constexpr unsigned int ALHNDPMOFNF_DFGIJNPJGGP_TypeDefinitionIndex = 86724;

class ALHNDPMOFNF_DFGIJNPJGGP : public ::System::Object
{
public:
	::UnityEngine::GameObject* IAOJCPHIMHJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_DFGIJNPJGGP__CTOR_OFFSET))(this);
	}

	::System::Void GLAKLCDNKHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_DFGIJNPJGGP_GLAKLCDNKHO_OFFSET))(this);
	}
};
