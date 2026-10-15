#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMusicRhythmSongID; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D495770)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D495920)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4958F0)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D495780)
#define RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D495740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMusicRhythmSongID_TypeDefinitionIndex = 22060;

	class ByCompareMusicRhythmSongID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 SongID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMusicRhythmSongID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMusicRhythmSongID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMUSICRHYTHMSONGID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
