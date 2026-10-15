#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeType.h"
#include "unitysdk/System/Object.h"
class GPLOFONGBGI;
class IFBFJDCECML;
class LMIOHCMPBJB;
class MOJIHBOAKOA;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceAoeConfig; }

#define IMKHJHEFKLH_ACANCPJOFPK_1_OFFSET UNITYSDK_OFFSET(0x1C6B4C70)
#define IMKHJHEFKLH_ACANCPJOFPK_OFFSET UNITYSDK_OFFSET(0x1C6B4BE0)
#define IMKHJHEFKLH_HLKKADIPDFJ_OFFSET UNITYSDK_OFFSET(0x1C6B4DC0)

inline static constexpr unsigned int IMKHJHEFKLH_TypeDefinitionIndex = 37211;

	class IMKHJHEFKLH : public ::System::Object
	{
	public:
		static ::MOJIHBOAKOA* ACANCPJOFPK(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::RPG::GameCore::CakeRaceAoeConfig* a3, ::LMIOHCMPBJB* a4)
		{
			return ((::MOJIHBOAKOA*(*)(::IFBFJDCECML*, ::PBGNKMMDBGD*, ::RPG::GameCore::CakeRaceAoeConfig*, ::LMIOHCMPBJB*))((::PBYTE)hIl2Cpp + IMKHJHEFKLH_ACANCPJOFPK_OFFSET))(a1, a2, a3, a4);
		}

		static ::MOJIHBOAKOA* ACANCPJOFPK_1(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::RPG::GameCore::CakeRaceAoeShowType a3, ::RPG::GameCore::CakeRaceAoeType a4, ::LMIOHCMPBJB* a5, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a6, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a7)
		{
			return ((::MOJIHBOAKOA*(*)(::IFBFJDCECML*, ::PBGNKMMDBGD*, ::RPG::GameCore::CakeRaceAoeShowType, ::RPG::GameCore::CakeRaceAoeType, ::LMIOHCMPBJB*, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*, ::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*))((::PBYTE)hIl2Cpp + IMKHJHEFKLH_ACANCPJOFPK_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::Il2CppArray<::GPLOFONGBGI*>* HLKKADIPDFJ(::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::Il2CppArray<::GPLOFONGBGI*>*(*)(::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + IMKHJHEFKLH_HLKKADIPDFJ_OFFSET))(a1, a2);
		}

	};
