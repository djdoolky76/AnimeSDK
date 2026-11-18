#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGPAGDNPMKJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define BBOKOGOOFGN__CTOR_OFFSET UNITYSDK_OFFSET(0x18226260)

inline static constexpr unsigned int BBOKOGOOFGN_TypeDefinitionIndex = 75906;

class BBOKOGOOFGN : public ::NGPAGDNPMKJ
{
public:
	::Cinemachine::CinemachineVirtualCamera* AIODHOBAJMH; // 0x10
	::UnityEngine::Vector3 FPNKBIPMBCA; // 0x18
	::UnityEngine::Vector3 IACKHFCLPJI; // 0x24

	::System::Void _ctor(::Cinemachine::CinemachineVirtualCamera* AIODHOBAJMH)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + BBOKOGOOFGN__CTOR_OFFSET))(this, AIODHOBAJMH);
	}
};
