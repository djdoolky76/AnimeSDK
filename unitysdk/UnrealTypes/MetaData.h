#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNREALTYPES_METADATA_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E2AE8E0)
#define UNREALTYPES_METADATA_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2AE8F0)
#define UNREALTYPES_METADATA_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2AE8D0)
#define UNREALTYPES_METADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AE820)

namespace UnrealTypes
{
	inline static constexpr unsigned int MetaData_TypeDefinitionIndex = 27758;

	class MetaData : public ::UnrealTypes::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* ObjectMetaDataMap; // 0x38

		::System::Void _ctor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_METADATA__CTOR_OFFSET))(this, initializer);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_METADATA_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_METADATA_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_METADATA_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}
	};
}
