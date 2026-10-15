#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSkillType.h"
#include "unitysdk/RPG/GameCore/ChenLingDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AIAMKDMMJFE;
class ALMFLCJCHKP;
class KFNPFAHAJLA;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define AFKIFKPCHKD_APIPIBFLMHM_OFFSET UNITYSDK_OFFSET(0xCF091C0)
#define AFKIFKPCHKD_CDANIDLIHPK_OFFSET UNITYSDK_OFFSET(0xCF09500)
#define AFKIFKPCHKD_CMBHKEOGDDA_OFFSET UNITYSDK_OFFSET(0xCF0A680)
#define AFKIFKPCHKD_CNCKCEGJGPM_OFFSET UNITYSDK_OFFSET(0xCF0A1A0)
#define AFKIFKPCHKD_CPCNGDBOBMO_OFFSET UNITYSDK_OFFSET(0xCF0AA20)
#define AFKIFKPCHKD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF085C0)
#define AFKIFKPCHKD_ELFDLGFCFOF_OFFSET UNITYSDK_OFFSET(0xCF09D80)
#define AFKIFKPCHKD_HCMJCAMKILO_OFFSET UNITYSDK_OFFSET(0xCF0AAE0)
#define AFKIFKPCHKD_IHNOLDNPKKG_OFFSET UNITYSDK_OFFSET(0xCF09770)
#define AFKIFKPCHKD_KBMFEFGINPF_OFFSET UNITYSDK_OFFSET(0xCF08EB0)
#define AFKIFKPCHKD_MCDNPJHNIMP_OFFSET UNITYSDK_OFFSET(0xCF02790)
#define AFKIFKPCHKD_NABFGIHCKAN_OFFSET UNITYSDK_OFFSET(0xCF0B1D0)
#define AFKIFKPCHKD_NEKCLKEEPDF_OFFSET UNITYSDK_OFFSET(0xCF0A870)
#define AFKIFKPCHKD_NOGGMIOMFCP_OFFSET UNITYSDK_OFFSET(0xCF08F10)
#define AFKIFKPCHKD_OEDKBGOBDIP_OFFSET UNITYSDK_OFFSET(0xCF08630)
#define AFKIFKPCHKD_OPDOEDPAJDE_OFFSET UNITYSDK_OFFSET(0xCF08C40)

inline static constexpr unsigned int AFKIFKPCHKD_TypeDefinitionIndex = 77801;

	class AFKIFKPCHKD : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::AIAMKDMMJFE* EDBJCFAKPCG; // 0x18
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x20
		::KFNPFAHAJLA* NJCOANGOCHF; // 0x28
		::System::Boolean MLHKJMHEGCK; // 0x30
		::System::Void _ctor(::LMFOOOLDECA* a1, ::OMNJCDDMLHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean OEDKBGOBDIP(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Single))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_OEDKBGOBDIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CNCKCEGJGPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_CNCKCEGJGPM_OFFSET))(this);
		}

		::System::Void KBMFEFGINPF(::ALMFLCJCHKP* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_KBMFEFGINPF_OFFSET))(this, a1, a2);
		}

		::System::Boolean CMBHKEOGDDA(::ALMFLCJCHKP* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_CMBHKEOGDDA_OFFSET))(this, a1, a2);
		}

		::System::Boolean OPDOEDPAJDE(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_OPDOEDPAJDE_OFFSET))(this, a1);
		}

		::System::Boolean MCDNPJHNIMP(::System::Single a1, ::ALMFLCJCHKP* a2, ::ALMFLCJCHKP* a3, ::System::Int32 a4, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType a5, ::RPG::GameCore::ChenLingDamageType a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::System::Int32, ::RPG::Client::LittleGame::ChenLing::ChenLingSkillType, ::RPG::GameCore::ChenLingDamageType))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_MCDNPJHNIMP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean NEKCLKEEPDF(::ALMFLCJCHKP* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::System::Single))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_NEKCLKEEPDF_OFFSET))(this, a1, a2);
		}

		::System::Boolean CPCNGDBOBMO(::ALMFLCJCHKP* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_CPCNGDBOBMO_OFFSET))(this, a1, a2);
		}

		::System::Boolean HCMJCAMKILO(::ALMFLCJCHKP* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::System::Single))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_HCMJCAMKILO_OFFSET))(this, a1, a2);
		}

		::System::Boolean NABFGIHCKAN(::ALMFLCJCHKP* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*, ::System::Single))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_NABFGIHCKAN_OFFSET))(this, a1, a2);
		}

		::System::Void NOGGMIOMFCP(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_NOGGMIOMFCP_OFFSET))(this, a1, a2);
		}

		::System::Void APIPIBFLMHM(::System::Int32 a1, ::ALMFLCJCHKP* a2, ::RPG::GameCore::ChenLingDamageType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingDamageType))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_APIPIBFLMHM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IHNOLDNPKKG(::System::Int32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_IHNOLDNPKKG_OFFSET))(this, a1, a2);
		}

		::System::Void CDANIDLIHPK(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_CDANIDLIHPK_OFFSET))(this, a1, a2);
		}

		::System::Void ELFDLGFCFOF(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AFKIFKPCHKD_ELFDLGFCFOF_OFFSET))(this, a1, a2, a3);
		}

	};
