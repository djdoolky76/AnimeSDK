#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ScenenLightManager { class LightSetExportDataLong; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_CTOR_OFFSET UNITYSDK_OFFSET(0xE95A420)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_EQUALS_OFFSET UNITYSDK_OFFSET(0xE95A7C0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE95AAD0)
#define SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_GJMBIPMKLHP_OFFSET UNITYSDK_OFFSET(0xE95A4D0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightSetExportDataLong_TypeDefinitionIndex = 49160;

	class LightSetExportDataLong : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::System::Int64>* ids; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::Collections::Generic::List_1<::System::Int64>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Int64>*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean GJMBIPMKLHP(::ScenenLightManager::LightSetExportDataLong* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ScenenLightManager::LightSetExportDataLong*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_GJMBIPMKLHP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTSETEXPORTDATALONG_GETHASHCODE_OFFSET))(this);
		}

	};
}
