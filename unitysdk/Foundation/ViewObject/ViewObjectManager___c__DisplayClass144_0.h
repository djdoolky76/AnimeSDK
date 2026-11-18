#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS144_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E86E20)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS144_0__MARKGROUPCOMPLETE_B__0_OFFSET UNITYSDK_OFFSET(0x15E86E30)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS144_0__MARKGROUPCOMPLETE_B__1_OFFSET UNITYSDK_OFFSET(0x15E86E80)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass144_0_TypeDefinitionIndex = 66665;

	class ViewObjectManager___c__DisplayClass144_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS144_0__CTOR_OFFSET))(this);
		}

		::System::Void _MarkGroupComplete_b__0(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS144_0__MARKGROUPCOMPLETE_B__0_OFFSET))(this, message);
		}

		::System::Void _MarkGroupComplete_b__1(::OAEFGCLEHHO* err)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS144_0__MARKGROUPCOMPLETE_B__1_OFFSET))(this, err);
		}
	};
}
