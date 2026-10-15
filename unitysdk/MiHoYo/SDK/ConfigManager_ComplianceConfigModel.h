#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AbTestConfig_0610364D5D6941F8; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_CONFIGMANAGER_COMPLIANCECONFIGMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5BA90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager_ComplianceConfigModel_TypeDefinitionIndex = 8211;

	class ConfigManager_ComplianceConfigModel : public ::System::Object
	{
	public:
		::System::Boolean available; // 0x10
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AbTestConfig_0610364D5D6941F8*>* abtestOS; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER_COMPLIANCECONFIGMODEL_CTOR_OFFSET))(this);
		}

	};
}
