#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

namespace System { class Object; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x19679380)
#define MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19679570)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueLevelThemeTabWidgetController_DataProxy_TypeDefinitionIndex = 74513;

	class UICoopClueLevelThemeTabWidgetController_DataProxy : public ::JJEJBPGJPJN
	{
	public:
		::JIOLFCAGOFH_1<::System::Boolean>* Locked; // 0x88
		::LJHFMILANJA_1<::System::Object*>* TargetLevelTheme; // 0x90
		::JIOLFCAGOFH_1<::System::Int32>* LockTip; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUELEVELTHEMETABWIDGETCONTROLLER_DATAPROXY_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
