#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStateOverrideItem; }

#define RPG_GAMECORE_PROPSTATEOVERRIDEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D959A70)
#define RPG_GAMECORE_PROPSTATEOVERRIDEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9598F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateOverrideItem_TypeDefinitionIndex = 19040;

	class PropStateOverrideItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::RPG::GameCore::PropState PropState; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEOVERRIDEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateOverrideItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateOverrideItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATEOVERRIDEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
