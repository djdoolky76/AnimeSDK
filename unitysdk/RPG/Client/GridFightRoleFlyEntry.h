#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTROLEFLYENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E1650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleFlyEntry_TypeDefinitionIndex = 65883;

	class GridFightRoleFlyEntry : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* Role; // 0x10
		::UnityEngine::Vector3 StartPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEFLYENTRY_CTOR_OFFSET))(this);
		}

	};
}
