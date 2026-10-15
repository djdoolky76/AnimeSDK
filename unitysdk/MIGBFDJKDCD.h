#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

#define MIGBFDJKDCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB953960)

	class MIGBFDJKDCD : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFDJKDCD_CTOR_OFFSET))(this);
		}

	};
