#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SerialBellsNoteConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SERIALBELLSNOTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8CF50)
#define RPG_GAMECORE_SERIALBELLSNOTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8CDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SerialBellsNoteConfig_TypeDefinitionIndex = 16380;

	class SerialBellsNoteConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 ControllerNote; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* EffectAttachPoint; // 0x18
		::System::Boolean IsEffectOnSide; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERIALBELLSNOTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SerialBellsNoteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SerialBellsNoteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERIALBELLSNOTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
