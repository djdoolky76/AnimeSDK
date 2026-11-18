#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace Foundation::ViewObject { class ViewObjectManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7BF90)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS80_0__FLUSHGROUPSTATEREQUESTS_B__0_OFFSET UNITYSDK_OFFSET(0xBB7BFA0)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS80_0__FLUSHGROUPSTATEREQUESTS_B__1_OFFSET UNITYSDK_OFFSET(0xBB7C010)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass80_0_TypeDefinitionIndex = 66672;

	class ViewObjectManager___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* batch; // 0x10
		::Foundation::ViewObject::ViewObjectManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Void _FlushGroupStateRequests_b__0(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS80_0__FLUSHGROUPSTATEREQUESTS_B__0_OFFSET))(this, message);
		}

		::System::Void _FlushGroupStateRequests_b__1(::OAEFGCLEHHO* error)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS80_0__FLUSHGROUPSTATEREQUESTS_B__1_OFFSET))(this, error);
		}
	};
}
