#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class MFNIJJGFFLM;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define MFNIJJGFFLM_EMOANKFPOHA_JKHCKJIDKOH_OFFSET UNITYSDK_OFFSET(0x14DE26B0)
#define MFNIJJGFFLM_EMOANKFPOHA__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE26A0)

inline static constexpr unsigned int MFNIJJGFFLM_EMOANKFPOHA_TypeDefinitionIndex = 44462;

class MFNIJJGFFLM_EMOANKFPOHA : public ::System::Object
{
public:
	::MFNIJJGFFLM* KLHPEBKNIFB; // 0x10
	::System::Action_1<::UnityEngine::GameObject*>* ADNIDJNEDGO; // 0x18
	::System::Boolean CLDOCAPCFPO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNIJJGFFLM_EMOANKFPOHA__CTOR_OFFSET))(this);
	}

	::System::Void JKHCKJIDKOH(::UnityEngine::GameObject* GENFJNEPKEA, ::Foundation::AssetPath DANPBAKPILL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MFNIJJGFFLM_EMOANKFPOHA_JKHCKJIDKOH_OFFSET))(this, GENFJNEPKEA, DANPBAKPILL);
	}
};
