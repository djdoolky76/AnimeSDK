#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class NBFCOGKMDGA;

#define HEHGNAHJINL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA90BB0)

inline static constexpr unsigned int HEHGNAHJINL_TypeDefinitionIndex = 41958;

	class HEHGNAHJINL : public ::System::Object
	{
	public:
		::NBFCOGKMDGA* PGNMKHOKHIO; // 0x10
		::RPG::GameCore::ChimeraDuelTeamType JCDIEKGKCPP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEHGNAHJINL_CTOR_OFFSET))(this);
		}

	};
