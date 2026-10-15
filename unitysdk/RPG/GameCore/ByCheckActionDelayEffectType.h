#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayEffectType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckActionDelayEffectType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D45D480)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D45D640)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D45D610)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D45D490)
#define RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D45D450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckActionDelayEffectType_TypeDefinitionIndex = 23475;

	class ByCheckActionDelayEffectType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ActionDelayEffectType EffectType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayEffectType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayEffectType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYEFFECTTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
