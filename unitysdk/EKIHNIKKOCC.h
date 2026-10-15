#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLOFEMFBAIN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
class BEGILENIHBD;
class GHMGGIHEHJE;

#define EKIHNIKKOCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15506480)
#define EKIHNIKKOCC_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0x155061B0)
#define EKIHNIKKOCC_PIIBJEBEELI_OFFSET UNITYSDK_OFFSET(0x155062F0)

inline static constexpr unsigned int EKIHNIKKOCC_TypeDefinitionIndex = 75820;

	class EKIHNIKKOCC : public ::KLOFEMFBAIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKIHNIKKOCC_CTOR_OFFSET))(this);
		}

		::System::Boolean KLAJGAKAFCP(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + EKIHNIKKOCC_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		::System::Void PIIBJEBEELI(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + EKIHNIKKOCC_PIIBJEBEELI_OFFSET))(this, a1, a2, a3);
		}

	};
