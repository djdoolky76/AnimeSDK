#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageEditorFeatureData; }

#define RPG_GAMECORE_STAGEEDITORFEATUREDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED1D110)
#define RPG_GAMECORE_STAGEEDITORFEATUREDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED1D0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageEditorFeatureData_TypeDefinitionIndex = 19325;

	class StageEditorFeatureData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEDITORFEATUREDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageEditorFeatureData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageEditorFeatureData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEEDITORFEATUREDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
