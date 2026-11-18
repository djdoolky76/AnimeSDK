#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOANIMATIONPLUGINBASE_BAODLFKJJPL_OFFSET UNITYSDK_OFFSET(0x10D37290)
#define MOLEMOLE_MONOANIMATIONPLUGINBASE_GJFFHHJCEPH_OFFSET UNITYSDK_OFFSET(0x10D372A0)
#define MOLEMOLE_MONOANIMATIONPLUGINBASE_ILPLLKOCKKB_OFFSET UNITYSDK_OFFSET(0x10D372B0)
#define MOLEMOLE_MONOANIMATIONPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D37240)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAnimationPluginBase_TypeDefinitionIndex = 88365;

	class MonoAnimationPluginBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animation* _JBBOBBECHDB_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE__CTOR_OFFSET))(this);
		}

		::System::Void BAODLFKJJPL(::UnityEngine::Animation* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE_BAODLFKJJPL_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Animation* GJFFHHJCEPH()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE_GJFFHHJCEPH_OFFSET))(this);
		}

		::UnityEngine::Animation* ILPLLKOCKKB()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOANIMATIONPLUGINBASE_ILPLLKOCKKB_OFFSET))(this);
		}
	};
}
