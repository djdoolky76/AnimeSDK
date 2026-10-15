#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/System/Object.h"
class JBNOMIECJDO;

#define MFFEPDFGNNN_ADAMOADIAPO_OFFSET UNITYSDK_OFFSET(0xB8F1870)
#define MFFEPDFGNNN_DCJLBCPAKJF_OFFSET UNITYSDK_OFFSET(0xB8F17D0)
#define MFFEPDFGNNN_JHBCCLOFBEN_OFFSET UNITYSDK_OFFSET(0xB8F1660)
#define MFFEPDFGNNN_LJNFLLLICCN_OFFSET UNITYSDK_OFFSET(0xB8F1700)

inline static constexpr unsigned int MFFEPDFGNNN_TypeDefinitionIndex = 81206;

	class MFFEPDFGNNN : public ::System::Object
	{
	public:
		static ::RPG::GameCore::FateRinCardCasterSource JHBCCLOFBEN(::JBNOMIECJDO* a1)
		{
			return ((::RPG::GameCore::FateRinCardCasterSource(*)(::JBNOMIECJDO*))((::PBYTE)hIl2Cpp + MFFEPDFGNNN_JHBCCLOFBEN_OFFSET))(a1);
		}

		static ::System::Boolean LJNFLLLICCN(::JBNOMIECJDO* a1)
		{
			return ((::System::Boolean(*)(::JBNOMIECJDO*))((::PBYTE)hIl2Cpp + MFFEPDFGNNN_LJNFLLLICCN_OFFSET))(a1);
		}

		static ::System::Boolean DCJLBCPAKJF(::JBNOMIECJDO* a1)
		{
			return ((::System::Boolean(*)(::JBNOMIECJDO*))((::PBYTE)hIl2Cpp + MFFEPDFGNNN_DCJLBCPAKJF_OFFSET))(a1);
		}

		static ::System::Boolean ADAMOADIAPO(::JBNOMIECJDO* a1)
		{
			return ((::System::Boolean(*)(::JBNOMIECJDO*))((::PBYTE)hIl2Cpp + MFFEPDFGNNN_ADAMOADIAPO_OFFSET))(a1);
		}

	};
