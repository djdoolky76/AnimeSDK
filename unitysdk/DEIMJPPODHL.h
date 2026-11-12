#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DEIMJPPODHL;
class FCOEMCEDLNL;

#define DEIMJPPODHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDDEC0)
#define DEIMJPPODHL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DEDDC60)

inline static constexpr unsigned int DEIMJPPODHL_TypeDefinitionIndex = 11593;

	class DEIMJPPODHL : public ::System::Object
	{
	public:
		::RPG::Client::TextID OENAMINOLLF; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Boolean NKEJALOLCIF; // 0x24
		::System::Byte _padding0[0x3];
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
