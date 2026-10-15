#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLOFEMFBAIN.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EEngineState.h"
class BEGILENIHBD;
class GHMGGIHEHJE;

#define AAMGGHNKJNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB0D0080)
#define AAMGGHNKJNP_KLAJGAKAFCP_OFFSET UNITYSDK_OFFSET(0xB0CFE70)
#define AAMGGHNKJNP_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB0CFEE0)
#define AAMGGHNKJNP_PIIBJEBEELI_OFFSET UNITYSDK_OFFSET(0xB0CFFE0)

inline static constexpr unsigned int AAMGGHNKJNP_TypeDefinitionIndex = 75836;

	class AAMGGHNKJNP : public ::KLOFEMFBAIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMGGHNKJNP_CTOR_OFFSET))(this);
		}

		::System::Boolean KLAJGAKAFCP(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + AAMGGHNKJNP_KLAJGAKAFCP_OFFSET))(this, a1, a2);
		}

		::System::Void LJBCDJNNBJH(::GHMGGIHEHJE* a1, ::BEGILENIHBD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + AAMGGHNKJNP_LJBCDJNNBJH_OFFSET))(this, a1, a2);
		}

		::System::Void PIIBJEBEELI(::GHMGGIHEHJE* a1, ::RPG::Client::LittleGame::RoadRash::EEngineState a2, ::BEGILENIHBD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::RoadRash::EEngineState, ::BEGILENIHBD*))((::PBYTE)hIl2Cpp + AAMGGHNKJNP_PIIBJEBEELI_OFFSET))(this, a1, a2, a3);
		}

	};
