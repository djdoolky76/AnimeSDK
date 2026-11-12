#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define BEGMNKOKFGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D2C70)

inline static constexpr unsigned int BEGMNKOKFGK_TypeDefinitionIndex = 75702;

	class BEGMNKOKFGK : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGMNKOKFGK_CTOR_OFFSET))(this);
		}

	};
