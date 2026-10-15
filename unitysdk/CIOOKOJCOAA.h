#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/UIShowPhase.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

#define CIOOKOJCOAA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF90440)
#define CIOOKOJCOAA_GET_PHASE_OFFSET UNITYSDK_OFFSET(0xCF90420)
#define CIOOKOJCOAA_GPCOJFJFMIN_OFFSET UNITYSDK_OFFSET(0xCF903D0)
#define CIOOKOJCOAA_KMOLJNJGEPA_OFFSET UNITYSDK_OFFSET(0xCF90370)
#define CIOOKOJCOAA_LKFJFGPFEJJ_OFFSET UNITYSDK_OFFSET(0xCF90300)
#define CIOOKOJCOAA_SET_PHASE_OFFSET UNITYSDK_OFFSET(0xCF90430)

inline static constexpr unsigned int CIOOKOJCOAA_TypeDefinitionIndex = 81917;

	class CIOOKOJCOAA : public ::System::Object
	{
	public:
		::RPG::Client::B51Racing::UIShowPhase _Phase_k__BackingField; // 0x10
		::System::Boolean NANPDBPFLHM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOOKOJCOAA_CTOR_OFFSET))(this);
		}

		::System::ValueTuple LKFJFGPFEJJ(::System::Boolean a1)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIOOKOJCOAA_LKFJFGPFEJJ_OFFSET))(this, a1);
		}

		::System::Void KMOLJNJGEPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIOOKOJCOAA_KMOLJNJGEPA_OFFSET))(this, a1);
		}

		::System::Void GPCOJFJFMIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOOKOJCOAA_GPCOJFJFMIN_OFFSET))(this);
		}

		::RPG::Client::B51Racing::UIShowPhase get_Phase()
		{
			return ((::RPG::Client::B51Racing::UIShowPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOOKOJCOAA_GET_PHASE_OFFSET))(this);
		}

		::System::Void set_Phase(::RPG::Client::B51Racing::UIShowPhase a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::UIShowPhase))((::PBYTE)hIl2Cpp + CIOOKOJCOAA_SET_PHASE_OFFSET))(this, a1);
		}

	};
