#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class PGBLBOJBDGG;
namespace Entitas { class IGroup; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define FBCJBKACCCK_CTOR_OFFSET UNITYSDK_OFFSET(0x156966B0)
#define FBCJBKACCCK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x156966E0)

	class FBCJBKACCCK : public ::System::Object
	{
	public:
		::Entitas::IGroup* KIAIODODLEJ; // 0x10
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x18
		::BNLHGENFEHG* PDENFEFCAGN; // 0x20
		::System::Single PJMDHCDIPPK; // 0x28
		::System::Single JCEICLMJAOF; // 0x2C
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + FBCJBKACCCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJBKACCCK_EXECUTE_OFFSET))(this);
		}

	};
