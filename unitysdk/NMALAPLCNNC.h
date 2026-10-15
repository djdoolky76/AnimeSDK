#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKBNJLNBCL.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"

#define NMALAPLCNNC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC7C0C0)
#define NMALAPLCNNC_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xBC7C0B0)

inline static constexpr unsigned int NMALAPLCNNC_TypeDefinitionIndex = 76986;

	class NMALAPLCNNC : public ::JHKBNJLNBCL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMALAPLCNNC_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + NMALAPLCNNC_EPPAFNJFCMH_OFFSET))(this);
		}

	};
