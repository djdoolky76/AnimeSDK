#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }

#define NLMOEHJDJKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4331A0)

inline static constexpr unsigned int NLMOEHJDJKN_TypeDefinitionIndex = 58213;

	class NLMOEHJDJKN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JPBIPLGPMFO; // 0x10
		::System::Single BJOCBPFKJDP; // 0x18
		::System::Int32 PHFMCACHFIJ; // 0x1C
		::RPG::GameCore::FollowSideType EGHDMDEJICM; // 0x20
		::System::Single CONJAMJKHBI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMOEHJDJKN_CTOR_OFFSET))(this);
		}

	};
