#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DEIMJPPODHL;
class FCOEMCEDLNL;

#define DEIMJPPODHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD12840)
#define DEIMJPPODHL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD125E0)

	class DEIMJPPODHL : public ::System::Object
	{
	public:
		::System::Boolean NKEJALOLCIF; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 PHFMCACHFIJ; // 0x14
		::RPG::Client::TextID OENAMINOLLF; // 0x18
		::RPG::Client::TextID NMAHGFAPENI; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIMJPPODHL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DEIMJPPODHL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DEIMJPPODHL*))((::PBYTE)hIl2Cpp + DEIMJPPODHL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
