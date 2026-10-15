#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"
class HCEHCIBALJO;
namespace RPG::Client { class PlanetFesFloatingController; }

#define HCEHCIBALJO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C18630)
#define HCEHCIBALJO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C18790)
#define HCEHCIBALJO_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15C186C0)
#define HCEHCIBALJO__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x15C187A0)

inline static constexpr unsigned int HCEHCIBALJO_TypeDefinitionIndex = 74470;

	class HCEHCIBALJO : public ::MFDDEJCPLON
	{
	public:
		::RPG::Client::PlanetFesFloatingController_ItemType LINLNNHIBAK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEHCIBALJO_CTOR_OFFSET))(this);
		}

		static ::HCEHCIBALJO* BPLPBPMEODA(::RPG::Client::PlanetFesFloatingController* a1, ::RPG::Client::PlanetFesFloatingController_ItemType a2)
		{
			return ((::HCEHCIBALJO*(*)(::RPG::Client::PlanetFesFloatingController*, ::RPG::Client::PlanetFesFloatingController_ItemType))((::PBYTE)hIl2Cpp + HCEHCIBALJO_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEHCIBALJO_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnExecute_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEHCIBALJO__ONEXECUTE_B__1_0_OFFSET))(this);
		}

	};
