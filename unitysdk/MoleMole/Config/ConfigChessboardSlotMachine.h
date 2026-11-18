#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x11E8BDD0)
#define MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E8BE90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardSlotMachine_TypeDefinitionIndex = 66610;

	class ConfigChessboardSlotMachine : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* EndPieceEffectPath; // 0x18
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x20
		::System::String* PieceEffectPath; // 0x28
		::System::Single PieceDurationMax; // 0x30
		::System::Int32 EndPieceAudioID; // 0x34
		::System::Single PieceDurationMin; // 0x38
		::System::Int32 PieceAudioID; // 0x3C
		::System::Single Range; // 0x40
		::System::Single RandomRange; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHESSBOARDSLOTMACHINE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
