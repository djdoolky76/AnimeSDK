#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define BEGMNKOKFGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1631B980)

	class BEGMNKOKFGK : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGMNKOKFGK_CTOR_OFFSET))(this);
		}

	};
