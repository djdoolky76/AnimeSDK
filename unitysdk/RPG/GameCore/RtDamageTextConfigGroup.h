#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDamageTextConfigGroup; }

#define RPG_GAMECORE_RTDAMAGETEXTCONFIGGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5A580)
#define RPG_GAMECORE_RTDAMAGETEXTCONFIGGROUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5A470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDamageTextConfigGroup_TypeDefinitionIndex = 18045;

	class RtDamageTextConfigGroup : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single TextScale; // 0x10
		::System::Single TextAlpha; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGETEXTCONFIGGROUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDamageTextConfigGroup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDamageTextConfigGroup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDAMAGETEXTCONFIGGROUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
