#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreePropertyAccess.h"
#include "unitysdk/StateTreeCore/StateTreePropertyBindings.h"
#include "unitysdk/StateTreeCore/StateTreePropertyCopy.h"
#include "unitysdk/StateTreeCore/StateTreePropertyCopyBatch.h"
#include "unitysdk/StateTreeCore/StateTreePropertyIndirection.h"
#include "unitysdk/StateTreeCore/StateTreePropertyRef.h"
#include "unitysdk/UnrealTypes/FPropertyHandle.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Object; }

#define STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_COPYPROPERTY_OFFSET UNITYSDK_OFFSET(0x1F2EE8B0)
#define STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_GETADDRESS_OFFSET UNITYSDK_OFFSET(0x1F2EFE50)
#define STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_GETBATCHCOPIES_OFFSET UNITYSDK_OFFSET(0x1F2EE800)
#define STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_GETPROPERTYACCESS_OFFSET UNITYSDK_OFFSET(0x1F2EFE00)
#define STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_PERFORMCOPYOBJECT_OFFSET UNITYSDK_OFFSET(0x1F2F0F20)
#define STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_PERFORMCOPY_OFFSET UNITYSDK_OFFSET(0x1F2EFF30)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreePropertyBindingsPureMethodExtensions_TypeDefinitionIndex = 31063;

	class StateTreePropertyBindingsPureMethodExtensions : public ::System::Object
	{
	public:
		static ::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreePropertyCopy> GetBatchCopies(::StateTreeCore::StateTreePropertyBindings& self, ::StateTreeCore::StateTreePropertyCopyBatch& batch)
		{
			return ((::UnrealTypes::ReadOnlyNativeListView_1<::StateTreeCore::StateTreePropertyCopy>(*)(::StateTreeCore::StateTreePropertyBindings&, ::StateTreeCore::StateTreePropertyCopyBatch&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_GETBATCHCOPIES_OFFSET))(self, batch);
		}

		static ::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreePropertyAccess> GetPropertyAccess(::StateTreeCore::StateTreePropertyBindings& self, ::StateTreeCore::StateTreePropertyRef propertyRef)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::StateTreePropertyAccess>(*)(::StateTreeCore::StateTreePropertyBindings&, ::StateTreeCore::StateTreePropertyRef))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_GETPROPERTYACCESS_OFFSET))(self, propertyRef);
		}

		static ::System::Boolean CopyProperty(::StateTreeCore::StateTreePropertyBindings& self, ::StateTreeCore::StateTreePropertyCopy& copy, ::StateTreeCore::StateTreeDataView sourceStructView, ::StateTreeCore::StateTreeDataView targetStructView)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreePropertyBindings&, ::StateTreeCore::StateTreePropertyCopy&, ::StateTreeCore::StateTreeDataView, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_COPYPROPERTY_OFFSET))(self, copy, sourceStructView, targetStructView);
		}

		static ::PVOID GetAddress(::StateTreeCore::StateTreePropertyBindings& self, ::StateTreeCore::StateTreeDataView structView, ::StateTreeCore::StateTreePropertyIndirection& firstIndirection, ::UnrealTypes::FPropertyHandle leafProperty)
		{
			return ((::PVOID(*)(::StateTreeCore::StateTreePropertyBindings&, ::StateTreeCore::StateTreeDataView, ::StateTreeCore::StateTreePropertyIndirection&, ::UnrealTypes::FPropertyHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_GETADDRESS_OFFSET))(self, structView, firstIndirection, leafProperty);
		}

		static ::System::Void PerformCopy(::StateTreeCore::StateTreePropertyCopy& copy, ::PVOID sourceAddress, ::PVOID targetAddress)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreePropertyCopy&, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_PERFORMCOPY_OFFSET))(copy, sourceAddress, targetAddress);
		}

		static ::System::Void PerformCopyObject(::StateTreeCore::StateTreePropertyCopy& copy, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> objectHandle, ::PVOID targetAddress)
		{
			return ((::System::Void(*)(::StateTreeCore::StateTreePropertyCopy&, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*>, ::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREEPROPERTYBINDINGSPUREMETHODEXTENSIONS_PERFORMCOPYOBJECT_OFFSET))(copy, objectHandle, targetAddress);
		}
	};
}
