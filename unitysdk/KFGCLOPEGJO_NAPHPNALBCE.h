#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class Slider; }

#define KFGCLOPEGJO_NAPHPNALBCE_NEHAHNJGFFG_OFFSET UNITYSDK_OFFSET(0x15209730)
#define KFGCLOPEGJO_NAPHPNALBCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15209720)

inline static constexpr unsigned int KFGCLOPEGJO_NAPHPNALBCE_TypeDefinitionIndex = 78945;

class KFGCLOPEGJO_NAPHPNALBCE : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction_1<::System::Single>* JMBCEODDFAM; // 0x10
	::UnityEngine::UI::Slider* LGGEPNMJIOB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_NAPHPNALBCE__CTOR_OFFSET))(this);
	}

	::System::Void NEHAHNJGFFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_NAPHPNALBCE_NEHAHNJGFFG_OFFSET))(this);
	}
};
