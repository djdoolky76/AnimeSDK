#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapAttackTargetList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB69BB0)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB69C40)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB69C20)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB69BC0)
#define RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB69B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAttackTargetList_TypeDefinitionIndex = 24021;

	class TargetMapAttackTargetList : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapAttackTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapAttackTargetList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAttackTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAttackTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAttackTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPATTACKTARGETLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
