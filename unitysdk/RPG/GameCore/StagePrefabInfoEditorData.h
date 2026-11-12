#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePrefabInfoEditorData; }

#define RPG_GAMECORE_STAGEPREFABINFOEDITORDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED25270)
#define RPG_GAMECORE_STAGEPREFABINFOEDITORDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED25230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StagePrefabInfoEditorData_TypeDefinitionIndex = 19303;

	class StagePrefabInfoEditorData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPREFABINFOEDITORDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePrefabInfoEditorData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePrefabInfoEditorData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPREFABINFOEDITORDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
