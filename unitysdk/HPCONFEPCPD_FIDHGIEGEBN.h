#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class OverShoulderCameraConfig; }

#define HPCONFEPCPD_FIDHGIEGEBN_AJEPFHBBIHG_OFFSET UNITYSDK_OFFSET(0x15BE5A60)
#define HPCONFEPCPD_FIDHGIEGEBN_GNMDPMPDBME_OFFSET UNITYSDK_OFFSET(0x15BE56A0)
#define HPCONFEPCPD_FIDHGIEGEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE5690)

inline static constexpr unsigned int HPCONFEPCPD_FIDHGIEGEBN_TypeDefinitionIndex = 90928;

class HPCONFEPCPD_FIDHGIEGEBN : public ::System::Object
{
public:
	::MoleMole::EntityHandle HPADNAEINPK; // 0x10
	::MoleMole::Cameras::OverShoulderCameraConfig* KOHGKOEBCMM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_FIDHGIEGEBN__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 GNMDPMPDBME()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_FIDHGIEGEBN_GNMDPMPDBME_OFFSET))(this);
	}

	::System::Single AJEPFHBBIHG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_FIDHGIEGEBN_AJEPFHBBIHG_OFFSET))(this);
	}
};
