#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLDATA_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x1B9358C0)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B935840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NewMonoSceneMap3DConfig_GroupStateControlData_TypeDefinitionIndex = 45119;

	class NewMonoSceneMap3DConfig_GroupStateControlData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* GroupStateControlItems; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLDATA__CTOR_OFFSET))(this);
		}

		::System::Void ABDLEONNPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_GROUPSTATECONTROLDATA_ABDLEONNPAJ_OFFSET))(this);
		}
	};
}
