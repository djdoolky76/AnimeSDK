#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class PGJINBJDAHN;
namespace RPG::GameCore { class AdventureModifierInitParams; }

#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CCTOR_OFFSET UNITYSDK_OFFSET(0xEFED320)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CLONE_OFFSET UNITYSDK_OFFSET(0xEFED070)
#define RPG_GAMECORE_ADVENTUREMODIFIERINITPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xEFED310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureModifierInitParams_TypeDefinitionIndex = 55578;

	class AdventureModifierInitParams : public ::System::Object
	{
	public:
		::PGJINBJDAHN* BaseInitParams; // 0x10
		::System::Nullable_1<::System::Single> OverrideLifeTime; // 0x18
		::System::Boolean IsServerSync; // 0x20
		::System::Boolean IsBuffCreate; // 0x21
		::System::Boolean IsClientOnly; // 0x22
		::System::Byte _padding0[0x1];
		::System::UInt32 SkillSeqID; // 0x24
		::System::UInt32 InitLvl; // 0x28
		static ::RPG::GameCore::AdventureModifierInitParams** StaticGet_s_Empty()
		{
			return (::RPG::GameCore::AdventureModifierInitParams**)UnitySDK::FromName("RPG.GameCore", "AdventureModifierInitParams")->GetStaticField(0x5EAB0);
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
