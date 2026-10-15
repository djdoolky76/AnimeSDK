#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class FDPALAEIHPB;
class PGBLBOJBDGG;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define ACENOAMLMIO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB11BD30)
#define ACENOAMLMIO_CTOR_OFFSET UNITYSDK_OFFSET(0xB11A8B0)
#define ACENOAMLMIO_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB11A8D0)
#define ACENOAMLMIO_HICCDFNCJFN_OFFSET UNITYSDK_OFFSET(0xB11B850)
#define ACENOAMLMIO_LJMECPEEKAA_OFFSET UNITYSDK_OFFSET(0xB11B6B0)
#define ACENOAMLMIO_ODDHPJPIKHP_OFFSET UNITYSDK_OFFSET(0xB11BBB0)
#define ACENOAMLMIO_ODKIKMPCBHG_OFFSET UNITYSDK_OFFSET(0xB11B4F0)
#define ACENOAMLMIO_OJFCEHEOLPB_OFFSET UNITYSDK_OFFSET(0xB11B9F0)

inline static constexpr unsigned int ACENOAMLMIO_TypeDefinitionIndex = 77269;

	class ACENOAMLMIO : public ::System::Object
	{
	public:
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x10
		::BNLHGENFEHG* PDENFEFCAGN; // 0x18
		static ::System::Int32* StaticGet_KODKIDJINFA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACENOAMLMIO")->GetStaticField(0x11170);
		}

		static ::System::Int32* StaticGet_DOOCLDPKGKM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ACENOAMLMIO")->GetStaticField(0x11174);
		}

		::System::Void _ctor(::FDPALAEIHPB* a1, ::BNLHGENFEHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BNLHGENFEHG*))((::PBYTE)hIl2Cpp + ACENOAMLMIO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACENOAMLMIO_CCTOR_OFFSET))();
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACENOAMLMIO_EXECUTE_OFFSET))(this);
		}

		::System::Void ODKIKMPCBHG(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + ACENOAMLMIO_ODKIKMPCBHG_OFFSET))(this, a1);
		}

		::System::Void ODDHPJPIKHP(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + ACENOAMLMIO_ODDHPJPIKHP_OFFSET))(this, a1);
		}

		::System::Void OJFCEHEOLPB(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + ACENOAMLMIO_OJFCEHEOLPB_OFFSET))(this, a1);
		}

		::System::Void LJMECPEEKAA(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + ACENOAMLMIO_LJMECPEEKAA_OFFSET))(this, a1, a2);
		}

		::System::Void HICCDFNCJFN(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + ACENOAMLMIO_HICCDFNCJFN_OFFSET))(this, a1);
		}

	};
