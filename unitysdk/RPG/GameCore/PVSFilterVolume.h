#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeConfigV2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PVSFilterVolume; }

#define RPG_GAMECORE_PVSFILTERVOLUME_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13E990)
#define RPG_GAMECORE_PVSFILTERVOLUME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F13E9A0)
#define RPG_GAMECORE_PVSFILTERVOLUME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F13E970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVSFilterVolume_TypeDefinitionIndex = 19336;

	class PVSFilterVolume : public ::RPG::GameCore::StageVolumeConfigV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSFILTERVOLUME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PVSFilterVolume* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PVSFilterVolume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSFILTERVOLUME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PVSFilterVolume* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PVSFilterVolume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PVSFILTERVOLUME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
