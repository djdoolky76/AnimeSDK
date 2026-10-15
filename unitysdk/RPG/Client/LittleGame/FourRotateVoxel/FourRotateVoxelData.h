#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD45F150)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD45F0D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_LPLHMPHBIFA_OFFSET UNITYSDK_OFFSET(0xD45F000)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD45F080)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD45EF50)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelData_TypeDefinitionIndex = 76853;

	class FourRotateVoxelData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action* FixUpdateFunction; // 0x18
		::System::Action* LateFixUpdateFunction; // 0x20
		::UnityEngine::Coroutine* FNADMCIINLH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_ONDISABLE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* LPLHMPHBIFA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDATA_LPLHMPHBIFA_OFFSET))(this);
		}

	};
}
