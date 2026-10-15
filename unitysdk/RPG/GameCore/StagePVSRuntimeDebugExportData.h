#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSRuntimeDebugExportData; }

#define RPG_GAMECORE_STAGEPVSRUNTIMEDEBUGEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE55F0)
#define RPG_GAMECORE_STAGEPVSRUNTIMEDEBUGEXPORTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE5500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePVSRuntimeDebugExportData_TypeDefinitionIndex = 19175;

	class StagePVSRuntimeDebugExportData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::MVector3>* MissingPoints; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSRUNTIMEDEBUGEXPORTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSRuntimeDebugExportData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSRuntimeDebugExportData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSRUNTIMEDEBUGEXPORTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
