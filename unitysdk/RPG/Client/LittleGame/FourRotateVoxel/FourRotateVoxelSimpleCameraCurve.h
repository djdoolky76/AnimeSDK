#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSIMPLECAMERACURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD46CA50)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSIMPLECAMERACURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD46C6F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSIMPLECAMERACURVE_JMFPPJIMHEC_OFFSET UNITYSDK_OFFSET(0xD46C800)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSIMPLECAMERACURVE_RESETBYINITIALCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD46C550)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelSimpleCameraCurve_TypeDefinitionIndex = 76849;

	class FourRotateVoxelSimpleCameraCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single Height; // 0x78
		::System::Single Radius; // 0x7C
		::System::Single CircleTimes; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSIMPLECAMERACURVE_CTOR_OFFSET))(this);
		}

		::System::Void ResetByInitialCameraPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSIMPLECAMERACURVE_RESETBYINITIALCAMERAPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSIMPLECAMERACURVE_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}

		::System::Void JMFPPJIMHEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELSIMPLECAMERACURVE_JMFPPJIMHEC_OFFSET))(this, a1);
		}

	};
}
