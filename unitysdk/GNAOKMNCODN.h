#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNLHGENFEHG;
class PGBLBOJBDGG;
namespace RPG::GameCore { class ElfFeverSkillLevelConfig; }
namespace RPG::GameCore { class ElfPhaseItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNAOKMNCODN_AHGHNGBGJBI_OFFSET UNITYSDK_OFFSET(0x15AF5EE0)
#define GNAOKMNCODN_BMJLIPJDOHO_OFFSET UNITYSDK_OFFSET(0x15AF5CC0)
#define GNAOKMNCODN_CDIPNPFPOJE_OFFSET UNITYSDK_OFFSET(0x15AF60F0)
#define GNAOKMNCODN_CTOR_OFFSET UNITYSDK_OFFSET(0x15AF5A20)
#define GNAOKMNCODN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AF5C70)
#define GNAOKMNCODN_EJFOBPKIMHI_OFFSET UNITYSDK_OFFSET(0x15AF5DB0)
#define GNAOKMNCODN_HMBGFGMIGDO_OFFSET UNITYSDK_OFFSET(0x15AF6070)
#define GNAOKMNCODN_JANHKKKOOCE_OFFSET UNITYSDK_OFFSET(0x15AF5A90)
#define GNAOKMNCODN_NLPEFGFAGPF_OFFSET UNITYSDK_OFFSET(0x15AF5E30)
#define GNAOKMNCODN_OJBBEMGJFAE_OFFSET UNITYSDK_OFFSET(0x15AF6160)

	class GNAOKMNCODN : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ElfFeverSkillLevelConfig*>* FNJGLPKPMLD; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ElfPhaseItem*>* FDCIANLOAKA; // 0x18
		::PGBLBOJBDGG* EEFMDEHLLFI; // 0x20
		::BNLHGENFEHG* PDENFEFCAGN; // 0x28
		::System::Boolean HNFOMLKKNKI; // 0x30
		::System::Boolean JNFGEINAAPA; // 0x31
		::System::Boolean NCBKBIDGMEC; // 0x32
		::System::Boolean APKKODLBBCJ; // 0x33
		::System::Void _ctor(::BNLHGENFEHG* a1, ::PGBLBOJBDGG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BNLHGENFEHG*, ::PGBLBOJBDGG*))((::PBYTE)hIl2Cpp + GNAOKMNCODN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAOKMNCODN_DISPOSE_OFFSET))(this);
		}

		::System::Void BMJLIPJDOHO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNAOKMNCODN_BMJLIPJDOHO_OFFSET))(this, a1);
		}

		::System::Int32 EJFOBPKIMHI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAOKMNCODN_EJFOBPKIMHI_OFFSET))(this);
		}

		::System::Void NLPEFGFAGPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAOKMNCODN_NLPEFGFAGPF_OFFSET))(this);
		}

		::System::Int32 AHGHNGBGJBI(::RPG::GameCore::ElfFeverSkillLevelConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::ElfFeverSkillLevelConfig*))((::PBYTE)hIl2Cpp + GNAOKMNCODN_AHGHNGBGJBI_OFFSET))(this, a1);
		}

		::RPG::GameCore::ElfFeverSkillLevelConfig* HMBGFGMIGDO()
		{
			return ((::RPG::GameCore::ElfFeverSkillLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAOKMNCODN_HMBGFGMIGDO_OFFSET))(this);
		}

		::RPG::GameCore::ElfFeverSkillLevelConfig* CDIPNPFPOJE()
		{
			return ((::RPG::GameCore::ElfFeverSkillLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAOKMNCODN_CDIPNPFPOJE_OFFSET))(this);
		}

		::System::UInt32 OJBBEMGJFAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAOKMNCODN_OJBBEMGJFAE_OFFSET))(this);
		}

		::System::Void JANHKKKOOCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNAOKMNCODN_JANHKKKOOCE_OFFSET))(this);
		}

	};
