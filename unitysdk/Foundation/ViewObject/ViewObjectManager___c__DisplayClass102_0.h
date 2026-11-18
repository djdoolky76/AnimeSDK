#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCE0D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__SETSTATEVALUEIMMEDIATELY_B__0_OFFSET UNITYSDK_OFFSET(0x15CCE0E0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__SETSTATEVALUEIMMEDIATELY_B__1_OFFSET UNITYSDK_OFFSET(0x15CCE1D0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__SETSTATEVALUEIMMEDIATELY_B__2_OFFSET UNITYSDK_OFFSET(0x15CCE220)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__SETSTATEVALUEIMMEDIATELY_B__3_OFFSET UNITYSDK_OFFSET(0x15CCE310)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass102_0_TypeDefinitionIndex = 66694;

	class ViewObjectManager___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::System::String* stateName; // 0x10
		::System::Action_1<::System::Boolean>* callback; // 0x18
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x20
		::Foundation::ViewObject::GroupMemberIdentifier identifier; // 0x28
		::System::Int32 value; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetStateValueImmediately_b__0(::OAEFGCLEHHO* success)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__SETSTATEVALUEIMMEDIATELY_B__0_OFFSET))(this, success);
		}

		::System::Void _SetStateValueImmediately_b__1(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__SETSTATEVALUEIMMEDIATELY_B__1_OFFSET))(this, error);
		}

		::System::Void _SetStateValueImmediately_b__2(::OAEFGCLEHHO* success)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__SETSTATEVALUEIMMEDIATELY_B__2_OFFSET))(this, success);
		}

		::System::Void _SetStateValueImmediately_b__3(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS102_0__SETSTATEVALUEIMMEDIATELY_B__3_OFFSET))(this, error);
		}
	};
}
