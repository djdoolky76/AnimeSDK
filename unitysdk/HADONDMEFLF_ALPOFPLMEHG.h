#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class HADONDMEFLF_BLEFGDDBJEC;
namespace UnityEngine { class GameObject; }

#define HADONDMEFLF_ALPOFPLMEHG_EBLOGEGJBID_OFFSET UNITYSDK_OFFSET(0x17E21F60)
#define HADONDMEFLF_ALPOFPLMEHG__CTOR_OFFSET UNITYSDK_OFFSET(0x17E21F50)

inline static constexpr unsigned int HADONDMEFLF_ALPOFPLMEHG_TypeDefinitionIndex = 73228;

class HADONDMEFLF_ALPOFPLMEHG : public ::System::Object
{
public:
	::HADONDMEFLF_BLEFGDDBJEC* FGBNBFHOKAA; // 0x10
	::System::Int32 OKFOIAINHHK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADONDMEFLF_ALPOFPLMEHG__CTOR_OFFSET))(this);
	}

	::System::Void EBLOGEGJBID(::Foundation::AssetPath OJEPEOOBPAM, ::UnityEngine::GameObject* ECMMKCJLBMD)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HADONDMEFLF_ALPOFPLMEHG_EBLOGEGJBID_OFFSET))(this, OJEPEOOBPAM, ECMMKCJLBMD);
	}
};
