#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVoxelDataBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AudioGroundVoxelData; }

#define RPG_GAMECORE_AUDIOGROUNDVOXELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D408EF0)
#define RPG_GAMECORE_AUDIOGROUNDVOXELDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D408F00)
#define RPG_GAMECORE_AUDIOGROUNDVOXELDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D408EA0)

namespace RPG::GameCore
{
	class AudioGroundVoxelData : public ::RPG::GameCore::StageVoxelDataBase
	{
	public:
		::Il2CppArray<::System::Byte>* Data; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOGROUNDVOXELDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudioGroundVoxelData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudioGroundVoxelData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOGROUNDVOXELDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudioGroundVoxelData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudioGroundVoxelData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOGROUNDVOXELDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
