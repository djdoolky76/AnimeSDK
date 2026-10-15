#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapDummyEntity; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6AF70)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6B0D0)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6B0A0)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6AF80)
#define RPG_GAMECORE_TARGETMAPDUMMYENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6AF40)

namespace RPG::GameCore
{
	class TargetMapDummyEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::String* DummyEntityName; // 0x10
		::System::Boolean AutoCreate; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDummyEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDummyEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDUMMYENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
