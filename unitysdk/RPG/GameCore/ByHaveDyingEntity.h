#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHaveDyingEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEDYINGENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D10B0)
#define RPG_GAMECORE_BYHAVEDYINGENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D12E0)
#define RPG_GAMECORE_BYHAVEDYINGENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D12A0)
#define RPG_GAMECORE_BYHAVEDYINGENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D10D0)
#define RPG_GAMECORE_BYHAVEDYINGENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D1070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveDyingEntity_TypeDefinitionIndex = 23065;

	class ByHaveDyingEntity : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask TeamTypeMask; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EntityTypeMask EntityTypeMask; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEDYINGENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
