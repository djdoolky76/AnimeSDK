#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/FField.h"
#include "unitysdk/UnrealTypes/FPropertyHandle.h"
#include "unitysdk/UnrealTypes/PropertyFlags.h"
#include "unitysdk/Foundation/Unreal/FName.h"

namespace UnrealTypes { class IFieldVariant; }
namespace UnrealTypes { class PropertyParamsBase; }

#define UNREALTYPES_PROPERTY_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x1E2B0720)
#define UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTRINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B0AD0)
#define UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTR_1_OFFSET UNITYSDK_OFFSET(0x1E2B0AF0)
#define UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTR_OFFSET UNITYSDK_OFFSET(0x1E2A18E0)
#define UNREALTYPES_PROPERTY_COPYCOMPLETEVALUEINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E2B0C30)
#define UNREALTYPES_PROPERTY_COPYCOMPLETEVALUE_OFFSET UNITYSDK_OFFSET(0x1E29E080)
#define UNREALTYPES_PROPERTY_COPYVALUESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B0CA0)
#define UNREALTYPES_PROPERTY_DESTROYVALUEINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E2B0B80)
#define UNREALTYPES_PROPERTY_DESTROYVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B0BB0)
#define UNREALTYPES_PROPERTY_DESTROYVALUE_OFFSET UNITYSDK_OFFSET(0x1E2ACD90)
#define UNREALTYPES_PROPERTY_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E29D760)
#define UNREALTYPES_PROPERTY_DISPOSEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1E2B08D0)
#define UNREALTYPES_PROPERTY_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1E2B0710)
#define UNREALTYPES_PROPERTY_GET_MINALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1E2B06F0)
#define UNREALTYPES_PROPERTY_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1E2B0700)
#define UNREALTYPES_PROPERTY_INITIALIZEVALUEINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E2B0B20)
#define UNREALTYPES_PROPERTY_INITIALIZEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B0B70)
#define UNREALTYPES_PROPERTY_INITIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1E2ACD50)
#define UNREALTYPES_PROPERTY_INIT_OFFSET UNITYSDK_OFFSET(0x1E2B07F0)
#define UNREALTYPES_PROPERTY_ISINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E2B0B10)
#define UNREALTYPES_PROPERTY_ISSAMETYPE_OFFSET UNITYSDK_OFFSET(0x1E29E1B0)
#define UNREALTYPES_PROPERTY_LINKWITHOUTCHANGINGOFFSET_OFFSET UNITYSDK_OFFSET(0x1E2B0AB0)
#define UNREALTYPES_PROPERTY_LINK_OFFSET UNITYSDK_OFFSET(0x1E29D810)
#define UNREALTYPES_PROPERTY_RESETVALUEINCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E2B0BC0)
#define UNREALTYPES_PROPERTY_RESETVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1E2B0C20)
#define UNREALTYPES_PROPERTY_SETUPOFFSET_OFFSET UNITYSDK_OFFSET(0x1E2B09F0)
#define UNREALTYPES_PROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A14A0)
#define UNREALTYPES_PROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A12B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int Property_TypeDefinitionIndex = 27802;

	class Property : public ::UnrealTypes::FField
	{
	public:
		::UnrealTypes::Property* PropertyLinkNext; // 0x38
		::UnrealTypes::FPropertyHandle PropertyHandle; // 0x40
		::System::Int32 ArrayDim; // 0x44
		::System::Int32 OffsetInternal; // 0x48
		::UnrealTypes::PropertyFlags PropertyFlags; // 0x4C
		::System::Int32 ElementSize; // 0x50

		::System::Void _ctor(::UnrealTypes::IFieldVariant* owner, ::Foundation::Unreal::FName name)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY__CTOR_OFFSET))(this, owner, name);
		}

		::System::Void _ctor_1(::UnrealTypes::IFieldVariant* owner, ::UnrealTypes::PropertyParamsBase* prop)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::IFieldVariant*, ::UnrealTypes::PropertyParamsBase*))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY__CTOR_1_OFFSET))(this, owner, prop);
		}

		::System::Int32 get_MinAlignment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_GET_MINALIGNMENT_OFFSET))(this);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_GET_SIZE_OFFSET))(this);
		}

		::System::Boolean get_Disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_GET_DISPOSED_OFFSET))(this);
		}

		::System::Void AddObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_ADDOBJECT_OFFSET))(this);
		}

		::System::Void DisposeInternal(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_DISPOSEINTERNAL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_DISPOSEPROPERTY_OFFSET))(this);
		}

		::System::Int32 SetupOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_SETUPOFFSET_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_INIT_OFFSET))(this);
		}

		::System::Void LinkWithoutChangingOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_LINKWITHOUTCHANGINGOFFSET_OFFSET))(this);
		}

		::System::Int32 Link()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_LINK_OFFSET))(this);
		}

		::System::Boolean IsSameType(::UnrealTypes::Property* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::Property*))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_ISSAMETYPE_OFFSET))(this, other);
		}

		::PVOID ContainerPtrToValuePtrInternal(::PVOID container, ::System::Int32 arrayIndex)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTRINTERNAL_OFFSET))(this, container, arrayIndex);
		}

		::PVOID ContainerPtrToValuePtr(::PVOID container, ::System::Int32 arrayIndex)
		{
			return ((::PVOID(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTR_OFFSET))(this, container, arrayIndex);
		}

		::System::IntPtr ContainerPtrToValuePtr_1(::System::IntPtr container, ::System::Int32 arrayIndex)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_CONTAINERPTRTOVALUEPTR_1_OFFSET))(this, container, arrayIndex);
		}

		::System::Boolean IsInContainer(::System::Int32 containerSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_ISINCONTAINER_OFFSET))(this, containerSize);
		}

		::System::Void InitializeValue(::PVOID dest, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_INITIALIZEVALUE_OFFSET))(this, dest, allocator);
		}

		::System::Void InitializeValueInContainer(::PVOID container, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_INITIALIZEVALUEINCONTAINER_OFFSET))(this, container, allocator);
		}

		::System::Void InitializeValueInternal(::PVOID dest, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_INITIALIZEVALUEINTERNAL_OFFSET))(this, dest, allocator);
		}

		::System::Void DestroyValue(::PVOID dest)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_DESTROYVALUE_OFFSET))(this, dest);
		}

		::System::Void DestroyValueInContainer(::PVOID container)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_DESTROYVALUEINCONTAINER_OFFSET))(this, container);
		}

		::System::Void DestroyValueInternal(::PVOID dest)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_DESTROYVALUEINTERNAL_OFFSET))(this, dest);
		}

		::System::Void ResetValueInContainer(::PVOID container, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_RESETVALUEINCONTAINER_OFFSET))(this, container, arrayIndex);
		}

		::System::Void ResetValueInternal(::PVOID dest)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_RESETVALUEINTERNAL_OFFSET))(this, dest);
		}

		::System::Void CopyCompleteValue(::PVOID dest, ::PVOID src)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_COPYCOMPLETEVALUE_OFFSET))(this, dest, src);
		}

		::System::Void CopyCompleteValueInContainer(::PVOID dest, ::PVOID src)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_COPYCOMPLETEVALUEINCONTAINER_OFFSET))(this, dest, src);
		}

		::System::Void CopyValuesInternal(::PVOID dest, ::PVOID src, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNREALTYPES_PROPERTY_COPYVALUESINTERNAL_OFFSET))(this, dest, src, count);
		}
	};
}
