#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapSummonedMinions; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6CAD0)
#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6CB60)
#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6CB40)
#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6CAE0)
#define RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6CA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapSummonedMinions_TypeDefinitionIndex = 23953;

	class TargetMapSummonedMinions : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSummonedMinions* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapSummonedMinions* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummonedMinions* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapSummonedMinions* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapSummonedMinions*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPSUMMONEDMINIONS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
