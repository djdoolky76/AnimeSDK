#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class DEIMJPPODHL;
class FCOEMCEDLNL;

#define DEIMJPPODHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE46C0)
#define DEIMJPPODHL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCE4460)

inline static constexpr unsigned int DEIMJPPODHL_TypeDefinitionIndex = 11542;

	class DEIMJPPODHL : public ::System::Object
	{
	public:
		::RPG::Client::TextID OENAMINOLLF; // 0x10
		::RPG::Client::TextID NMAHGFAPENI; // 0x20
		::System::Boolean NKEJALOLCIF; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 PHFMCACHFIJ; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIMJPPODHL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DEIMJPPODHL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DEIMJPPODHL*))((::PBYTE)hIl2Cpp + DEIMJPPODHL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
