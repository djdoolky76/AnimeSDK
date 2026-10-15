#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_OverrideVision; }
namespace RPG::GameCore { class VisionBaseConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA85B80)
#define RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA85B90)
#define RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA85B50)

namespace RPG::GameCore
{
	class ST_Side_OverrideVision : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* VisionSetName; // 0x18
		::Il2CppArray<::RPG::GameCore::VisionBaseConfig*>* Visions; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_OverrideVision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_OverrideVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_OverrideVision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_OverrideVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_OVERRIDEVISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
