#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueBlackboardResultHandleTime.h"
#include "unitysdk/System/Attribute.h"

#define PBLOLDMAMOD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFED690)
#define PBLOLDMAMOD_GET_HANDLETIME_OFFSET UNITYSDK_OFFSET(0xBFED6A0)

inline static constexpr unsigned int PBLOLDMAMOD_TypeDefinitionIndex = 67127;

	class PBLOLDMAMOD : public ::System::Attribute
	{
	public:
		::RPG::Client::RogueBlackboardResultHandleTime _HandleTime_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::RogueBlackboardResultHandleTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBlackboardResultHandleTime))((::PBYTE)hIl2Cpp + PBLOLDMAMOD_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::RogueBlackboardResultHandleTime get_HandleTime()
		{
			return ((::RPG::Client::RogueBlackboardResultHandleTime(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLOLDMAMOD_GET_HANDLETIME_OFFSET))(this);
		}

	};
