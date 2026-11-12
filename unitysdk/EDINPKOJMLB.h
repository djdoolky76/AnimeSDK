#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"

#define EDINPKOJMLB_CTOR_OFFSET UNITYSDK_OFFSET(0x140DE100)

inline static constexpr unsigned int EDINPKOJMLB_TypeDefinitionIndex = 76168;

	class EDINPKOJMLB
	{
	public:
		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLightEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLightEnum))((::PBYTE)hIl2Cpp + EDINPKOJMLB_CTOR_OFFSET))(this, a1);
		}

	};
