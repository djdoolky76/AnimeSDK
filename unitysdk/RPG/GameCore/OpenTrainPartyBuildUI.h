#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpenTrainPartyBuildUI; }

#define RPG_GAMECORE_OPENTRAINPARTYBUILDUI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E2910)
#define RPG_GAMECORE_OPENTRAINPARTYBUILDUI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E2920)
#define RPG_GAMECORE_OPENTRAINPARTYBUILDUI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E28E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTrainPartyBuildUI_TypeDefinitionIndex = 22357;

	class OpenTrainPartyBuildUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OpenDIYPage; // 0x18
		::System::Boolean OpenTaskPage; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 AreaID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYBUILDUI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTrainPartyBuildUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTrainPartyBuildUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYBUILDUI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenTrainPartyBuildUI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenTrainPartyBuildUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYBUILDUI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
