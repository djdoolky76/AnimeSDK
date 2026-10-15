#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLHCADMDJCE_HDNECLMEEKE;
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define NLHCADMDJCE_HDNECLMEEKE_CLEAR_OFFSET UNITYSDK_OFFSET(0xBC68110)
#define NLHCADMDJCE_HDNECLMEEKE_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBC68160)
#define NLHCADMDJCE_HDNECLMEEKE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC68210)

inline static constexpr unsigned int NLHCADMDJCE_HDNECLMEEKE_TypeDefinitionIndex = 59723;

	class NLHCADMDJCE_HDNECLMEEKE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* DBALOLNOLGL; // 0x18
		::System::String* ANHNKKIHIBL; // 0x20
		::System::String* PFJFIJDPKNF; // 0x28
		::System::Single MNAKIEOGPDK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_HDNECLMEEKE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHCADMDJCE_HDNECLMEEKE_CLEAR_OFFSET))(this);
		}

		::System::Int32 CompareTo(::NLHCADMDJCE_HDNECLMEEKE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NLHCADMDJCE_HDNECLMEEKE*))((::PBYTE)hIl2Cpp + NLHCADMDJCE_HDNECLMEEKE_COMPARETO_OFFSET))(this, a1);
		}

	};
