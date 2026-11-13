#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMGECGDAPEN.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MARBLEDAMAGETEXTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E09CA10)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleDamageTextInfo_TypeDefinitionIndex = 67770;

	class MarbleDamageTextInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Target; // 0x10
		::LMGECGDAPEN DamageType; // 0x18
		::System::Int32 Damage; // 0x1C
		::System::Single Duration; // 0x20
		::System::Single Scale; // 0x24
		::System::UInt32 EntityID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEDAMAGETEXTINFO_CTOR_OFFSET))(this);
		}

	};
}
