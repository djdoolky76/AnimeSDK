#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMFHPMONGC;
namespace UnityEngine { class Animator; }

#define FBMFHPMONGC_IGGLGKMFFLK_EBLNIAICEKJ_OFFSET UNITYSDK_OFFSET(0x131FCAC0)
#define FBMFHPMONGC_IGGLGKMFFLK__CTOR_OFFSET UNITYSDK_OFFSET(0x131FCAB0)

inline static constexpr unsigned int FBMFHPMONGC_IGGLGKMFFLK_TypeDefinitionIndex = 50491;

class FBMFHPMONGC_IGGLGKMFFLK : public ::System::Object
{
public:
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x10
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IGGLGKMFFLK__CTOR_OFFSET))(this);
	}

	::System::Boolean EBLNIAICEKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_IGGLGKMFFLK_EBLNIAICEKJ_OFFSET))(this);
	}
};
