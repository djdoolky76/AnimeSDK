#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CommonActivityLightConeRewardData; }
namespace RPG::Client { class CommonActivityLightConeRewardGroup; }
namespace RPG::GameCore { class PlanetFesOpticalRow; }

#define LNCDGEMHKJA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB7D60E0)
#define LNCDGEMHKJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D6620)
#define LNCDGEMHKJA_NBBMINIOAIP_OFFSET UNITYSDK_OFFSET(0xB7D64F0)

inline static constexpr unsigned int LNCDGEMHKJA_TypeDefinitionIndex = 66604;

	class LNCDGEMHKJA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCDGEMHKJA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CommonActivityLightConeRewardData* BPLPBPMEODA()
		{
			return ((::RPG::Client::CommonActivityLightConeRewardData*(*)())((::PBYTE)hIl2Cpp + LNCDGEMHKJA_BPLPBPMEODA_OFFSET))();
		}

		static ::RPG::Client::CommonActivityLightConeRewardGroup* NBBMINIOAIP(::RPG::GameCore::PlanetFesOpticalRow* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::CommonActivityLightConeRewardGroup*(*)(::RPG::GameCore::PlanetFesOpticalRow*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNCDGEMHKJA_NBBMINIOAIP_OFFSET))(a1, a2);
		}

	};
