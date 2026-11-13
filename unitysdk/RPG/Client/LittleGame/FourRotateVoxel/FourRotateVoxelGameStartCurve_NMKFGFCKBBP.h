#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NMKFGFCKBBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB6410)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NMKFGFCKBBP_JIJKMMBKIEM_OFFSET UNITYSDK_OFFSET(0x1CDB5500)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_NMKFGFCKBBP_TypeDefinitionIndex = 79174;

	class FourRotateVoxelGameStartCurve_NMKFGFCKBBP : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x10
		::System::Single CNOELHGCKJJ; // 0x18
		::System::Boolean FOMPLCNPOJF; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single DJCLLOAGJEE; // 0x20
		::UnityEngine::Vector3 OAKCBDDKNKL; // 0x24
		::UnityEngine::Vector3 PGJJCGGBCKK; // 0x30
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
