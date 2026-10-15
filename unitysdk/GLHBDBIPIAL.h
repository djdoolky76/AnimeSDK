#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class PGBLBOJBDGG;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define GLHBDBIPIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA7120)
#define GLHBDBIPIAL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15AA7150)
#define GLHBDBIPIAL_IJOLENBNDDC_OFFSET UNITYSDK_OFFSET(0x15AA7BA0)
#define GLHBDBIPIAL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15AA7C10)

inline static constexpr unsigned int GLHBDBIPIAL_TypeDefinitionIndex = 77267;

	class GLHBDBIPIAL : public ::System::Object
	{
	public:
		::BNLHGENFEHG* PDENFEFCAGN; // 0x10
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + GLHBDBIPIAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHBDBIPIAL_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHBDBIPIAL_TEARDOWN_OFFSET))(this);
		}

		::System::Void IJOLENBNDDC(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + GLHBDBIPIAL_IJOLENBNDDC_OFFSET))(this, a1);
		}

	};
