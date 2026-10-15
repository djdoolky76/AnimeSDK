#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDIHJENNBEE.h"
class BDPDNAECJII;
class DFBICHLFCLL;
class FEFFMCCAOCO;
namespace RPG::GameCore { class TeamTowersSkillConfig; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKPGJGFMICC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D7B60)
#define OKPGJGFMICC_EHILPKHDLNJ_OFFSET UNITYSDK_OFFSET(0x1C7D7330)
#define OKPGJGFMICC_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1C7D7B30)
#define OKPGJGFMICC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C7D77B0)
#define OKPGJGFMICC_HBHNDFCPCJE_OFFSET UNITYSDK_OFFSET(0x1C7D7B40)
#define OKPGJGFMICC_IOIBBCHKLEE_OFFSET UNITYSDK_OFFSET(0x1C7D6FE0)
#define OKPGJGFMICC_JHFJDLIGIIH_OFFSET UNITYSDK_OFFSET(0x1C7D6C70)
#define OKPGJGFMICC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C7D74C0)
#define OKPGJGFMICC_LKINLAMMGID_OFFSET UNITYSDK_OFFSET(0x1C7D7660)
#define OKPGJGFMICC_PCHINOCMHKP_OFFSET UNITYSDK_OFFSET(0x1C7D6DF0)
#define OKPGJGFMICC_PKOIMAAGMAJ_OFFSET UNITYSDK_OFFSET(0x1C7D7B50)

	class OKPGJGFMICC : public ::System::Object
	{
	public:
		::System::Action* LGAOOKPFIMF; // 0x10
		::DFBICHLFCLL* DFCNIFEAKLK; // 0x18
		::System::Collections::Generic::List_1<::FEFFMCCAOCO*>* ILFCFKCNAAH; // 0x20
		::System::Boolean PPPKKAKDEBA; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 FEIHGMHHJHO; // 0x2C
		::System::UInt32 GLOFBFBPMCP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGJGFMICC_CTOR_OFFSET))(this);
		}

		::System::Void JHFJDLIGIIH(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::BDPDNAECJII* a4, ::RPG::GameCore::TeamTowersSkillConfig* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::BDPDNAECJII*, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + OKPGJGFMICC_JHFJDLIGIIH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EHILPKHDLNJ(::System::UInt32 a1, ::System::UInt32 a2, ::BDPDNAECJII* a3, ::RPG::GameCore::TeamTowersSkillConfig* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::BDPDNAECJII*, ::RPG::GameCore::TeamTowersSkillConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + OKPGJGFMICC_EHILPKHDLNJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKPGJGFMICC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean LKINLAMMGID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGJGFMICC_LKINLAMMGID_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGJGFMICC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PCHINOCMHKP(::LDIHJENNBEE a1, ::RPG::GameCore::TeamTowersSkillConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + OKPGJGFMICC_PCHINOCMHKP_OFFSET))(this, a1, a2);
		}

		::System::Void IOIBBCHKLEE(::LDIHJENNBEE a1, ::RPG::GameCore::TeamTowersSkillConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDIHJENNBEE, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + OKPGJGFMICC_IOIBBCHKLEE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGJGFMICC_FPJLEGMCENK_OFFSET))(this);
		}

		::System::UInt32 HBHNDFCPCJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGJGFMICC_HBHNDFCPCJE_OFFSET))(this);
		}

		::System::Boolean PKOIMAAGMAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGJGFMICC_PKOIMAAGMAJ_OFFSET))(this);
		}

	};
