#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetExcludeInMultiCharacterFormation; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2050)
#define RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB2090)
#define RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB1FF0)

namespace RPG::GameCore
{
	class SetExcludeInMultiCharacterFormation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsExclude; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetExcludeInMultiCharacterFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetExcludeInMultiCharacterFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEXCLUDEINMULTICHARACTERFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
