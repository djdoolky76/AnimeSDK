#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAlertType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define EIIJNHOOCOM_CTOR_OFFSET UNITYSDK_OFFSET(0x154CCE60)

inline static constexpr unsigned int EIIJNHOOCOM_TypeDefinitionIndex = 73289;

	class EIIJNHOOCOM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
		::System::String* OEDECKGEFEO; // 0x18
		::System::String* PDJGEJNENIH; // 0x20
		::System::String* ADMPOKJGIBH; // 0x28
		::RPG::GameCore::BattleAlertType HNBJHDBMMNN; // 0x30
		::System::Boolean GNDCCBNILML; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIIJNHOOCOM_CTOR_OFFSET))(this);
		}

	};
