#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDANEEPAJKA.h"
#include "unitysdk/System/Object.h"

class ANOKJGCCGAO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_ALLOCATELOCALENTITYRID_OFFSET UNITYSDK_OFFSET(0x15F077A0)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_CLEARALL_OFFSET UNITYSDK_OFFSET(0x15F07E20)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_CLEARGROUP_OFFSET UNITYSDK_OFFSET(0x15F07A40)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_COLLECTLOCALENTITYRIDS_OFFSET UNITYSDK_OFFSET(0x15F07680)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_GETSEGMENTSTART_OFFSET UNITYSDK_OFFSET(0x15F075D0)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_MAKETYPEKEY_OFFSET UNITYSDK_OFFSET(0x15F07630)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_REGISTERRUNTIMEMEMBERCONFIG_OFFSET UNITYSDK_OFFSET(0x15F06E50)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_TRYALLOCATEDYNAMICMEMBERID_OFFSET UNITYSDK_OFFSET(0x15F07290)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_TRYGETRUNTIMEMEMBERCONFIG_OFFSET UNITYSDK_OFFSET(0x15F06CF0)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_UNREGISTERRUNTIMEMEMBERCONFIG_OFFSET UNITYSDK_OFFSET(0x15F07100)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x15F08030)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GenericGroupRuntimeRegistry_TypeDefinitionIndex = 73082;

	class GenericGroupRuntimeRegistry : public ::System::Object
	{
	public:
		// static const ::System::UInt32 LocalEntityRidStart = 0x80000000; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _localRidsByGroup; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _runtimeMemberIdsByGroup; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::ANOKJGCCGAO*>* _runtimeMemberConfigs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::UInt32>* _nextDynamicMemberIds; // 0x28
		::System::UInt32 _nextLocalEntityRid; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetRuntimeMemberConfig(::System::UInt32 groupId, ::System::UInt32 memberId, ::ANOKJGCCGAO*& config)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::ANOKJGCCGAO*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_TRYGETRUNTIMEMEMBERCONFIG_OFFSET))(this, groupId, memberId, config);
		}

		::System::Void RegisterRuntimeMemberConfig(::System::UInt32 groupId, ::System::UInt32 memberId, ::ANOKJGCCGAO* config)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::ANOKJGCCGAO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_REGISTERRUNTIMEMEMBERCONFIG_OFFSET))(this, groupId, memberId, config);
		}

		::System::Void UnregisterRuntimeMemberConfig(::System::UInt32 groupId, ::System::UInt32 memberId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_UNREGISTERRUNTIMEMEMBERCONFIG_OFFSET))(this, groupId, memberId);
		}

		::System::Boolean TryAllocateDynamicMemberId(::System::UInt32 groupId, ::MDANEEPAJKA memberType, ::System::UInt32& memberId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::MDANEEPAJKA, ::System::UInt32&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_TRYALLOCATEDYNAMICMEMBERID_OFFSET))(this, groupId, memberType, memberId);
		}

		static ::System::UInt32 GetSegmentStart(::MDANEEPAJKA memberType)
		{
			return ((::System::UInt32(*)(::MDANEEPAJKA))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_GETSEGMENTSTART_OFFSET))(memberType);
		}

		static ::System::UInt64 MakeTypeKey(::System::UInt32 groupId, ::MDANEEPAJKA memberType)
		{
			return ((::System::UInt64(*)(::System::UInt32, ::MDANEEPAJKA))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_MAKETYPEKEY_OFFSET))(groupId, memberType);
		}

		::System::Void CollectLocalEntityRids(::System::UInt32 groupId, ::System::Collections::Generic::List_1<::System::UInt32>* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_COLLECTLOCALENTITYRIDS_OFFSET))(this, groupId, result);
		}

		::System::UInt32 AllocateLocalEntityRid(::System::UInt32 groupId)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_ALLOCATELOCALENTITYRID_OFFSET))(this, groupId);
		}

		::System::Void ClearGroup(::System::UInt32 groupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_CLEARGROUP_OFFSET))(this, groupId);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPRUNTIMEREGISTRY_CLEARALL_OFFSET))(this);
		}
	};
}
