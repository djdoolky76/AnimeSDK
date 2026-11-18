#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Text; }

#define GPPMPHICDEA_JHKFKHOKENA_KOKFACELBDO_OFFSET UNITYSDK_OFFSET(0x13D77F60)
#define GPPMPHICDEA_JHKFKHOKENA_MMPHDEEFJEB_OFFSET UNITYSDK_OFFSET(0x13D77DA0)
#define GPPMPHICDEA_JHKFKHOKENA__CTOR_OFFSET UNITYSDK_OFFSET(0x13D77D90)

inline static constexpr unsigned int GPPMPHICDEA_JHKFKHOKENA_TypeDefinitionIndex = 42657;

class GPPMPHICDEA_JHKFKHOKENA : public ::System::Object
{
public:
	::UnityEngine::UI::Text* FCCLIEJAKLI; // 0x10
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x18
	::UnityEngine::Color HODAIDNDKHD; // 0x20
	::UnityEngine::Color JCFCMMEHNLA; // 0x30
	::System::Single FNIOPKPHDEH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JHKFKHOKENA__CTOR_OFFSET))(this);
	}

	::System::Void MMPHDEEFJEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JHKFKHOKENA_MMPHDEEFJEB_OFFSET))(this);
	}

	::System::Void KOKFACELBDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_JHKFKHOKENA_KOKFACELBDO_OFFSET))(this);
	}
};
