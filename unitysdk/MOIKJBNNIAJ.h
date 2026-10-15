#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLOFEMFBAIN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
class BEGILENIHBD;
class GHMGGIHEHJE;

#define MOIKJBNNIAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA27A90)
#define MOIKJBNNIAJ_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0xBA279C0)
#define MOIKJBNNIAJ_PIIBJEBEELI_OFFSET UNITYSDK_OFFSET(0xBA27A30)

inline static constexpr unsigned int MOIKJBNNIAJ_TypeDefinitionIndex = 75825;

	class MOIKJBNNIAJ : public ::KLOFEMFBAIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIKJBNNIAJ_CTOR_OFFSET))(this);
		}

		::System::Boolean KLAJGAKAFCP(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + MOIKJBNNIAJ_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		::System::Void PIIBJEBEELI(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + MOIKJBNNIAJ_PIIBJEBEELI_OFFSET))(this, a1, a2, a3);
		}

	};
