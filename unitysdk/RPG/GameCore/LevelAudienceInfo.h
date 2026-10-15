#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelAudienceInfo; }
namespace RPG::GameCore { class LevelAudienceMemberInfo; }

#define RPG_GAMECORE_LEVELAUDIENCEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A5540)
#define RPG_GAMECORE_LEVELAUDIENCEINFO_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7A5550)
#define RPG_GAMECORE_LEVELAUDIENCEINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7A54F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAudienceInfo_TypeDefinitionIndex = 17328;

	class LevelAudienceInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::RPG::GameCore::LevelAudienceMemberInfo* Member; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAudienceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAudienceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEINFO_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelAudienceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelAudienceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAUDIENCEINFO_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
