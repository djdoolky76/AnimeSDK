#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class DJGGAKHLGON;

#define MOLEMOLE_MONOPHOTOWALLOBJECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x15AC40B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPhotoWallObjectConfig_TypeDefinitionIndex = 47461;

	class MonoPhotoWallObjectConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::DJGGAKHLGON* Data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHOTOWALLOBJECTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
