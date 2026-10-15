#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLOFEMFBAIN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
class BEGILENIHBD;
class GHMGGIHEHJE;

#define JAGOGCIGFEN_CTOR_OFFSET UNITYSDK_OFFSET(0x16545E50)
#define JAGOGCIGFEN_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0x165454D0)
#define JAGOGCIGFEN_PIIBJEBEELI_OFFSET UNITYSDK_OFFSET(0x16545AD0)

inline static constexpr unsigned int JAGOGCIGFEN_TypeDefinitionIndex = 75828;

	class JAGOGCIGFEN : public ::KLOFEMFBAIN
	{
	public:
		// static const ::System::String* CMGDKCGEEKM; // 0x0
		// static const ::System::String* BEELEALPGBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAGOGCIGFEN_CTOR_OFFSET))(this);
		}

		::System::Boolean KLAJGAKAFCP(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + JAGOGCIGFEN_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		::System::Void PIIBJEBEELI(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + JAGOGCIGFEN_PIIBJEBEELI_OFFSET))(this, a1, a2, a3);
		}

	};
