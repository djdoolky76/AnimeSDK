#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IAEOCKOHIMH;
class LOHPBEPDLOG;
namespace MoleMole::Config { class CutScenePerformConfig; }

#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19B225F0)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__0_OFFSET UNITYSDK_OFFSET(0x19B22600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CutScenePerformConfig___c__DisplayClass12_0_TypeDefinitionIndex = 57621;

	class CutScenePerformConfig___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::IAEOCKOHIMH* node; // 0x10
		::MoleMole::Config::CutScenePerformConfig* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _MoleMole_Config_IScenePerformConfig_Setup_b__0(::LOHPBEPDLOG* task)
		{
			return ((::System::Void(*)(::PVOID, ::LOHPBEPDLOG*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG___C__DISPLAYCLASS12_0__MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_B__0_OFFSET))(this, task);
		}
	};
}
