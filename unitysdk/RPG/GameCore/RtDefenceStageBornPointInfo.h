#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtDefenceStageBornPointInfo; }

#define RPG_GAMECORE_RTDEFENCESTAGEBORNPOINTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2E190)
#define RPG_GAMECORE_RTDEFENCESTAGEBORNPOINTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2E040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceStageBornPointInfo_TypeDefinitionIndex = 18063;

	class RtDefenceStageBornPointInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FixVec2>* PosList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEBORNPOINTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtDefenceStageBornPointInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtDefenceStageBornPointInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESTAGEBORNPOINTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
