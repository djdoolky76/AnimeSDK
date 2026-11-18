#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define MFNIJJGFFLM_OLOAPIFOPHO_HCJFNEIJFGD_OFFSET UNITYSDK_OFFSET(0x1A641660)
#define MFNIJJGFFLM_OLOAPIFOPHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A641650)

inline static constexpr unsigned int MFNIJJGFFLM_OLOAPIFOPHO_TypeDefinitionIndex = 44461;

class MFNIJJGFFLM_OLOAPIFOPHO : public ::System::Object
{
public:
	::System::Action_1<::Foundation::AssetPath>* HGBOMLCCBEE; // 0x10
	::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>* ADNIDJNEDGO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNIJJGFFLM_OLOAPIFOPHO__CTOR_OFFSET))(this);
	}

	::System::Void HCJFNEIJFGD(::Foundation::AssetPath JNDDJMAHNAI, ::UnityEngine::GameObject* NGLKIKLLLFL)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MFNIJJGFFLM_OLOAPIFOPHO_HCJFNEIJFGD_OFFSET))(this, JNDDJMAHNAI, NGLKIKLLLFL);
	}
};
