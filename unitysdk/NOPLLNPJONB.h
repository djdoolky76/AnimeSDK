#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/System/Object.h"
class KNLPEPPOIHE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define NOPLLNPJONB_BHEFAIAKGAI_OFFSET UNITYSDK_OFFSET(0xBCF9900)
#define NOPLLNPJONB_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF9800)
#define NOPLLNPJONB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCF98B0)
#define NOPLLNPJONB_GET_SUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xBCF9990)
#define NOPLLNPJONB_GET_UPPERGROUPMAP_OFFSET UNITYSDK_OFFSET(0xBCF9970)
#define NOPLLNPJONB_SET_SUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xBCF99A0)
#define NOPLLNPJONB_SET_UPPERGROUPMAP_OFFSET UNITYSDK_OFFSET(0xBCF9980)

	class NOPLLNPJONB : public ::System::Object
	{
	public:
		::KNLPEPPOIHE* _UpperGroupMap_k__BackingField; // 0x10
		::RPG::GameCore::ActivitySubModeType _SubModeType_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + NOPLLNPJONB_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPLLNPJONB_DISPOSE_OFFSET))(this);
		}

		::System::Void BHEFAIAKGAI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NOPLLNPJONB_BHEFAIAKGAI_OFFSET))(this, a1);
		}

		::KNLPEPPOIHE* get_UpperGroupMap()
		{
			return ((::KNLPEPPOIHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPLLNPJONB_GET_UPPERGROUPMAP_OFFSET))(this);
		}

		::System::Void set_UpperGroupMap(::KNLPEPPOIHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNLPEPPOIHE*))((::PBYTE)hIl2Cpp + NOPLLNPJONB_SET_UPPERGROUPMAP_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivitySubModeType get_SubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPLLNPJONB_GET_SUBMODETYPE_OFFSET))(this);
		}

		::System::Void set_SubModeType(::RPG::GameCore::ActivitySubModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivitySubModeType))((::PBYTE)hIl2Cpp + NOPLLNPJONB_SET_SUBMODETYPE_OFFSET))(this, a1);
		}

	};
