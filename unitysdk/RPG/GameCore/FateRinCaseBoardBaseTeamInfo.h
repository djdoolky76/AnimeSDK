#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardBaseTeamInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66F8D0)
#define RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66F8E0)
#define RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66F6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinCaseBoardBaseTeamInfo_TypeDefinitionIndex = 16228;

	class FateRinCaseBoardBaseTeamInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardTeamType TeamType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* TeamName; // 0x18
		::RPG::Client::TextID OverrideServantTab; // 0x20
		::System::String* OverrideServantClass; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateRinCaseBoardBaseTeamInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATERINCASEBOARDBASETEAMINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
