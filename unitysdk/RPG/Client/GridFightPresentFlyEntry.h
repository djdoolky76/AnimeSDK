#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class GridFightPresentEntity; }

#define RPG_CLIENT_GRIDFIGHTPRESENTFLYENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF378C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPresentFlyEntry_TypeDefinitionIndex = 65888;

	class GridFightPresentFlyEntry : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPresentEntity* Present; // 0x10
		::UnityEngine::Vector3 StartPos; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRESENTFLYENTRY_CTOR_OFFSET))(this);
		}

	};
}
