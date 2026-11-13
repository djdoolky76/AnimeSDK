#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
class NKMEEIAEDDP;
namespace System { template <typename T> class Action_1; }

#define NKMEEIAEDDP___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B9F80)
#define NKMEEIAEDDP___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x1A7BB5B0)

inline static constexpr unsigned int NKMEEIAEDDP___c__DisplayClass0_0_TypeDefinitionIndex = 79075;

	class NKMEEIAEDDP___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action_1<::INMMPMDELKE*>* onPush; // 0x10
		::INMMPMDELKE* entity; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMEEIAEDDP___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _AttachButtonToEntity_b__0(::NKMEEIAEDDP* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NKMEEIAEDDP*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET))(this, a1, a2);
		}

	};
