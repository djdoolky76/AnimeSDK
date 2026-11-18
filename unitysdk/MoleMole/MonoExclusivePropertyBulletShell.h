#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL_AWAKE_OFFSET UNITYSDK_OFFSET(0x10D3AF70)
#define MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x10D3B060)
#define MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL__CTOR_OFFSET UNITYSDK_OFFSET(0x10D3B190)

namespace MoleMole
{
	inline static constexpr unsigned int MonoExclusivePropertyBulletShell_TypeDefinitionIndex = 68468;

	class MonoExclusivePropertyBulletShell : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* HEFEPIGIFFG; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL_AWAKE_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Single JCLCDJHDJKG, ::System::Single BOHMJNMLAKO, ::MoleMole::Battle::Entity* BFDPPMDEOFF, ::System::Boolean BAIIOPLFFBH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEXCLUSIVEPROPERTYBULLETSHELL_REFRESHVIEW_OFFSET))(this, JCLCDJHDJKG, BOHMJNMLAKO, BFDPPMDEOFF, BAIIOPLFFBH);
		}
	};
}
