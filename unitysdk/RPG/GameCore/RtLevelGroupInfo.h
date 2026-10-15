#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtLevelGroupInfoBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtLevelGroupInfo; }

#define RPG_GAMECORE_RTLEVELGROUPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5EDD0)
#define RPG_GAMECORE_RTLEVELGROUPINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA5EDF0)
#define RPG_GAMECORE_RTLEVELGROUPINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA5ED80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLevelGroupInfo_TypeDefinitionIndex = 17344;

	class RtLevelGroupInfo : public ::RPG::GameCore::RtLevelGroupInfoBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtLevelGroupInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtLevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtLevelGroupInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtLevelGroupInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
