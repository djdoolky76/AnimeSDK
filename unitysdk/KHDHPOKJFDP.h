#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KHDHPOKJFDP_CTOR_OFFSET UNITYSDK_OFFSET(0xB3F9040)

inline static constexpr unsigned int KHDHPOKJFDP_TypeDefinitionIndex = 55608;

	class KHDHPOKJFDP : public ::System::Object
	{
	public:
		::System::String* CDEEHGCEOKN; // 0x10
		::System::String* GFNAPNFFGPJ; // 0x18
		::System::Int32 NALMBOOCCIN; // 0x20
		::RPG::GameCore::BattleScreenEffectType DLMINHHKKMK; // 0x24
		::System::Boolean GNDCCBNILML; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDHPOKJFDP_CTOR_OFFSET))(this);
		}

	};
