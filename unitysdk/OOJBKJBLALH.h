#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/BAHMMEEMJOB.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DMOJAEDFBID;
class KOAOAKKCCPK;
class MADHNHEMBOJ;
namespace RPG::Client { class PrefabLoadMeta; }

#define OOJBKJBLALH_BNPPAJOFAHP_OFFSET UNITYSDK_OFFSET(0xC889E00)
#define OOJBKJBLALH_CTOR_OFFSET UNITYSDK_OFFSET(0xC88A1F0)
#define OOJBKJBLALH_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xC88A1A0)
#define OOJBKJBLALH_MAPEPANNHJC_OFFSET UNITYSDK_OFFSET(0xC88A040)
#define OOJBKJBLALH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC889D60)
#define OOJBKJBLALH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC889CE0)

inline static constexpr unsigned int OOJBKJBLALH_TypeDefinitionIndex = 73302;

	class OOJBKJBLALH : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* KKEAELABFKI; // 0x60
		::DMOJAEDFBID* PKJDNILEODJ; // 0x68
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x70
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJBKJBLALH_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OOJBKJBLALH__ONINITPARAMS_OFFSET))(this, a1);
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
