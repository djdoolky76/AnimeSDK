#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLJEGMGCIOG.h"
#include "unitysdk/RPG/GameCore/CakeRaceAoeShowType.h"
class GPLOFONGBGI;
class IFBFJDCECML;
class LMIOHCMPBJB;
class MOJIHBOAKOA;
class PBGNKMMDBGD;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOJIHBOAKOA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C750990)
#define MOJIHBOAKOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C750A30)
#define MOJIHBOAKOA_DGPOOKEAPGD_OFFSET UNITYSDK_OFFSET(0x1C750A60)
#define MOJIHBOAKOA_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x1C750B20)
#define MOJIHBOAKOA_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0x1C750E70)

	class MOJIHBOAKOA : public ::FLJEGMGCIOG
	{
	public:
		::Il2CppArray<::GPLOFONGBGI*>* KHKJAJEHLHD; // 0x40
		::LMIOHCMPBJB* LMDHPABCOAB; // 0x48
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x50
		::Il2CppArray<::GPLOFONGBGI*>* CHEGKHGIOLL; // 0x58
		::IFBFJDCECML* MGBHEHNKOFO; // 0x60
		::System::Void _ctor(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAoeShowType a2, ::PBGNKMMDBGD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAoeShowType, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MOJIHBOAKOA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::MOJIHBOAKOA* BPLPBPMEODA(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAoeShowType a2, ::PBGNKMMDBGD* a3)
		{
			return ((::MOJIHBOAKOA*(*)(::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAoeShowType, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + MOJIHBOAKOA_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::IFBFJDCECML*>* DGPOOKEAPGD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOJIHBOAKOA_DGPOOKEAPGD_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::System::Collections::Generic::List_1<::IFBFJDCECML*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IFBFJDCECML*>*))((::PBYTE)hIl2Cpp + MOJIHBOAKOA_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void HHGNECAGCCA(::System::Collections::Generic::List_1<::IFBFJDCECML*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::IFBFJDCECML*>*))((::PBYTE)hIl2Cpp + MOJIHBOAKOA_HHGNECAGCCA_OFFSET))(this, a1);
		}

	};
