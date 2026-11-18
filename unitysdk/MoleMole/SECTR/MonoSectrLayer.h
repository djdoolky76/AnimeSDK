#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBKGMOIKFPG.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_SECTR_MONOSECTRLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC0F60)

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int MonoSectrLayer_TypeDefinitionIndex = 45951;

	class MonoSectrLayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::LBKGMOIKFPG layerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_MONOSECTRLAYER__CTOR_OFFSET))(this);
		}
	};
}
