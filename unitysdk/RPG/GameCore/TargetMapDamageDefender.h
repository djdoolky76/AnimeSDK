#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapDamageDefender; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6AEA0)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6AF30)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6AF10)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6AEB0)
#define RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6AE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapDamageDefender_TypeDefinitionIndex = 24020;

	class TargetMapDamageDefender : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDamageDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapDamageDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapDamageDefender* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapDamageDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPDAMAGEDEFENDER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
