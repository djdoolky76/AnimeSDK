#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongPatrolType.h"
#include "unitysdk/System/Object.h"

#define GMKHIDJAGKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA838B0)

inline static constexpr unsigned int GMKHIDJAGKB_TypeDefinitionIndex = 42969;

	class GMKHIDJAGKB : public ::System::Object
	{
	public:
		::System::Int32 AAHCOCFCAJD; // 0x10
		::System::Int32 DEICFHOKPOB; // 0x14
		::System::UInt32 FEFGPOPNHDI; // 0x18
		::System::Single EMNHIJAIMBE; // 0x1C
		::RPG::GameCore::PingPongPatrolType GMPGDEINODK; // 0x20
		::System::Single KKHAELMENEH; // 0x24
		::System::Int32 HNLLIOJDOEL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKHIDJAGKB_CTOR_OFFSET))(this);
		}

	};
