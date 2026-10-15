#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimWindowControllerComponentConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E2FE0)
#define RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E3010)
#define RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E2F90)

namespace RPG::GameCore
{
	class FiveDimWindowControllerComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::LittleGameDynamicVar* BindLevelVarName; // 0x10
		::System::UInt32 CameraID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* SlotBgPrefabPath; // 0x20
		::RPG::MVector2 WindowSize; // 0x28
		::System::Single WindowShakeAmplitude; // 0x30
		::System::Single WindowShakeFrequency; // 0x34
		::System::String* WindowAnimParamName; // 0x38
		::System::Int32 WindowAnimParamDefaultValue; // 0x40
		::System::Int32 WindowAnimParamHoveringValue; // 0x44
		::System::Int32 WindowAnimParamDraggingValue; // 0x48
		::System::Int32 WindowAnimParamTranslatingValue; // 0x4C
		::System::Int32 WindowAnimParamHintValue; // 0x50
		::System::Byte _padding1[0x4];
		::System::String* WindowAnimStartHintTrigger; // 0x58
		::Il2CppArray<::System::Int32>* WindowPermCodes; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimWindowControllerComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimWindowControllerComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimWindowControllerComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimWindowControllerComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMWINDOWCONTROLLERCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
