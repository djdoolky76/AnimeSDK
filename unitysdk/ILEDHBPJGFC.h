#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLHKIHBFB.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"

#define ILEDHBPJGFC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1649F0B0)
#define ILEDHBPJGFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1649F150)
#define ILEDHBPJGFC_GET_CLIENTNETMODE_OFFSET UNITYSDK_OFFSET(0x1649F130)
#define ILEDHBPJGFC_SET_CLIENTNETMODE_OFFSET UNITYSDK_OFFSET(0x1649F140)

inline static constexpr unsigned int ILEDHBPJGFC_TypeDefinitionIndex = 60568;

	class ILEDHBPJGFC : public ::IAJLHKIHBFB
	{
	public:
		::RPG::Client::LittleGameShare::LittleGameClientNetMode _ClientNetMode_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEDHBPJGFC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEDHBPJGFC_CLEAR_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::LittleGameClientNetMode get_ClientNetMode()
		{
			return ((::RPG::Client::LittleGameShare::LittleGameClientNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + ILEDHBPJGFC_GET_CLIENTNETMODE_OFFSET))(this);
		}

		::System::Void set_ClientNetMode(::RPG::Client::LittleGameShare::LittleGameClientNetMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + ILEDHBPJGFC_SET_CLIENTNETMODE_OFFSET))(this, a1);
		}

	};
