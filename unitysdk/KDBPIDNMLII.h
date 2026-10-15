#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define KDBPIDNMLII_CTOR_OFFSET UNITYSDK_OFFSET(0xB340370)
#define KDBPIDNMLII_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB340480)
#define KDBPIDNMLII_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB340380)
#define KDBPIDNMLII_KILLKFDGKIH_OFFSET UNITYSDK_OFFSET(0xB340E20)
#define KDBPIDNMLII_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB341220)

inline static constexpr unsigned int KDBPIDNMLII_TypeDefinitionIndex = 77271;

	class KDBPIDNMLII : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::Entitas::IGroup_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* NFBCHEEFOCK; // 0x18
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
