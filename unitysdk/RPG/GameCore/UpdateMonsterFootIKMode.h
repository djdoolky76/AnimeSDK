#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFootIKMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UpdateMonsterFootIKMode; }

#define RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC78930)
#define RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC78940)
#define RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC78900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UpdateMonsterFootIKMode_TypeDefinitionIndex = 22420;

	class UpdateMonsterFootIKMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FromHitAngle; // 0x18
		::System::Byte _padding0[0x3];
		::RPG::GameCore::EFootIKMode NewIKMode; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UpdateMonsterFootIKMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UpdateMonsterFootIKMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UpdateMonsterFootIKMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UpdateMonsterFootIKMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATEMONSTERFOOTIKMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
