#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtDamageExtraDataBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RtBattleDamageExtraData; }

#define RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DD80)
#define RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4DDF0)
#define RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4DC20)

namespace RPG::GameCore
{
	class RtBattleDamageExtraData : public ::RPG::GameCore::RtDamageExtraDataBase
	{
	public:
		::RPG::GameCore::DynamicFloat* AddSPRatio; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleDamageExtraData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleDamageExtraData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleDamageExtraData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleDamageExtraData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLEDAMAGEEXTRADATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
