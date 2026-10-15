#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/WaitLevelGraphFinishMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitLevelGraphFinish; }

#define RPG_GAMECORE_WAITLEVELGRAPHFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6D3B0)
#define RPG_GAMECORE_WAITLEVELGRAPHFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC6D3C0)
#define RPG_GAMECORE_WAITLEVELGRAPHFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6D380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitLevelGraphFinish_TypeDefinitionIndex = 23393;

	class WaitLevelGraphFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::WaitLevelGraphFinishMode WaitMode; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELGRAPHFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitLevelGraphFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitLevelGraphFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELGRAPHFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitLevelGraphFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitLevelGraphFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITLEVELGRAPHFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
