#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapAllOffTeamMember; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB69250)
#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB69300)
#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB692C0)
#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB69260)
#define RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB691C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapAllOffTeamMember_TypeDefinitionIndex = 23948;

	class TargetMapAllOffTeamMember : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapAllOffTeamMember* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapAllOffTeamMember* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllOffTeamMember* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapAllOffTeamMember* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapAllOffTeamMember*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPALLOFFTEAMMEMBER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
