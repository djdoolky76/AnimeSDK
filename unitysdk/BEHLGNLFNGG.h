#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SceneSoundPortalData; }

#define BEHLGNLFNGG_NKMAIEKNEOM_OFFSET UNITYSDK_OFFSET(0x143D22F0)

inline static constexpr unsigned int BEHLGNLFNGG_TypeDefinitionIndex = 75963;

class BEHLGNLFNGG : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 NKMAIEKNEOM(::MoleMole::SceneSoundPortalData* EFHHHHBMFGJ, ::UnityEngine::Vector3 NFFNEFLKPDG, ::UnityEngine::Vector3 DPGFPHIMDEL)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::SceneSoundPortalData*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BEHLGNLFNGG_NKMAIEKNEOM_OFFSET))(EFHHHHBMFGJ, NFFNEFLKPDG, DPGFPHIMDEL);
	}
};
