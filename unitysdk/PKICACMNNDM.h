#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraFollowClampMask.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/RPG/GameCore/FiveDimLevelCameraType.h"

inline static constexpr unsigned int PKICACMNNDM_TypeDefinitionIndex = 43253;

	struct alignas(4) PKICACMNNDM
	{
		::RPG::GameCore::FiveDimCameraPriority NALMBOOCCIN; // 0x10
		::RPG::GameCore::FiveDimLevelCameraType GMPGDEINODK; // 0x14
		::System::Boolean GCOOJNILOLE; // 0x18
		::System::Boolean AHCNJMENLDO; // 0x19
		::System::Boolean PLFDMBNBPCD; // 0x1A
		::System::Boolean EOLHPCCGJMB; // 0x1B
		::System::Boolean CLDELANGKJL; // 0x1C
		::System::Boolean HDNJJMBEOCN; // 0x1D
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FiveDimCameraFollowClampMask CDDBBKBOKIB; // 0x20
		::System::Single NOBLNMCNIDD; // 0x24
	};
