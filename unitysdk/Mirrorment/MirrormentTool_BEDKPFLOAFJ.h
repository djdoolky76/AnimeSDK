#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIRRORMENT_MIRRORMENTTOOL_BEDKPFLOAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC30CFE0)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_BEDKPFLOAFJ_TypeDefinitionIndex = 48799;

	class MirrormentTool_BEDKPFLOAFJ : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x10
		::UnityEngine::Quaternion IFJHHDGEKGO; // 0x1C
		::System::Single LENCOMGPHJE; // 0x2C
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x30
		::System::Single GCPECCHMLCJ; // 0x3C
		::RPG::Client::Prop::OpticalIllusionPlane AMOEOFBNMCJ; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_BEDKPFLOAFJ_CTOR_OFFSET))(this);
		}

	};
}
