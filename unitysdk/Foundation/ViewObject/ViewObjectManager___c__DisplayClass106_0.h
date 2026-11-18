#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GKMDOFFILFC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS106_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CCE360)
#define FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS106_0__FLUSHSCENEENTITYDESTROYREQUESTS_B__0_OFFSET UNITYSDK_OFFSET(0x15CCE370)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager___c__DisplayClass106_0_TypeDefinitionIndex = 66670;

	class ViewObjectManager___c__DisplayClass106_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>>* entityLastPosRotMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS106_0__CTOR_OFFSET))(this);
		}

		::System::Void _FlushSceneEntityDestroyRequests_b__0(::GKMDOFFILFC* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::GKMDOFFILFC*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_VIEWOBJECTMANAGER___C__DISPLAYCLASS106_0__FLUSHSCENEENTITYDESTROYREQUESTS_B__0_OFFSET))(this, rsp);
		}
	};
}
