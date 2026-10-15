#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAEFBCNPANK.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define GMKNOKBHPAN_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x15AC9680)
#define GMKNOKBHPAN_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x15AC98B0)
#define GMKNOKBHPAN_CEIGHKFGAKL_OFFSET UNITYSDK_OFFSET(0x15AC9820)
#define GMKNOKBHPAN_CTOR_OFFSET UNITYSDK_OFFSET(0x15AC9900)
#define GMKNOKBHPAN_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x15AC9760)
#define GMKNOKBHPAN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15AC95A0)

inline static constexpr unsigned int GMKNOKBHPAN_TypeDefinitionIndex = 77028;

	class GMKNOKBHPAN : public ::GAEFBCNPANK
	{
	public:
		::System::Single FLHOEGBFPJB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKNOKBHPAN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + GMKNOKBHPAN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + GMKNOKBHPAN_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMKNOKBHPAN_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void CEIGHKFGAKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKNOKBHPAN_CEIGHKFGAKL_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + GMKNOKBHPAN_BPMGPFLHPLC_OFFSET))(this);
		}

	};
