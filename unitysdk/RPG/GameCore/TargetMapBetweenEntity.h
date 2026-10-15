#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapBetweenEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB69F80)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6A030)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB69FF0)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB69F90)
#define RPG_GAMECORE_TARGETMAPBETWEENENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB69EF0)

namespace RPG::GameCore
{
	class TargetMapBetweenEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapBetweenEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapBetweenEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBetweenEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapBetweenEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapBetweenEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPBETWEENENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
