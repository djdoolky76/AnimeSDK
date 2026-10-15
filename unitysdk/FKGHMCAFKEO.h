#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define FKGHMCAFKEO_CTOR_OFFSET UNITYSDK_OFFSET(0x157F3900)

	class FKGHMCAFKEO : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKGHMCAFKEO_CTOR_OFFSET))(this);
		}

	};
