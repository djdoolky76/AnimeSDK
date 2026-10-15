#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SettingDisplayModeRow; }
namespace System { class String; }

#define RPG_GAMECORE_SETTINGDISPLAYMODEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9DA20)
#define RPG_GAMECORE_SETTINGDISPLAYMODEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA9CFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SettingDisplayModeRow_TypeDefinitionIndex = 15093;

	class SettingDisplayModeRow : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::RPG::Client::TextID ShowString; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SettingDisplayModeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SettingDisplayModeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTINGDISPLAYMODEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
