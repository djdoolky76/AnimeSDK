#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/FPropertyBagPropertyDesc.h"
#include "unitysdk/UnrealTypes/ScriptStruct.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/UnrealTypes/FGuid.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"
#include "unitysdk/UnrealTypes/ReadOnlyNativeListView_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"

namespace System { class Object; }
namespace UnrealTypes { template <typename T> class ManagedStructList_1; }

#define UNREALTYPES_PROPERTYBAG_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1E2B2C10)
#define UNREALTYPES_PROPERTYBAG_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B2C50)
#define UNREALTYPES_PROPERTYBAG_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2B2C80)
#define UNREALTYPES_PROPERTYBAG_FINDPROPERTYDESCBYID_OFFSET UNITYSDK_OFFSET(0x1E2B29A0)
#define UNREALTYPES_PROPERTYBAG_FINDPROPERTYDESCBYNAME_OFFSET UNITYSDK_OFFSET(0x1E2A5500)
#define UNREALTYPES_PROPERTYBAG_GETORCREATEFROMDESCS_OFFSET UNITYSDK_OFFSET(0x1E2B0CB0)
#define UNREALTYPES_PROPERTYBAG_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E2B2C00)
#define UNREALTYPES_PROPERTYBAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2CA0)
#define UNREALTYPES_PROPERTYBAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2AE0)

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBag_TypeDefinitionIndex = 27852;

	class PropertyBag : public ::UnrealTypes::ScriptStruct
	{
	public:
		static ::System::Object** StaticGet_PropertyBagLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PropertyBag_TypeDefinitionIndex)->GetStaticField(0x250D0);
		}
		::UnrealTypes::ManagedStructList_1<::UnrealTypes::FPropertyBagPropertyDesc>* PropertyDescs; // 0x88

		::System::Void _ctor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG__CTOR_OFFSET))(this, initializer);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG__CCTOR_OFFSET))();
		}

		static ::UnrealTypes::PropertyBag* GetOrCreateFromDescs(::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FPropertyBagPropertyDesc>& propertyDescs)
		{
			return ((::UnrealTypes::PropertyBag*(*)(::UnrealTypes::ReadOnlyNativeListView_1<::UnrealTypes::FPropertyBagPropertyDesc>&))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG_GETORCREATEFROMDESCS_OFFSET))(propertyDescs);
		}

		::UnrealTypes::ReadOnlyRawPtr_1<::UnrealTypes::FPropertyBagPropertyDesc> FindPropertyDescByID(::UnrealTypes::FGuid& id)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::UnrealTypes::FPropertyBagPropertyDesc>(*)(::PVOID, ::UnrealTypes::FGuid&))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG_FINDPROPERTYDESCBYID_OFFSET))(this, id);
		}

		::UnrealTypes::ReadOnlyRawPtr_1<::UnrealTypes::FPropertyBagPropertyDesc> FindPropertyDescByName(::Foundation::Unreal::FName name)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::UnrealTypes::FPropertyBagPropertyDesc>(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG_FINDPROPERTYDESCBYNAME_OFFSET))(this, name);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}

		::System::Void DisposeInternal(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTYBAG_DISPOSEINTERNAL_OFFSET))(this, disposing);
		}
	};
}
