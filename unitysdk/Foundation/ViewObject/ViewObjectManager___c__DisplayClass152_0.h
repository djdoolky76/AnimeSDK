#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectManager_InnerCreateMemberListHandle.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class DHOHLCHCCDJ;
class FGICKENFLJC;
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS152_0__CREATEGROUPMEMBERLIST_B__0_OFFSET UNITYSDK_OFFSET(0x132431A0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS152_0__CREATEGROUPMEMBERLIST_B__1_OFFSET UNITYSDK_OFFSET(0x13243390)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS152_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13243190)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass152_0_TypeDefinitionIndex = 66692;

	class ViewObjectManager___c__DisplayClass152_0 : public ::System::Object
	{
	public:
		::Foundation::ViewObject::ViewObjectManager_InnerCreateMemberListHandle handle; // 0x10
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x20
		::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*>* errorCallback; // 0x28
		::System::Action_2<::System::Boolean, ::System::Collections::Generic::List_1<::FGICKENFLJC*>*>* rspCallback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS152_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateGroupMemberList_b__0(::DHOHLCHCCDJ* message, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* _)
		{
			return ((::System::Void(*)(::PVOID, ::DHOHLCHCCDJ*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS152_0__CREATEGROUPMEMBERLIST_B__0_OFFSET))(this, message, _);
		}

		::System::Void _CreateGroupMemberList_b__1(::DHOHLCHCCDJ* err, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* _)
		{
			return ((::System::Void(*)(::PVOID, ::DHOHLCHCCDJ*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS152_0__CREATEGROUPMEMBERLIST_B__1_OFFSET))(this, err, _);
		}
	};
}
