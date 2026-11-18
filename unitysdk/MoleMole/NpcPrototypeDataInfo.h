#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NpcPrototypeNavMeshObstacleData; }
namespace MoleMole { class NpcPrototypeRigidbodyData; }
namespace System { class String; }

#define MOLEMOLE_NPCPROTOTYPEDATAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14BB5040)

namespace MoleMole
{
	inline static constexpr unsigned int NpcPrototypeDataInfo_TypeDefinitionIndex = 49044;

	class NpcPrototypeDataInfo : public ::System::Object
	{
	public:
		::System::Int32 Key; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* comment; // 0x18
		::System::Boolean EnableRigidbody; // 0x20
		::System::Byte _padding1[0x7];
		::MoleMole::NpcPrototypeRigidbodyData* Rigidbody; // 0x28
		::System::Boolean EnableNavMeshObstacle; // 0x30
		::System::Byte _padding2[0x7];
		::MoleMole::NpcPrototypeNavMeshObstacleData* NavMeshObstacle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPEDATAINFO__CTOR_OFFSET))(this);
		}
	};
}
