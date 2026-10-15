#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TransitionLoadingType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetLoadingStratageType; }

#define RPG_GAMECORE_SETLOADINGSTRATAGETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB7FE0)
#define RPG_GAMECORE_SETLOADINGSTRATAGETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB7FF0)
#define RPG_GAMECORE_SETLOADINGSTRATAGETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB7FB0)

namespace RPG::GameCore
{
	class SetLoadingStratageType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::LoadingStratageType StratageType; // 0x18
		::RPG::GameCore::TransitionLoadingType LoadingType; // 0x1C
		::System::Boolean RollBackWhenMissionFail; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 SubmissionID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOADINGSTRATAGETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLoadingStratageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLoadingStratageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOADINGSTRATAGETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLoadingStratageType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLoadingStratageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOADINGSTRATAGETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
