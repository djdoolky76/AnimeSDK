#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdjoinType.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
#include "unitysdk/RPG/GameCore/TeamMemberCountingOption.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapAdjoinEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPADJOINENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3B070)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3B2E0)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3B2A0)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3B080)
#define RPG_GAMECORE_TARGETMAPADJOINENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3B030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAdjoinEntity_TypeDefinitionIndex = 24017;

	class TargetMapAdjoinEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AdjoinType SideType; // 0x10
		::RPG::GameCore::AliveStateMask AliveType; // 0x12
		::System::Boolean IncludeAllRows; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 AdjoinCount; // 0x18
		::RPG::GameCore::TeamMemberCountingOption CountingOption; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapAdjoinEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapAdjoinEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAdjoinEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAdjoinEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAdjoinEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPADJOINENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
