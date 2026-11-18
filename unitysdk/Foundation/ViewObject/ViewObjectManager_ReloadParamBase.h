#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EReloadGroupReason.h"
#include "unitysdk/System/Object.h"

class BIJIGJPHCED;
namespace System { class Action; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADPARAMBASE_CHECKFLAG_OFFSET UNITYSDK_OFFSET(0x179C5D10)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x179C5DF0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_ReloadParamBase_TypeDefinitionIndex = 66675;

	class ViewObjectManager_ReloadParamBase : public ::System::Object
	{
	public:
		::System::Action* OnCompleted; // 0x10
		::BIJIGJPHCED* reason; // 0x18
		::System::Object* _flag; // 0x20
		::Foundation::ViewObject::EReloadGroupReason reloadGroupReason; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADPARAMBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER_RELOADPARAMBASE_CHECKFLAG_OFFSET))(this);
		}
	};
}
