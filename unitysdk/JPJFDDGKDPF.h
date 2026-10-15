#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEIEKELFLHF.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define JPJFDDGKDPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C4D50)
#define JPJFDDGKDPF_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB2C4D40)

inline static constexpr unsigned int JPJFDDGKDPF_TypeDefinitionIndex = 76970;

	class JPJFDDGKDPF : public ::BEIEKELFLHF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJFDDGKDPF_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJFDDGKDPF_EPPAFNJFCMH_OFFSET))(this);
		}

	};
