#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByDieAnimFinished; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYDIEANIMFINISHED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4EEE90)
#define RPG_GAMECORE_BYDIEANIMFINISHED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4EF0C0)
#define RPG_GAMECORE_BYDIEANIMFINISHED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4EF080)
#define RPG_GAMECORE_BYDIEANIMFINISHED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4EEEB0)
#define RPG_GAMECORE_BYDIEANIMFINISHED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4EEE50)

namespace RPG::GameCore
{
	class ByDieAnimFinished : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByDieAnimFinished* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByDieAnimFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYDIEANIMFINISHED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
