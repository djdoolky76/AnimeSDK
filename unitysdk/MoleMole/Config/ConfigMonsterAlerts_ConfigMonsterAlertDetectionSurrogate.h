#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJOBPBEAFDA_CFAOIBFEIJH.h"
#include "unitysdk/System/Object.h"

class LJOBPBEAFDA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE_TOCONFIG_OFFSET UNITYSDK_OFFSET(0x1BA31ED0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BA31D00)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA31C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlerts_ConfigMonsterAlertDetectionSurrogate_TypeDefinitionIndex = 85200;

	class ConfigMonsterAlerts_ConfigMonsterAlertDetectionSurrogate : public ::System::Object
	{
	public:
		::System::Single AlertGrowSpeed; // 0x10
		::System::Single Angle; // 0x14
		::System::Single AngleOffset; // 0x18
		::System::Single Heigt; // 0x1C
		::System::Single HeigtOffset; // 0x20
		::System::Single Radius; // 0x24
		::System::String* BasedAttachPoint; // 0x28
		::LJOBPBEAFDA_CFAOIBFEIJH TagFilterType; // 0x30
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::String*>* ZoneTags; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJOBPBEAFDA* src)
		{
			return ((::System::Void(*)(::PVOID, ::LJOBPBEAFDA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE__CTOR_1_OFFSET))(this, src);
		}

		::LJOBPBEAFDA* ToConfig()
		{
			return ((::LJOBPBEAFDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTS_CONFIGMONSTERALERTDETECTIONSURROGATE_TOCONFIG_OFFSET))(this);
		}
	};
}
