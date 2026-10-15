#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PatrolType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIPathwayInfo; }

#define RPG_GAMECORE_AIPATHWAYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33A840)
#define RPG_GAMECORE_AIPATHWAYINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33A650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIPathwayInfo_TypeDefinitionIndex = 17230;

	class AIPathwayInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UseOwnerGroup; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 UseGroup; // 0x14
		::System::UInt32 UseID; // 0x18
		::RPG::GameCore::PatrolType Type; // 0x1C
		::System::UInt32 StartAt; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPATHWAYINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIPathwayInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIPathwayInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPATHWAYINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
