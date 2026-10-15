#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/BAHMMEEMJOB.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DMOJAEDFBID;
class KOAOAKKCCPK;
class MADHNHEMBOJ;
namespace RPG::Client { class PrefabLoadMeta; }

#define OOJBKJBLALH_BNPPAJOFAHP_OFFSET UNITYSDK_OFFSET(0xBF894C0)
#define OOJBKJBLALH_CTOR_OFFSET UNITYSDK_OFFSET(0xBF898B0)
#define OOJBKJBLALH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBF893A0)
#define OOJBKJBLALH_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xBF89860)
#define OOJBKJBLALH_MAPEPANNHJC_OFFSET UNITYSDK_OFFSET(0xBF89700)
#define OOJBKJBLALH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBF89420)

inline static constexpr unsigned int OOJBKJBLALH_TypeDefinitionIndex = 71325;

	class OOJBKJBLALH : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* KKEAELABFKI; // 0x60
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x68
		::DMOJAEDFBID* PKJDNILEODJ; // 0x70
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJBKJBLALH_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OOJBKJBLALH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::BAHMMEEMJOB a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + OOJBKJBLALH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJBKJBLALH_KGJAMKFPOAB_OFFSET))(this);
		}

		::DMOJAEDFBID* BNPPAJOFAHP()
		{
			return ((::DMOJAEDFBID*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJBKJBLALH_BNPPAJOFAHP_OFFSET))(this);
		}

		::System::Void MAPEPANNHJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJBKJBLALH_MAPEPANNHJC_OFFSET))(this);
		}

	};
