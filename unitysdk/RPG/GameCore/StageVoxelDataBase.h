#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageVoxelDataBase; }

#define RPG_GAMECORE_STAGEVOXELDATABASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17320)
#define RPG_GAMECORE_STAGEVOXELDATABASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB17330)
#define RPG_GAMECORE_STAGEVOXELDATABASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB17180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVoxelDataBase_TypeDefinitionIndex = 19155;

	class StageVoxelDataBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELDATABASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVoxelDataBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVoxelDataBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELDATABASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageVoxelDataBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageVoxelDataBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOXELDATABASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
