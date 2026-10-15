#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOOIPIPFCDB.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class HFCPGANBGMI;

#define EPJOIJOOCBI_CTOR_OFFSET UNITYSDK_OFFSET(0x155CA590)
#define EPJOIJOOCBI_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x155CA580)
#define EPJOIJOOCBI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x155CA4E0)

inline static constexpr unsigned int EPJOIJOOCBI_TypeDefinitionIndex = 76981;

	class EPJOIJOOCBI : public ::OOOIPIPFCDB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOIJOOCBI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + EPJOIJOOCBI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJOIJOOCBI_EPPAFNJFCMH_OFFSET))(this);
		}

	};
