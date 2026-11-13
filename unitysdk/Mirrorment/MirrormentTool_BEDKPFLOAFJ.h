#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/OpticalIllusionPlane.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MIRRORMENT_MIRRORMENTTOOL_BEDKPFLOAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1B235DD0)

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_BEDKPFLOAFJ_TypeDefinitionIndex = 48799;

	class MirrormentTool_BEDKPFLOAFJ : public ::System::Object
	{
	public:
		::System::Single LENCOMGPHJE; // 0x10
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x14
		::RPG::Client::Prop::OpticalIllusionPlane AMOEOFBNMCJ; // 0x20
		::System::Single GCPECCHMLCJ; // 0x24
		::UnityEngine::Vector3 NEMDKBKDFDN; // 0x28
		::UnityEngine::Quaternion IFJHHDGEKGO; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIRRORMENT_MIRRORMENTTOOL_BEDKPFLOAFJ_CTOR_OFFSET))(this);
		}

	};
}
