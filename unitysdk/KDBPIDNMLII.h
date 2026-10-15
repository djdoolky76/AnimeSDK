#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
namespace Entitas { class IGroup; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define KDBPIDNMLII_CTOR_OFFSET UNITYSDK_OFFSET(0xB347A60)
#define KDBPIDNMLII_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB347B70)
#define KDBPIDNMLII_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB347A70)
#define KDBPIDNMLII_KILLKFDGKIH_OFFSET UNITYSDK_OFFSET(0xB348500)
#define KDBPIDNMLII_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB348900)

	class KDBPIDNMLII : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::Entitas::IGroup* NFBCHEEFOCK; // 0x18
		::BNLHGENFEHG* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + KDBPIDNMLII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBPIDNMLII_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBPIDNMLII_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDBPIDNMLII_TEARDOWN_OFFSET))(this);
		}

		::System::Void KILLKFDGKIH(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KDBPIDNMLII_KILLKFDGKIH_OFFSET))(this, a1, a2, a3);
		}

	};
