#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/AB878F4F1A86E55C.h"

#define A2CDFA8BB8B83DA6_A7FFA2D89B459891_OFFSET UNITYSDK_OFFSET(0x41B36F0)
#define A2CDFA8BB8B83DA6_AC3B808E62EE44DD_OFFSET UNITYSDK_OFFSET(0x41B3650)
#define A2CDFA8BB8B83DA6_FEA433CD88891645_OFFSET UNITYSDK_OFFSET(0x41B36A0)

inline static constexpr unsigned int A2CDFA8BB8B83DA6_TypeDefinitionIndex = 20800;

class A2CDFA8BB8B83DA6 : public ::System::Object
{
public:
	static ::UnityEngine::AB878F4F1A86E55C A7FFA2D89B459891(::UnityEngine::SceneManagement::Scene F7B2B9D66F63A087)
	{
		return ((::UnityEngine::AB878F4F1A86E55C(*)(::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + A2CDFA8BB8B83DA6_A7FFA2D89B459891_OFFSET))(F7B2B9D66F63A087);
	}

	static ::UnityEngine::AB878F4F1A86E55C FEA433CD88891645(::UnityEngine::SceneManagement::Scene F7B2B9D66F63A087)
	{
		return ((::UnityEngine::AB878F4F1A86E55C(*)(::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + A2CDFA8BB8B83DA6_FEA433CD88891645_OFFSET))(F7B2B9D66F63A087);
	}

	static ::System::Void AC3B808E62EE44DD(::UnityEngine::SceneManagement::Scene& F7B2B9D66F63A087, ::UnityEngine::AB878F4F1A86E55C& FEC8DC0392823C8D)
	{
		return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene&, ::UnityEngine::AB878F4F1A86E55C&))((::PBYTE)hIl2Cpp + A2CDFA8BB8B83DA6_AC3B808E62EE44DD_OFFSET))(F7B2B9D66F63A087, FEC8DC0392823C8D);
	}
};
