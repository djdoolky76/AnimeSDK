#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGJINBJDAHN;
namespace RPG::GameCore { class AdventureModifierInitParams; }
namespace System { class Nullable; }

#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CCTOR_OFFSET UNITYSDK_OFFSET(0xE570C10)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CLONE_OFFSET UNITYSDK_OFFSET(0xE570B80)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xE549A20)

namespace RPG::GameCore
{
	class AdventureModifierInitParams : public ::System::Object
	{
	public:
		::PGJINBJDAHN* BaseInitParams; // 0x10
		::System::UInt32 SkillSeqID; // 0x18
		::System::Nullable* OverrideLifeTime; // 0x1C
		::System::Boolean IsClientOnly; // 0x24
		::System::Boolean IsBuffCreate; // 0x25
		::System::Boolean IsServerSync; // 0x26
		::System::Byte _padding0[0x1];
		::System::UInt32 InitLvl; // 0x28
		static ::RPG::GameCore::AdventureModifierInitParams** StaticGet_s_Empty()
		{
			return (::RPG::GameCore::AdventureModifierInitParams**)UnitySDK::FromName("RPG.GameCore", "AdventureModifierInitParams")->GetStaticField(0x56F80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CCTOR_OFFSET))();
		}

		::RPG::GameCore::AdventureModifierInitParams* Clone()
		{
			return ((::RPG::GameCore::AdventureModifierInitParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CLONE_OFFSET))(this);
		}

	};
}
