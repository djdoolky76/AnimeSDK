#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIGLHBEPNOG.h"
#include "unitysdk/KIGLHBEPNOG_CanUseAbilityRet.h"
class AJFCABOOKCA;
class IFBFJDCECML;
class LBGIDBFBHEF;
class LDDEOLEIJOI;
class LMIOHCMPBJB;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace RPG::GameCore { class CakeRaceActionAddBuff; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define LDDEOLEIJOI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C70BDB0)
#define LDDEOLEIJOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C739180)
#define LDDEOLEIJOI_EJCDCBDCDBC_OFFSET UNITYSDK_OFFSET(0x1C7392F0)
#define LDDEOLEIJOI_IHGHLKKBAHI_OFFSET UNITYSDK_OFFSET(0x1C739410)
#define LDDEOLEIJOI_PMIMAILJLAF_OFFSET UNITYSDK_OFFSET(0x1C739460)

	class LDDEOLEIJOI : public ::KIGLHBEPNOG
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* PDHLGICHLKD; // 0x58
		::AJFCABOOKCA* EMDEOIKJLMJ; // 0x60
		::RPG::GameCore::CakeRaceActionAddBuff* HJAHGGHDMOA; // 0x68
		::LMIOHCMPBJB* LMDHPABCOAB; // 0x70
		::System::Void _ctor(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::PBGNKMMDBGD* a3, ::LBGIDBFBHEF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::PBGNKMMDBGD*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + LDDEOLEIJOI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::LDDEOLEIJOI* BPLPBPMEODA(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::PBGNKMMDBGD* a3, ::LBGIDBFBHEF* a4)
		{
			return ((::LDDEOLEIJOI*(*)(::IFBFJDCECML*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::PBGNKMMDBGD*, ::LBGIDBFBHEF*))((::PBYTE)hIl2Cpp + LDDEOLEIJOI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::KIGLHBEPNOG_CanUseAbilityRet EJCDCBDCDBC(::IFBFJDCECML* a1)
		{
			return ((::KIGLHBEPNOG_CanUseAbilityRet(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + LDDEOLEIJOI_EJCDCBDCDBC_OFFSET))(this, a1);
		}

		::System::Int64 IHGHLKKBAHI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDEOLEIJOI_IHGHLKKBAHI_OFFSET))(this);
		}

		::System::Void PMIMAILJLAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDEOLEIJOI_PMIMAILJLAF_OFFSET))(this);
		}

	};
