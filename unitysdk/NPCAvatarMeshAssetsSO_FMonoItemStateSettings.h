#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCAVATARMESHASSETSSO_FMONOITEMSTATESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x114B3240)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FMonoItemStateSettings_TypeDefinitionIndex = 48077;

class NPCAvatarMeshAssetsSO_FMonoItemStateSettings : public ::System::Object
{
public:
	::System::Int32 slotNameHash; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* slotName; // 0x18
	::System::String* itemKey; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FMONOITEMSTATESETTINGS__CTOR_OFFSET))(this);
	}
};
