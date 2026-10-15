#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NamedLevelObjectInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtLevelGroupInstanceInfo; }
namespace System { class String; }

#define RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA337D0)
#define RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA337E0)
#define RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA337A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtLevelGroupInstanceInfo_TypeDefinitionIndex = 17345;

	class RtLevelGroupInstanceInfo : public ::RPG::GameCore::NamedLevelObjectInfo
	{
	public:
		::System::String* GroupPath; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtLevelGroupInstanceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtLevelGroupInstanceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtLevelGroupInstanceInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtLevelGroupInstanceInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTLEVELGROUPINSTANCEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
