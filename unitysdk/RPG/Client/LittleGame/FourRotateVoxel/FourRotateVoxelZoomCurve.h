#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDBFDD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_JMFPPJIMHEC_OFFSET UNITYSDK_OFFSET(0x1CDBFC60)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_LHFANFKFCIF_OFFSET UNITYSDK_OFFSET(0x1CDBFB50)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_OBHAJMPIOIM_OFFSET UNITYSDK_OFFSET(0x1CDBFD20)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelZoomCurve_TypeDefinitionIndex = 79183;

	class FourRotateVoxelZoomCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single ZoomStartTime; // 0x78
		::System::Single RevertAllRotationDuration; // 0x7C
		::System::Int32 RevertAllRotateTimes; // 0x80
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* RevertAllRotateSpeed; // 0x88
		::System::Single CFKGKLEPEAJ; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_CTOR_OFFSET))(this);
		}

		::System::Void LHFANFKFCIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_LHFANFKFCIF_OFFSET))(this);
		}

		::System::Void JMFPPJIMHEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_JMFPPJIMHEC_OFFSET))(this, a1);
		}

		::System::Void OBHAJMPIOIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELZOOMCURVE_OBHAJMPIOIM_OFFSET))(this);
		}

	};
}
