#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11E947C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardSystem_TypeDefinitionIndex = 86534;

	class ConfigHollowChessboardSystem : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean EnableBottomHint; // 0x58
		::System::Byte _padding0[0x7];
		::System::String* EnableBottomHintTextmap; // 0x60
		::System::Boolean EnableFairyHint; // 0x68
		::System::Byte _padding1[0x3];
		::System::Int32 FairyID; // 0x6C
		::System::Boolean EnablePopDialogHint; // 0x70
		::System::Byte _padding2[0x7];
		::System::String* PopDialogTextmap; // 0x78
		::System::Single TriggerRttThreshold; // 0x80
		::System::Single HideRttThreshold; // 0x84
		::System::Single TriggerHintCD; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDSYSTEM__CTOR_OFFSET))(this);
		}
	};
}
