#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KHDHPOKJFDP_CTOR_OFFSET UNITYSDK_OFFSET(0xB3FFB70)

	class KHDHPOKJFDP : public ::System::Object
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x10
		::System::String* CDEEHGCEOKN; // 0x18
		::System::Int32 NALMBOOCCIN; // 0x20
		::System::Boolean GNDCCBNILML; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::BattleScreenEffectType DLMINHHKKMK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHDHPOKJFDP_CTOR_OFFSET))(this);
		}

	};
