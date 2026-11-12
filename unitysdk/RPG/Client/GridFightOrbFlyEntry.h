#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightOrbEntityData; }

#define RPG_CLIENT_GRIDFIGHTORBFLYENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0EEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbFlyEntry_TypeDefinitionIndex = 65887;

	class GridFightOrbFlyEntry : public ::System::Object
	{
	public:
		::RPG::Client::GridFightOrbEntityData* Orb; // 0x10
		::UnityEngine::Vector3 StartPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBFLYENTRY_CTOR_OFFSET))(this);
		}

	};
}
