#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ESwitchHandGestureType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSwitchHandGestureType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4AF020)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4AF210)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4AF1E0)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4AF030)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4AEFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchHandGestureType_TypeDefinitionIndex = 20954;

	class ByCompareSwitchHandGestureType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ESwitchHandGestureType GestureType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDGESTURETYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
