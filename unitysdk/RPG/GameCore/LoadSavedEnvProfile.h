#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadSavedEnvProfile; }

#define RPG_GAMECORE_LOADSAVEDENVPROFILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BCA70)
#define RPG_GAMECORE_LOADSAVEDENVPROFILE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7BCA80)
#define RPG_GAMECORE_LOADSAVEDENVPROFILE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7BC9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadSavedEnvProfile_TypeDefinitionIndex = 20755;

	class LoadSavedEnvProfile : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSAVEDENVPROFILE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadSavedEnvProfile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadSavedEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSAVEDENVPROFILE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadSavedEnvProfile* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadSavedEnvProfile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADSAVEDENVPROFILE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
