#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BillboardController; }

#define STAGEHARMONYBILLBOARDCONTROLLERWRAPCOMPONENTLINKSLOT_ILFDALBGFLB_CTOR_OFFSET UNITYSDK_OFFSET(0xE98D420)

inline static constexpr unsigned int StageHarmonyBillboardControllerWrapComponentLinkSlot_ILFDALBGFLB_TypeDefinitionIndex = 47360;

	class StageHarmonyBillboardControllerWrapComponentLinkSlot_ILFDALBGFLB : public ::System::Object
	{
	public:
		::RPG::Client::BillboardController* JNDFNOIIIAG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STAGEHARMONYBILLBOARDCONTROLLERWRAPCOMPONENTLINKSLOT_ILFDALBGFLB_CTOR_OFFSET))(this);
		}

	};
