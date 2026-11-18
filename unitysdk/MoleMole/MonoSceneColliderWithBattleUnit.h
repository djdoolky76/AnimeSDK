#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x13108FD0)
#define MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x131091F0)
#define MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x131090A0)
#define MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x13109470)
#define MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x131096C0)
#define MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13109340)
#define MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT__CTOR_OFFSET UNITYSDK_OFFSET(0x13109810)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneColliderWithBattleUnit_TypeDefinitionIndex = 79986;

	class MonoSceneColliderWithBattleUnit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* selfCollider; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* BIPFOCGOGNP; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONTRIGGERENTER_OFFSET))(this, LIBPKNHDIGP);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* LIBPKNHDIGP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENECOLLIDERWITHBATTLEUNIT_ONTRIGGEREXIT_OFFSET))(this, LIBPKNHDIGP);
		}
	};
}
