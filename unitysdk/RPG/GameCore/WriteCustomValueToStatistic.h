#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class WriteCustomValueToStatistic; }
namespace System { class String; }

#define RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC80670)
#define RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC80680)
#define RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC80640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WriteCustomValueToStatistic_TypeDefinitionIndex = 23658;

	class WriteCustomValueToStatistic : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CustomKey; // 0x18
		::RPG::GameCore::DynamicFloat* CustomValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WriteCustomValueToStatistic* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WriteCustomValueToStatistic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WriteCustomValueToStatistic* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WriteCustomValueToStatistic*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITECUSTOMVALUETOSTATISTIC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
