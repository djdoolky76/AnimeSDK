#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLOFEMFBAIN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
class BEGILENIHBD;
class GHMGGIHEHJE;

#define HOFKNJFDOPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA6C30)
#define HOFKNJFDOPM_HNIJHHGGOCJ_OFFSET UNITYSDK_OFFSET(0x15DA62D0)
#define HOFKNJFDOPM_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0x15DA6250)
#define HOFKNJFDOPM_PIIBJEBEELI_OFFSET UNITYSDK_OFFSET(0x15DA68A0)

inline static constexpr unsigned int HOFKNJFDOPM_TypeDefinitionIndex = 75830;

	class HOFKNJFDOPM : public ::KLOFEMFBAIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOFKNJFDOPM_CTOR_OFFSET))(this);
		}

		::System::Boolean KLAJGAKAFCP(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + HOFKNJFDOPM_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		static ::System::Void HNIJHHGGOCJ(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + HOFKNJFDOPM_HNIJHHGGOCJ_OFFSET))(a1);
		}

		::System::Void PIIBJEBEELI(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + HOFKNJFDOPM_PIIBJEBEELI_OFFSET))(this, a1, a2, a3);
		}

	};
