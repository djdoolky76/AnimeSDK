#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AbTestConfig_7911CDDE5D92E7D1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_COMPLIANCECONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB9B50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_ComplianceConfigModel_TypeDefinitionIndex = 19469;

	class ConfigManager_ComplianceConfigModel : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AbTestConfig_7911CDDE5D92E7D1*>* abtestOS; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_COMPLIANCECONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
