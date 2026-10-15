#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHaveLockTargetInCamera; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D27E0)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D2960)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D2930)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D27F0)
#define RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D27B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveLockTargetInCamera_TypeDefinitionIndex = 20786;

	class ByHaveLockTargetInCamera : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveLockTargetInCamera* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveLockTargetInCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVELOCKTARGETINCAMERA_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
