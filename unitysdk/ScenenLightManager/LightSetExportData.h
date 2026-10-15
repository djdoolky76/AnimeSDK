#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class LightSetExportData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE963F60)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xE9642C0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE9645D0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_GJMBIPMKLHP_OFFSET UNITYSDK_OFFSET(0xE963FD0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightSetExportData_TypeDefinitionIndex = 49158;

	class LightSetExportData : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* ids; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean GJMBIPMKLHP(::ScenenLightManager::LightSetExportData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::LightSetExportData*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_GJMBIPMKLHP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATA_GETHASHCODE_OFFSET))(this);
		}

	};
}
