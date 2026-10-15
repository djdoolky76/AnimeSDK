#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockCurrentEnvProfile; }

#define RPG_GAMECORE_LOCKCURRENTENVPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F0530)
#define RPG_GAMECORE_LOCKCURRENTENVPROFILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F0540)
#define RPG_GAMECORE_LOCKCURRENTENVPROFILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F0500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockCurrentEnvProfile_TypeDefinitionIndex = 20756;

	class LockCurrentEnvProfile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Lock; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTENVPROFILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockCurrentEnvProfile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockCurrentEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTENVPROFILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockCurrentEnvProfile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockCurrentEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTENVPROFILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
