#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LDIHJENNBEE.h"
class BDPDNAECJII;
class DFBICHLFCLL;
class FEFFMCCAOCO;
namespace RPG::GameCore { class TeamTowersSkillConfig; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKPGJGFMICC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B08B0B0)
#define OKPGJGFMICC_EHILPKHDLNJ_OFFSET UNITYSDK_OFFSET(0x1B08A870)
#define OKPGJGFMICC_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1B08B080)
#define OKPGJGFMICC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1B08ACF0)
#define OKPGJGFMICC_HBHNDFCPCJE_OFFSET UNITYSDK_OFFSET(0x1B08B090)
#define OKPGJGFMICC_IOIBBCHKLEE_OFFSET UNITYSDK_OFFSET(0x1B08A520)
#define OKPGJGFMICC_JHFJDLIGIIH_OFFSET UNITYSDK_OFFSET(0x1B08A1B0)
#define OKPGJGFMICC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B08AA00)
#define OKPGJGFMICC_LKINLAMMGID_OFFSET UNITYSDK_OFFSET(0x1B08ABA0)
#define OKPGJGFMICC_PCHINOCMHKP_OFFSET UNITYSDK_OFFSET(0x1B08A330)
#define OKPGJGFMICC_PKOIMAAGMAJ_OFFSET UNITYSDK_OFFSET(0x1B08B0A0)

inline static constexpr unsigned int OKPGJGFMICC_TypeDefinitionIndex = 38048;

	class OKPGJGFMICC : public ::System::Object
	{
	public:
		::DFBICHLFCLL* DFCNIFEAKLK; // 0x10
		::System::Action_1<::System::UInt32>* LGAOOKPFIMF; // 0x18
		::System::Collections::Generic::List_1<::FEFFMCCAOCO*>* ILFCFKCNAAH; // 0x20
		::System::UInt32 FEIHGMHHJHO; // 0x28
		::System::Boolean PPPKKAKDEBA; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 GLOFBFBPMCP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGJGFMICC_CTOR_OFFSET))(this);
		}

		::System::Void JHFJDLIGIIH(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::BDPDNAECJII* a4, ::RPG::GameCore::TeamTowersSkillConfig* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::BDPDNAECJII*, ::RPG::GameCore::TeamTowersSkillConfig*))((::PBYTE)hIl2Cpp + OKPGJGFMICC_JHFJDLIGIIH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EHILPKHDLNJ(::System::UInt32 a1, ::System::UInt32 a2, ::BDPDNAECJII* a3, ::RPG::GameCore::TeamTowersSkillConfig* a4, ::System::Action_1<::System::UInt32>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::BDPDNAECJII*, ::RPG::GameCore::TeamTowersSkillConfig*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OKPGJGFMICC_EHILPKHDLNJ_OFFSET))(this, a1, a2, a3, a4, a5);
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
