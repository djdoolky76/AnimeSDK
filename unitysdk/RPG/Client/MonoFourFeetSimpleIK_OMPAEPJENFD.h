#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EKMIAOPFNGK;
namespace RPG::Client { class MonoFourFeetSimpleIK_OriginTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_OMPAEPJENFD_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xD8264E0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_OMPAEPJENFD_CTOR_OFFSET UNITYSDK_OFFSET(0xD8256E0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_OMPAEPJENFD_JJFHLCAGBGA_OFFSET UNITYSDK_OFFSET(0xD826A00)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_OMPAEPJENFD_MIBEAENEAFE_OFFSET UNITYSDK_OFFSET(0xD825D30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFourFeetSimpleIK_OMPAEPJENFD_TypeDefinitionIndex = 68593;

	class MonoFourFeetSimpleIK_OMPAEPJENFD : public ::System::Object
	{
	public:
		::EKMIAOPFNGK* PCKJJLKKAHK; // 0x10
		::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* DICDJJOJKGF; // 0x18
		::UnityEngine::Vector3 FCABOCNPAEB; // 0x20
		::System::Void _ctor(::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoFourFeetSimpleIK_OriginTransform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_OMPAEPJENFD_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 JJFHLCAGBGA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_OMPAEPJENFD_JJFHLCAGBGA_OFFSET))(this);
		}

		::System::Void MIBEAENEAFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_OMPAEPJENFD_MIBEAENEAFE_OFFSET))(this);
		}

		::System::Void CIJDJDICMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_OMPAEPJENFD_CIJDJDICMMM_OFFSET))(this);
		}

	};
}
