#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
class NKMEEIAEDDP;
namespace System { class Action; }

#define NKMEEIAEDDP___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC3D130)
#define NKMEEIAEDDP___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xBC3E760)

	class NKMEEIAEDDP___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::INMMPMDELKE* entity; // 0x10
		::System::Action* onPush; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMEEIAEDDP___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _AttachButtonToEntity_b__0(::NKMEEIAEDDP* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NKMEEIAEDDP*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP___C__DISPLAYCLASS0_0__ATTACHBUTTONTOENTITY_B__0_OFFSET))(this, a1, a2);
		}

	};
