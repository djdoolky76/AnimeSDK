#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }

#define KPNBOEKLHBN___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BBFE0)
#define KPNBOEKLHBN___C__DISPLAYCLASS0_0__TRYTRACKINGNEXTMISSION_B__1_OFFSET UNITYSDK_OFFSET(0xB5BC340)

inline static constexpr unsigned int KPNBOEKLHBN___c__DisplayClass0_0_TypeDefinitionIndex = 66178;

	class KPNBOEKLHBN___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 maxWeight; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNBOEKLHBN___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryTrackingNextMission_b__1(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + KPNBOEKLHBN___C__DISPLAYCLASS0_0__TRYTRACKINGNEXTMISSION_B__1_OFFSET))(this, a1);
		}

	};
