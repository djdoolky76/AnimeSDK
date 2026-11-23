#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace ProceduralWorlds::Setup { class PWPackageConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PROCEDURALWORLDS_SETUP_PWPACKAGECONFIGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2937060)

namespace ProceduralWorlds::Setup
{
	inline static constexpr unsigned int PWPackageConfigSettings_TypeDefinitionIndex = 15320;

	class PWPackageConfigSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::ProceduralWorlds::Setup::PWPackageConfig*>* m_pWPackageConfigs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROCEDURALWORLDS_SETUP_PWPACKAGECONFIGSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
