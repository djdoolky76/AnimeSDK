#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEGROUP_CHECKNOTONLYONEMAINELEMENT_OFFSET UNITYSDK_OFFSET(0x14AEF7F0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEGROUP_GET_MAININDEX_OFFSET UNITYSDK_OFFSET(0x14AEF630)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEGROUP_GET_MAXDISTANCE_OFFSET UNITYSDK_OFFSET(0x14AEF6E0)
#define MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEF8F0)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_SceneMoveGroup_TypeDefinitionIndex = 40486;

	class LevelConfig_SceneMoveGroup : public ::System::Object
	{
	public:
		::System::String* Scene; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* group; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_mainIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEGROUP_GET_MAININDEX_OFFSET))(this);
		}

		::System::Single get_maxDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEGROUP_GET_MAXDISTANCE_OFFSET))(this);
		}

		::System::Boolean CheckNotOnlyOneMainElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_SCENEMOVEGROUP_CHECKNOTONLYONEMAINELEMENT_OFFSET))(this);
		}
	};
}
