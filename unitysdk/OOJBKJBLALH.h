#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/BAHMMEEMJOB.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DMOJAEDFBID;
class KOAOAKKCCPK;
class MADHNHEMBOJ;
namespace RPG::Client { class PrefabLoadMeta; }

#define OOJBKJBLALH_BNPPAJOFAHP_OFFSET UNITYSDK_OFFSET(0x196A8FC0)
#define OOJBKJBLALH_CTOR_OFFSET UNITYSDK_OFFSET(0x196A93B0)
#define OOJBKJBLALH_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x196A9360)
#define OOJBKJBLALH_MAPEPANNHJC_OFFSET UNITYSDK_OFFSET(0x196A9200)
#define OOJBKJBLALH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x196A8F20)
#define OOJBKJBLALH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x196A8EA0)

inline static constexpr unsigned int OOJBKJBLALH_TypeDefinitionIndex = 73301;

	class OOJBKJBLALH : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* KKEAELABFKI; // 0x60
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x68
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x70
		::DMOJAEDFBID* PKJDNILEODJ; // 0x78
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
