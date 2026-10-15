#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NMKFGFCKBBP_CTOR_OFFSET UNITYSDK_OFFSET(0xD45C9E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NMKFGFCKBBP_JIJKMMBKIEM_OFFSET UNITYSDK_OFFSET(0xD45BAD0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_NMKFGFCKBBP_TypeDefinitionIndex = 76840;

	class FourRotateVoxelGameStartCurve_NMKFGFCKBBP : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x10
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x18
		::System::Boolean FOMPLCNPOJF; // 0x24
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 OAKCBDDKNKL; // 0x28
		::System::Single DJCLLOAGJEE; // 0x34
		::System::Single CNOELHGCKJJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NMKFGFCKBBP_CTOR_OFFSET))(this);
		}

		::System::Boolean JIJKMMBKIEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NMKFGFCKBBP_JIJKMMBKIEM_OFFSET))(this);
		}

	};
}
