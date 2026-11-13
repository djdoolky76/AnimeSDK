#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HBNBHDNEEEH;

#define HBNBHDNEEEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DE2E0)
#define HBNBHDNEEEH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9DE0A0)

inline static constexpr unsigned int HBNBHDNEEEH_TypeDefinitionIndex = 11370;

	class HBNBHDNEEEH : public ::System::Object
	{
	public:
		::RPG::Client::TextID OENAMINOLLF; // 0x10
		::System::UInt32 LCBCODGENJD; // 0x20
		::System::UInt32 FIGEGOBFPIF; // 0x24
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::UInt32 IBLFDGEHJBK; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNBHDNEEEH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HBNBHDNEEEH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HBNBHDNEEEH*))((::PBYTE)hIl2Cpp + HBNBHDNEEEH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
