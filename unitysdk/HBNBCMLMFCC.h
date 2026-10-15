#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLOFEMFBAIN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
class BEGILENIHBD;
class GHMGGIHEHJE;

#define HBNBCMLMFCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C11540)
#define HBNBCMLMFCC_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0x15C11470)
#define HBNBCMLMFCC_PIIBJEBEELI_OFFSET UNITYSDK_OFFSET(0x15C114E0)

	class HBNBCMLMFCC : public ::KLOFEMFBAIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBNBCMLMFCC_CTOR_OFFSET))(this);
		}

		::System::Boolean KLAJGAKAFCP(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + HBNBCMLMFCC_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		::System::Void PIIBJEBEELI(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + HBNBCMLMFCC_PIIBJEBEELI_OFFSET))(this, a1, a2, a3);
		}

	};
