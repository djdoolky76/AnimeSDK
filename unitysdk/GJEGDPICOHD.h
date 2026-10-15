#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"

#define GJEGDPICOHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAAFF40)
#define GJEGDPICOHD_DNFOCJCHJDP_OFFSET UNITYSDK_OFFSET(0x1CAAFF30)
#define GJEGDPICOHD_MLMOCBBEOIM_OFFSET UNITYSDK_OFFSET(0x1CAAFF20)

inline static constexpr unsigned int GJEGDPICOHD_TypeDefinitionIndex = 41962;

	class GJEGDPICOHD : public ::System::Object
	{
	public:
		::System::Int32 BEAHMFJLNCG; // 0x10
		::RPG::GameCore::ChimeraDuelTeamType JCDIEKGKCPP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEGDPICOHD_CTOR_OFFSET))(this);
		}

		::System::Int32 MLMOCBBEOIM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJEGDPICOHD_MLMOCBBEOIM_OFFSET))(this);
		}

		::System::Void DNFOCJCHJDP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GJEGDPICOHD_DNFOCJCHJDP_OFFSET))(this, a1);
		}

	};
