#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
namespace System { class String; }

#define FAJICBKHAOE_CTOR_OFFSET UNITYSDK_OFFSET(0x25920)

inline static constexpr unsigned int FAJICBKHAOE_TypeDefinitionIndex = 36945;

	struct alignas(8) FAJICBKHAOE
	{
		::RPG::Client::LittleGameShare::FightServerLogLevel DEBCCPPNIGH; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* LMODFJIHGCH; // 0x18
		::System::Void _ctor(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel))((::PBYTE)hIl2Cpp + FAJICBKHAOE_CTOR_OFFSET))(this, a1, a2);
		}

	};
