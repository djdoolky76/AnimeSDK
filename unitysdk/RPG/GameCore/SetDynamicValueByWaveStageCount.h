#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByWaveStageCount; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAD180)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAAD300)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAAD190)
#define RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAAD150)

namespace RPG::GameCore
{
	class SetDynamicValueByWaveStageCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* WriteToKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByWaveStageCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByWaveStageCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByWaveStageCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByWaveStageCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYWAVESTAGECOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
