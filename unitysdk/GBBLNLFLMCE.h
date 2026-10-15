#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define GBBLNLFLMCE_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0x1594A160)
#define GBBLNLFLMCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1594AA70)
#define GBBLNLFLMCE_GBCADBOJDPF_OFFSET UNITYSDK_OFFSET(0x1594A6B0)

inline static constexpr unsigned int GBBLNLFLMCE_TypeDefinitionIndex = 77377;

	class GBBLNLFLMCE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBLNLFLMCE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + GBBLNLFLMCE_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::PixAir::PixAirPlaneType GBCADBOJDPF(::IOGNBKGNPFD* a1)
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneType(*)(::PVOID, ::IOGNBKGNPFD*))((::PBYTE)hIl2Cpp + GBBLNLFLMCE_GBCADBOJDPF_OFFSET))(this, a1);
		}

	};
