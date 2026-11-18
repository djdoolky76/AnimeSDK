#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PhysicsAnimatorInterpolation.h"

namespace Nap::NapECS { class EcsFilter; }

#define PJGAPNMFOAM__CTOR_OFFSET UNITYSDK_OFFSET(0x178DC4D0)

inline static constexpr unsigned int PJGAPNMFOAM_TypeDefinitionIndex = 72631;

class PJGAPNMFOAM : public ::System::Object
{
public:
	::Nap::NapECS::EcsFilter* MPJBLAJCFLI; // 0x10
	::Nap::NapECS::EcsFilter* BJJAIEKKJHE; // 0x18
	::System::Single PMNLNNGEIFM; // 0x20
	::System::Boolean CHKAMEMPBHE; // 0x24
	::System::Boolean GJDLBLICEEO; // 0x25
	::System::Byte _padding0[0x2];
	::System::Single CFBKEANFKFO; // 0x28
	::UnityEngine::PhysicsAnimatorInterpolation OFKEPNHHFFE; // 0x2C
	::System::Single ALLNOLHHJMD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAPNMFOAM__CTOR_OFFSET))(this);
	}
};
