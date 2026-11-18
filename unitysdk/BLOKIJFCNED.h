#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }

#define BLOKIJFCNED_JAPJMMPAICC_OFFSET UNITYSDK_OFFSET(0x1692C710)

inline static constexpr unsigned int BLOKIJFCNED_TypeDefinitionIndex = 46666;

class BLOKIJFCNED : public ::System::Object
{
public:
	static ::System::Void JAPJMMPAICC(::MoleMole::EntityHandle KECKGDFIALJ, ::MoleMole::Cameras::OverShoulderCameraConfig* EJJNGFCGNAK, ::UnityEngine::Vector3 LNLCPJACFFK, ::MoleMole::Cameras::ScopedOverShoulderCamera*& KONLMDBCDCK)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::UnityEngine::Vector3, ::MoleMole::Cameras::ScopedOverShoulderCamera*&))((::PBYTE)hIl2Cpp + BLOKIJFCNED_JAPJMMPAICC_OFFSET))(KECKGDFIALJ, EJJNGFCGNAK, LNLCPJACFFK, KONLMDBCDCK);
	}
};
