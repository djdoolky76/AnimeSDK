#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPPAJJILOHB_LKAEJCFKLMO;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ACLFAIBEJAF_CTOR_OFFSET UNITYSDK_OFFSET(0xDCE7180)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ACLFAIBEJAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCE73D0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ACLFAIBEJAF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDCE7280)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ACLFAIBEJAF_LPJMDKIBPCG_OFFSET UNITYSDK_OFFSET(0xDCE7F30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallBallController_ACLFAIBEJAF_TypeDefinitionIndex = 78588;

	class GravityBallBallController_ACLFAIBEJAF : public ::System::Object
	{
	public:
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x10
		::GPPAJJILOHB_LKAEJCFKLMO* GCJINNEANCH; // 0x18
		::System::Single PGMIOKKLHIE; // 0x20
		// static const ::System::Object OKFMABJGOPI; // 0x0
		// static const ::System::String* IJIFHOEEBHJ; // 0x0
		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ACLFAIBEJAF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ACLFAIBEJAF_DISPOSE_OFFSET))(this);
		}

		::System::Void LPJMDKIBPCG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ACLFAIBEJAF_LPJMDKIBPCG_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ACLFAIBEJAF_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
}
