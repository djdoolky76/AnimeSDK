#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class PGBLBOJBDGG;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define FBCJBKACCCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1568A890)
#define FBCJBKACCCK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1568A8C0)

inline static constexpr unsigned int FBCJBKACCCK_TypeDefinitionIndex = 77274;

	class FBCJBKACCCK : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* KIAIODODLEJ; // 0x10
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x18
		::BNLHGENFEHG* PDENFEFCAGN; // 0x20
		::System::Single JCEICLMJAOF; // 0x28
		::System::Single PJMDHCDIPPK; // 0x2C
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + FBCJBKACCCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJBKACCCK_EXECUTE_OFFSET))(this);
		}

	};
