#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBBCDNAHNMH.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JBACCAGFHON;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }

#define IGMBAPDODMC_CKKJEPCPCKN_OFFSET UNITYSDK_OFFSET(0x16410C00)
#define IGMBAPDODMC_CTOR_OFFSET UNITYSDK_OFFSET(0x16410A90)
#define IGMBAPDODMC_EIKBOGJKELF_OFFSET UNITYSDK_OFFSET(0x16410C90)
#define IGMBAPDODMC_GLLOLGNJBHO_OFFSET UNITYSDK_OFFSET(0x16410F40)
#define IGMBAPDODMC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16410AA0)
#define IGMBAPDODMC_IOBOGHECJNH_OFFSET UNITYSDK_OFFSET(0x16410AE0)
#define IGMBAPDODMC_JLFGPMDGLIM_OFFSET UNITYSDK_OFFSET(0x164110C0)
#define IGMBAPDODMC_KDAIMCILPAM_OFFSET UNITYSDK_OFFSET(0x16410DB0)
#define IGMBAPDODMC_OLLKIHLLNOO_OFFSET UNITYSDK_OFFSET(0x16410A80)

inline static constexpr unsigned int IGMBAPDODMC_TypeDefinitionIndex = 78082;

	class IGMBAPDODMC : public ::HBBCDNAHNMH
	{
	public:
		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* KHOOPPKNFPA; // 0x18
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + IGMBAPDODMC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 OLLKIHLLNOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMBAPDODMC_OLLKIHLLNOO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMBAPDODMC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean IOBOGHECJNH(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + IGMBAPDODMC_IOBOGHECJNH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GLLOLGNJBHO(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + IGMBAPDODMC_GLLOLGNJBHO_OFFSET))(this, a1, a2);
		}

		::System::Void JLFGPMDGLIM(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + IGMBAPDODMC_JLFGPMDGLIM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* EIKBOGJKELF(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGMBAPDODMC_EIKBOGJKELF_OFFSET))(this, a1);
		}

		::System::Void KDAIMCILPAM(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*))((::PBYTE)hIl2Cpp + IGMBAPDODMC_KDAIMCILPAM_OFFSET))(this, a1);
		}

		::System::Void CKKJEPCPCKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMBAPDODMC_CKKJEPCPCKN_OFFSET))(this);
		}

	};
