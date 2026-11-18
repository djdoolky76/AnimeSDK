#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INNERCREATEMEMBERLISTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6E00C0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INNERCREATEMEMBERLISTHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x125BC780)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INNERCREATEMEMBERLISTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x6E0050)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INNERCREATEMEMBERLISTHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6E0110)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_InnerCreateMemberListHandle_TypeDefinitionIndex = 66673;

	struct alignas(8) ViewObjectManager_InnerCreateMemberListHandle
	{
		static ::System::UInt32* StaticGet__IdGen()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ViewObjectManager_InnerCreateMemberListHandle_TypeDefinitionIndex)->GetStaticField(0x126E0);
		}
		::System::UInt32 HandleID; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* RequestList; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>* inList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Foundation::ViewObject::GroupMemberIdentifier>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INNERCREATEMEMBERLISTHANDLE__CTOR_OFFSET))(this, inList);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INNERCREATEMEMBERLISTHANDLE__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INNERCREATEMEMBERLISTHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_INNERCREATEMEMBERLISTHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
