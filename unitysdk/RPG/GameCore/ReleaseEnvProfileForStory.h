#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReleaseEnvProfileForStory; }

#define RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D977F40)
#define RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D977F50)
#define RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D977E80)

namespace RPG::GameCore
{
	class ReleaseEnvProfileForStory : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReleaseEnvProfileForStory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReleaseEnvProfileForStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReleaseEnvProfileForStory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReleaseEnvProfileForStory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASEENVPROFILEFORSTORY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
