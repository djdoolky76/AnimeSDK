#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAEFBCNPANK.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define GMKNOKBHPAN_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x16C81B20)
#define GMKNOKBHPAN_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x16C81D50)
#define GMKNOKBHPAN_CEIGHKFGAKL_OFFSET UNITYSDK_OFFSET(0x16C81CC0)
#define GMKNOKBHPAN_CTOR_OFFSET UNITYSDK_OFFSET(0x16C81DA0)
#define GMKNOKBHPAN_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x16C81C00)
#define GMKNOKBHPAN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16C81A40)

inline static constexpr unsigned int GMKNOKBHPAN_TypeDefinitionIndex = 79362;

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
