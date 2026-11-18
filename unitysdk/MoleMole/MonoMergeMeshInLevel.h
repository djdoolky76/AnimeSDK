#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOMERGEMESHINLEVEL_MERGEMESH_OFFSET UNITYSDK_OFFSET(0x14B00B60)
#define MOLEMOLE_MONOMERGEMESHINLEVEL_START_OFFSET UNITYSDK_OFFSET(0x14B00B10)
#define MOLEMOLE_MONOMERGEMESHINLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x14B01400)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMergeMeshInLevel_TypeDefinitionIndex = 43130;

	class MonoMergeMeshInLevel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMERGEMESHINLEVEL__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMERGEMESHINLEVEL_START_OFFSET))(this);
		}

		::System::Void MergeMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMERGEMESHINLEVEL_MERGEMESH_OFFSET))(this);
		}
	};
}
