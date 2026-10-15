#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLOFEMFBAIN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
class BEGILENIHBD;
class GHMGGIHEHJE;
class HJJAAKKPEPP;

#define FOAGCPGPLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x158DF600)
#define FOAGCPGPLAE_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0x158DF030)
#define FOAGCPGPLAE_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x158DF130)
#define FOAGCPGPLAE_NBPPPCONKHI_OFFSET UNITYSDK_OFFSET(0x158DF290)
#define FOAGCPGPLAE_PIIBJEBEELI_OFFSET UNITYSDK_OFFSET(0x158DF4E0)

	class FOAGCPGPLAE : public ::KLOFEMFBAIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAGCPGPLAE_CTOR_OFFSET))(this);
		}

		::System::Boolean KLAJGAKAFCP(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + FOAGCPGPLAE_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		::System::Void LJBCDJNNBJH(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + FOAGCPGPLAE_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean NBPPPCONKHI(::GHMGGIHEHJE* a1, ::HJJAAKKPEPP* a2)
		{
			return ((::System::Boolean(*)(::GHMGGIHEHJE*, ::HJJAAKKPEPP*))((::PBYTE)hIl2Cpp + FOAGCPGPLAE_NBPPPCONKHI_OFFSET))(a1, a2);
		}

		::System::Void PIIBJEBEELI(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + FOAGCPGPLAE_PIIBJEBEELI_OFFSET))(this, a1, a2, a3);
		}

	};
