#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenTimeRewindPage; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_OPENTIMEREWINDPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E20E0)
#define RPG_GAMECORE_OPENTIMEREWINDPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E20F0)
#define RPG_GAMECORE_OPENTIMEREWINDPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E20B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTimeRewindPage_TypeDefinitionIndex = 20649;

	class OpenTimeRewindPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::System::Boolean InverseUIProgress; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTimeRewindPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTimeRewindPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTimeRewindPage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTimeRewindPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTIMEREWINDPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
