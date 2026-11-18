#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::UI { class Image; }

#define GPPMPHICDEA_MLACJOCFHPB_KOKFACELBDO_OFFSET UNITYSDK_OFFSET(0x13E040B0)
#define GPPMPHICDEA_MLACJOCFHPB_MMPHDEEFJEB_OFFSET UNITYSDK_OFFSET(0x13E04200)
#define GPPMPHICDEA_MLACJOCFHPB__CTOR_OFFSET UNITYSDK_OFFSET(0x13E040A0)

inline static constexpr unsigned int GPPMPHICDEA_MLACJOCFHPB_TypeDefinitionIndex = 42677;

class GPPMPHICDEA_MLACJOCFHPB : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x10
	::UnityEngine::UI::Image* DNKEKDIEAMH; // 0x18
	::UnityEngine::Color HODAIDNDKHD; // 0x20
	::UnityEngine::Color JCFCMMEHNLA; // 0x30
	::System::Single FNIOPKPHDEH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MLACJOCFHPB__CTOR_OFFSET))(this);
	}

	::System::Void KOKFACELBDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MLACJOCFHPB_KOKFACELBDO_OFFSET))(this);
	}

	::System::Void MMPHDEEFJEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_MLACJOCFHPB_MMPHDEEFJEB_OFFSET))(this);
	}
};
