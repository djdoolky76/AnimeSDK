#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_BOTTOMANDFONTCONFIG_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0xFAD5C60)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_BOTTOMANDFONTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD5C00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NewMonoSceneMap3DConfig_BottomAndFontConfig_TypeDefinitionIndex = 45123;

	class NewMonoSceneMap3DConfig_BottomAndFontConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* BottomAndFontConfigs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_BOTTOMANDFONTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void ABDLEONNPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_BOTTOMANDFONTCONFIG_ABDLEONNPAJ_OFFSET))(this);
		}
	};
}
