#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimActionBubbleTalkInfo.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }

#define RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AD940)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AD950)
#define RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B3C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBubbleTalkInfo_TypeDefinitionIndex = 21482;

	class FiveDimBubbleTalkInfo : public ::RPG::GameCore::FiveDimActionBubbleTalkInfo
	{
	public:
		::RPG::GameCore::DynamicString* EntityID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBubbleTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimBubbleTalkInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimBubbleTalkInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBUBBLETALKINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
