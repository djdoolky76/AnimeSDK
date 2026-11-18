#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class OAEFGCLEHHO;
namespace Cysharp::Threading::Tasks { template <typename T> class AutoResetUniTaskCompletionSource_1; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E85EC0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__PULL_B__0_OFFSET UNITYSDK_OFFSET(0x15E85ED0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__PULL_B__1_OFFSET UNITYSDK_OFFSET(0x15E85F30)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper___c__DisplayClass12_0_TypeDefinitionIndex = 41712;

	class GroupVariableHelper___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource_1<::CFMGIKJLMBJ*>* tcs; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _Pull_b__0(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__PULL_B__0_OFFSET))(this, message);
		}

		::System::Void _Pull_b__1(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS12_0__PULL_B__1_OFFSET))(this, message);
		}
	};
}
