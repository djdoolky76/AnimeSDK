#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KKOPNEKPALA_CTOR_OFFSET UNITYSDK_OFFSET(0xD466E60)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	class FourRotateVoxelGameStartCurve_KKOPNEKPALA : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffect* HEIHBJEEGPB; // 0x10
		::System::UInt32 NOPJJBBDMGO; // 0x18
		::System::Single FFGJKEHMKDP; // 0x1C
		::System::Single CNOELHGCKJJ; // 0x20
		::UnityEngine::Vector3 IAAHNOFKNGN; // 0x24
		::System::Boolean GJILHKKPEKP; // 0x30
		::System::Boolean MKAHJABPEPA; // 0x31
		::System::Boolean NBAMBCOKBCI; // 0x32
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 CNFKIHNOOCJ; // 0x34
		::System::Single HKAFGIGIOIM; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KKOPNEKPALA_CTOR_OFFSET))(this);
		}

	};
}
