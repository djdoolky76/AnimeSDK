#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define AKGIOGDGANK_DLDFNCNKNJN_OFFSET UNITYSDK_OFFSET(0x155054E0)
#define AKGIOGDGANK_IBPGLGKJDLP_OFFSET UNITYSDK_OFFSET(0x15505490)
#define AKGIOGDGANK_JJAGBMLGMPF_OFFSET UNITYSDK_OFFSET(0x15505840)
#define AKGIOGDGANK_LKACNMKOABB_OFFSET UNITYSDK_OFFSET(0x155057E0)
#define AKGIOGDGANK__CTOR_OFFSET UNITYSDK_OFFSET(0x15505430)

inline static constexpr unsigned int AKGIOGDGANK_TypeDefinitionIndex = 52154;

class AKGIOGDGANK : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* NLJOCJAIBAI; // 0x10
	::System::Action_1<::System::Single>* KLGKFPMHIFA; // 0x18
	::System::Action_1<::System::Single>* LJFMINBMIAE; // 0x20
	::System::Single JKAGGKKINMB; // 0x28
	::System::Single IFOKLBAOPGI; // 0x2C
	::Foundation::Coroutine::CoroutineHandle NEIEMHLFGIL; // 0x30
	::System::Single FNIOFNFDEEL; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGIOGDGANK__CTOR_OFFSET))(this);
	}

	::System::Void IBPGLGKJDLP(::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + AKGIOGDGANK_IBPGLGKJDLP_OFFSET))(this, FAJHPKBELMF);
	}

	::System::Void DLDFNCNKNJN(::System::UInt32 JMCLFJCPMPB, ::System::UInt32 MJDJLJMBIBF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AKGIOGDGANK_DLDFNCNKNJN_OFFSET))(this, JMCLFJCPMPB, MJDJLJMBIBF);
	}

	::System::Void LKACNMKOABB(::System::Action_1<::System::Single>* LJFMINBMIAE, ::System::Action_1<::System::Single>* KLGKFPMHIFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + AKGIOGDGANK_LKACNMKOABB_OFFSET))(this, LJFMINBMIAE, KLGKFPMHIFA);
	}

	::System::Void JJAGBMLGMPF(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKGIOGDGANK_JJAGBMLGMPF_OFFSET))(this, EGEGIMGMJHN);
	}
};
