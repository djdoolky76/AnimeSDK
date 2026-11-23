#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/OperationCanceledException.h"
#include "unitysdk/B6564CAC678AC465.h"

class B6613C9D7676EEFB;
class E519989062D53DE5;

#define SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B71B60)
#define SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3C53F10)
#define SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3C53FA0)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int TaskCanceledException_TypeDefinitionIndex = 11567;

	class TaskCanceledException : public ::System::OperationCanceledException
	{
	public:
		::B6613C9D7676EEFB* _canceledTask; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_1_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void _ctor_2(::B6613C9D7676EEFB* A0EB125A66A994BD)
		{
			return ((::System::Void(*)(::PVOID, ::B6613C9D7676EEFB*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_TASKCANCELEDEXCEPTION__CTOR_2_OFFSET))(this, A0EB125A66A994BD);
		}
	};
}
