#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirPlaneType.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LAGGEDEGKOB_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xB5E0400)
#define LAGGEDEGKOB_CEBOFENBLNN_OFFSET UNITYSDK_OFFSET(0xB5E0840)
#define LAGGEDEGKOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E0DD0)
#define LAGGEDEGKOB_MHGOKFKJGOP_OFFSET UNITYSDK_OFFSET(0xB5E0D80)

inline static constexpr unsigned int LAGGEDEGKOB_TypeDefinitionIndex = 77371;

	class LAGGEDEGKOB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGGEDEGKOB_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + LAGGEDEGKOB_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean CEBOFENBLNN(::IOGNBKGNPFD* a1, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType a2)
		{
			return ((::System::Boolean(*)(::IOGNBKGNPFD*, ::RPG::Client::LittleGame::PixAir::PixAirPlaneType))((::PBYTE)hIl2Cpp + LAGGEDEGKOB_CEBOFENBLNN_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LittleGame::PixAir::PixAirPlaneType MHGOKFKJGOP(::RPG::Client::LittleGame::PixAir::PixAirPlaneType a1)
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneType(*)(::RPG::Client::LittleGame::PixAir::PixAirPlaneType))((::PBYTE)hIl2Cpp + LAGGEDEGKOB_MHGOKFKJGOP_OFFSET))(a1);
		}

	};
