#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapPartOwnerEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3E240)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB3E2D0)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB3E2B0)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3E250)
#define RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3E1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartOwnerEntity_TypeDefinitionIndex = 24024;

	class TargetMapPartOwnerEntity : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTOWNERENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
