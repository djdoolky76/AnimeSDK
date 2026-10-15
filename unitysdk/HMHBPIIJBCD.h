#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateRinSwitchDayTalker.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HMHBPIIJBCD;

#define HMHBPIIJBCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC5D20)
#define HMHBPIIJBCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEC5B20)

inline static constexpr unsigned int HMHBPIIJBCD_TypeDefinitionIndex = 11583;

	class HMHBPIIJBCD : public ::System::Object
	{
	public:
		::RPG::Client::TextID IBGNNBCPHFO; // 0x10
		::System::UInt32 GNIFLCBGAAA; // 0x20
		::System::UInt32 EOAGGGKKHLN; // 0x24
		::RPG::GameCore::FateRinSwitchDayTalker PFNEMONCJFE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMHBPIIJBCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HMHBPIIJBCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HMHBPIIJBCD*))((::PBYTE)hIl2Cpp + HMHBPIIJBCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
