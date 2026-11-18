#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class IHNJCJPPBIH;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS14_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7B7A0)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS14_1__PUSHSINGLE_B__0_OFFSET UNITYSDK_OFFSET(0xBB7B7B0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper___c__DisplayClass14_1_TypeDefinitionIndex = 41721;

	template <typename T>
	class GroupVariableHelper___c__DisplayClass14_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IHNJCJPPBIH*>*>* tcs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS14_1__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _PushSingle_b__0(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IHNJCJPPBIH*>* _)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IHNJCJPPBIH*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS14_1__PUSHSINGLE_B__0_OFFSET))(this, _);
		}
	};
}
