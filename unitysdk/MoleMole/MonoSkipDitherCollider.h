#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEIMJFKNHLF.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOSKIPDITHERCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18105330)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSkipDitherCollider_TypeDefinitionIndex = 72903;

	class MonoSkipDitherCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::EEIMJFKNHLF skipReason; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSKIPDITHERCOLLIDER__CTOR_OFFSET))(this);
		}
	};
}
