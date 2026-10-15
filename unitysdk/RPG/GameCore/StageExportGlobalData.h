#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageExportGlobalData; }

#define RPG_GAMECORE_STAGEEXPORTGLOBALDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0D340)
#define RPG_GAMECORE_STAGEEXPORTGLOBALDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB0D300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageExportGlobalData_TypeDefinitionIndex = 19143;

	class StageExportGlobalData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXPORTGLOBALDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageExportGlobalData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageExportGlobalData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEXPORTGLOBALDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
