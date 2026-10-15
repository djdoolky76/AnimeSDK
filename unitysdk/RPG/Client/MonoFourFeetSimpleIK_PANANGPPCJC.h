#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace RPG::Client { class MonoFourFeetSimpleIK_OriginTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_PANANGPPCJC_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xD82FF10)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_PANANGPPCJC_CTOR_OFFSET UNITYSDK_OFFSET(0xD82F110)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_PANANGPPCJC_MIBEAENEAFE_OFFSET UNITYSDK_OFFSET(0xD82F7D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFourFeetSimpleIK_PANANGPPCJC_TypeDefinitionIndex = 68594;

	class MonoFourFeetSimpleIK_PANANGPPCJC : public ::System::Object
	{
	public:
		::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* DICDJJOJKGF; // 0x10
		::UnityEngine::Transform* DHIPFJBEJPI; // 0x18
		::UnityEngine::Quaternion DGKOGKGKHJG; // 0x20
		::System::Single APAKCBFMCAB; // 0x30
		::System::Void _ctor(::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoFourFeetSimpleIK_OriginTransform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_PANANGPPCJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void MIBEAENEAFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_PANANGPPCJC_MIBEAENEAFE_OFFSET))(this);
		}

		::System::Void CIJDJDICMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_PANANGPPCJC_CIJDJDICMMM_OFFSET))(this);
		}

	};
}
