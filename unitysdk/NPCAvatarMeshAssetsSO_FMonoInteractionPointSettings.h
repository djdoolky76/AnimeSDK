#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECMMFJGJDKL.h"
#include "unitysdk/GIDJDKCFICH.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCAVATARMESHASSETSSO_FMONOINTERACTIONPOINTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xE1AFC20)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FMonoInteractionPointSettings_TypeDefinitionIndex = 48074;

class NPCAvatarMeshAssetsSO_FMonoInteractionPointSettings : public ::System::Object
{
public:
	::System::Int32 slotNameHash; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* slotName; // 0x18
	::System::Single range; // 0x20
	::System::Single minAngle; // 0x24
	::System::Single maxAngle; // 0x28
	::GIDJDKCFICH DirectionType; // 0x2C
	::System::Boolean useNavmesh; // 0x30
	::System::Byte _padding1[0x3];
	::ECMMFJGJDKL interactType; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FMONOINTERACTIONPOINTSETTINGS__CTOR_OFFSET))(this);
	}
};
