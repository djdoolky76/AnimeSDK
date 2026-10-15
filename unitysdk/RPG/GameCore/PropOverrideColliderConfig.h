#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropOverrideColliderConfig; }

#define RPG_GAMECORE_PROPOVERRIDECOLLIDERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D923280)
#define RPG_GAMECORE_PROPOVERRIDECOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D923030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropOverrideColliderConfig_TypeDefinitionIndex = 17585;

	class PropOverrideColliderConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 BottomOffset; // 0x10
		::System::Single Height; // 0x1C
		::System::Single Radius; // 0x20
		::System::Int32 Direction; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOVERRIDECOLLIDERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropOverrideColliderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropOverrideColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPOVERRIDECOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
