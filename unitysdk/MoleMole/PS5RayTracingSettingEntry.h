#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/EnumSettingEntry.h"

class MDCMEPJLGOK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_GETDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x162ECD20)
#define MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x162ECCA0)
#define MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x162ECC90)
#define MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_GET__ISHIDEDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x162ECC80)
#define MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_ISDEFAULTENABLED_OFFSET UNITYSDK_OFFSET(0x162ECE20)
#define MOLEMOLE_PS5RAYTRACINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x162ED1B0)
#define MOLEMOLE_PS5RAYTRACINGSETTINGENTRY___BASE_GETDEFAULTINDEX_OFFSET UNITYSDK_OFFSET(0x162ED250)
#define MOLEMOLE_PS5RAYTRACINGSETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET UNITYSDK_OFFSET(0x162ED2E0)

namespace MoleMole
{
	inline static constexpr unsigned int PS5RayTracingSettingEntry_TypeDefinitionIndex = 55201;

	class PS5RayTracingSettingEntry : public ::MoleMole::EnumSettingEntry
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* DefaultEnablePerformanceKeyList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PS5RAYTRACINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get__isHideDefaultIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_GET__ISHIDEDEFAULTINDEX_OFFSET))(this);
		}

		::HPBIMDNDPLK get_SettingContentType()
		{
			return ((::HPBIMDNDPLK(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_GET_SETTINGCONTENTTYPE_OFFSET))(this);
		}

		::MDCMEPJLGOK* GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}

		::System::Int32 GetDefaultIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_GETDEFAULTINDEX_OFFSET))(this);
		}

		::System::Boolean IsDefaultEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PS5RAYTRACINGSETTINGENTRY_ISDEFAULTENABLED_OFFSET))(this);
		}

		::System::Int32 __base_GetDefaultIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PS5RAYTRACINGSETTINGENTRY___BASE_GETDEFAULTINDEX_OFFSET))(this);
		}

		::MDCMEPJLGOK* __base_GetSettingControlUnit()
		{
			return ((::MDCMEPJLGOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PS5RAYTRACINGSETTINGENTRY___BASE_GETSETTINGCONTROLUNIT_OFFSET))(this);
		}
	};
}
