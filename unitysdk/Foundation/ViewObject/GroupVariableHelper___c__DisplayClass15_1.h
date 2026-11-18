#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15E85F90)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper___c__DisplayClass15_1_TypeDefinitionIndex = 41710;

	template <typename T>
	class GroupVariableHelper___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* tcs; // 0x18
		::System::Int32 count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_1__CTOR_OFFSET))(this);
		}
	};
}
