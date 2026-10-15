#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetHeadButtonEff; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETHEADBUTTONEFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB5DC0)
#define RPG_GAMECORE_SETHEADBUTTONEFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB5E00)
#define RPG_GAMECORE_SETHEADBUTTONEFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB5D60)

namespace RPG::GameCore
{
	class SetHeadButtonEff : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SelectEffPath; // 0x20
		::System::String* NormalEffPath; // 0x28
		::System::Boolean Active; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHEADBUTTONEFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHeadButtonEff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHeadButtonEff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHEADBUTTONEFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetHeadButtonEff* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetHeadButtonEff*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETHEADBUTTONEFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
