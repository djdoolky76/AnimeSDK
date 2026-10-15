#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAvatarDepart; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETAVATARDEPART_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA959A0)
#define RPG_GAMECORE_SETAVATARDEPART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA959E0)
#define RPG_GAMECORE_SETAVATARDEPART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA95940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAvatarDepart_TypeDefinitionIndex = 22744;

	class SetAvatarDepart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsDepart; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDEPART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAvatarDepart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAvatarDepart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDEPART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAvatarDepart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAvatarDepart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAVATARDEPART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
