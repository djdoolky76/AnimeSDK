#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IPJNOKFHMHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B7730)
#define IPJNOKFHMHD_GOHDAEMDKKA_OFFSET UNITYSDK_OFFSET(0x1C6B7780)
#define IPJNOKFHMHD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6B7740)
#define IPJNOKFHMHD_JAFKLIEFNFJ_OFFSET UNITYSDK_OFFSET(0x1C6B7830)

inline static constexpr unsigned int IPJNOKFHMHD_TypeDefinitionIndex = 36857;

	class IPJNOKFHMHD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJNOKFHMHD_CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPJNOKFHMHD_INITIALIZE_OFFSET))(this);
		}

		::System::Void GOHDAEMDKKA(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + IPJNOKFHMHD_GOHDAEMDKKA_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void JAFKLIEFNFJ(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + IPJNOKFHMHD_JAFKLIEFNFJ_OFFSET))(a1, a2, a3);
		}

	};
