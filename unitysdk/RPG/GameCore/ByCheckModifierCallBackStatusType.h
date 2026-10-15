#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckModifierCallBackStatusType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D494120)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4942E0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4942B0)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D494130)
#define RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4940F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckModifierCallBackStatusType_TypeDefinitionIndex = 23044;

	class ByCheckModifierCallBackStatusType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EnumStatusType TargetStatusType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckModifierCallBackStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckModifierCallBackStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMODIFIERCALLBACKSTATUSTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
