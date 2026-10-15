#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetMainLightOffsetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetMainLightOffset; }
namespace System { class String; }

#define RPG_GAMECORE_SETMAINLIGHTOFFSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8F10)
#define RPG_GAMECORE_SETMAINLIGHTOFFSET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB8F20)
#define RPG_GAMECORE_SETMAINLIGHTOFFSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB8EE0)

namespace RPG::GameCore
{
	class SetMainLightOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::SetMainLightOffsetType SetType; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* TargetVal; // 0x20
		::System::String* PresetName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAINLIGHTOFFSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMainLightOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMainLightOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAINLIGHTOFFSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetMainLightOffset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetMainLightOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMAINLIGHTOFFSET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
