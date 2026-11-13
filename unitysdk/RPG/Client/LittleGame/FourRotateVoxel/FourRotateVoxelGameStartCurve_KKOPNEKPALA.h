#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KKOPNEKPALA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB79E0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_KKOPNEKPALA_TypeDefinitionIndex = 79172;

	class FourRotateVoxelGameStartCurve_KKOPNEKPALA : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x10
		::System::Single CNOELHGCKJJ; // 0x18
		::UnityEngine::Vector3 CNFKIHNOOCJ; // 0x1C
		::System::Single HKAFGIGIOIM; // 0x28
		::System::Boolean MKAHJABPEPA; // 0x2C
		::System::Boolean NBAMBCOKBCI; // 0x2D
		::System::Boolean GJILHKKPEKP; // 0x2E
		::System::Byte _padding0[0x1];
		::System::UInt32 NOPJJBBDMGO; // 0x30
		::System::Single FFGJKEHMKDP; // 0x34
		::UnityEngine::Vector3 IAAHNOFKNGN; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KKOPNEKPALA_CTOR_OFFSET))(this);
		}

	};
}
