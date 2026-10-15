#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLOFEMFBAIN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
class BEGILENIHBD;
class DHAGPJEEPCI;
class GHMGGIHEHJE;

#define HCMKAGKJGAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C293B0)
#define HCMKAGKJGAO_FCEOOLOJCLF_OFFSET UNITYSDK_OFFSET(0x15C29360)
#define HCMKAGKJGAO_IAHBAPCHDKB_OFFSET UNITYSDK_OFFSET(0x15C28F60)
#define HCMKAGKJGAO_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0x15C28760)
#define HCMKAGKJGAO_PIIBJEBEELI_OFFSET UNITYSDK_OFFSET(0x15C28A10)

	class HCMKAGKJGAO : public ::KLOFEMFBAIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCMKAGKJGAO_CTOR_OFFSET))(this);
		}

		::System::Boolean KLAJGAKAFCP(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + HCMKAGKJGAO_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		::System::Void PIIBJEBEELI(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + HCMKAGKJGAO_PIIBJEBEELI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAHBAPCHDKB(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + HCMKAGKJGAO_IAHBAPCHDKB_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void FCEOOLOJCLF(::GHMGGIHEHJE* a1, ::GHMGGIHEHJE* a2, ::DHAGPJEEPCI* a3)
		{
			return ((::System::Void(*)(::GHMGGIHEHJE*, ::GHMGGIHEHJE*, ::DHAGPJEEPCI*))((::PBYTE)hIl2Cpp + HCMKAGKJGAO_FCEOOLOJCLF_OFFSET))(a1, a2, a3);
		}

	};
