#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvTrackNpcLockAlert; }

#define RPG_GAMECORE_ADVTRACKNPCLOCKALERT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B34C0)
#define RPG_GAMECORE_ADVTRACKNPCLOCKALERT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B34D0)
#define RPG_GAMECORE_ADVTRACKNPCLOCKALERT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B3400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvTrackNpcLockAlert_TypeDefinitionIndex = 22189;

	class AdvTrackNpcLockAlert : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCLOCKALERT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTrackNpcLockAlert* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTrackNpcLockAlert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCLOCKALERT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTrackNpcLockAlert* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTrackNpcLockAlert*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRACKNPCLOCKALERT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
