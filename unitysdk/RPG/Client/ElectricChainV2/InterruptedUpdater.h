#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ElectricChainV2/RandomUpdater.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD82A80)
#define RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_KEPMMNEBKCD_OFFSET UNITYSDK_OFFSET(0xCD828B0)
#define RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_LOICGIBKHMM_OFFSET UNITYSDK_OFFSET(0xCD82910)

namespace RPG::Client::ElectricChainV2
{
	inline static constexpr unsigned int InterruptedUpdater_TypeDefinitionIndex = 73588;

	class InterruptedUpdater : public ::RPG::Client::ElectricChainV2::RandomUpdater
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_CTOR_OFFSET))(this);
		}

		::System::Void KEPMMNEBKCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_KEPMMNEBKCD_OFFSET))(this);
		}

		::UnityEngine::Vector3 LOICGIBKHMM(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELECTRICCHAINV2_INTERRUPTEDUPDATER_LOICGIBKHMM_OFFSET))(this, a1);
		}

	};
}
