#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BHFAHPEJDHF;
class CAJBDLAOBPF;
class KNOCJADNCOA;
class NMNIJNNFPGP;
namespace RPG::GameCore { class BattleInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KJCGFLIFPKB_AJFDLJJCFGA_OFFSET UNITYSDK_OFFSET(0xB43D600)
#define KJCGFLIFPKB_CBHGEGECCDH_OFFSET UNITYSDK_OFFSET(0xB43D540)
#define KJCGFLIFPKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB43D700)
#define KJCGFLIFPKB_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB43CB30)
#define KJCGFLIFPKB_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB43D0C0)
#define KJCGFLIFPKB_IKANLMKJEIO_OFFSET UNITYSDK_OFFSET(0xB43CBE0)
#define KJCGFLIFPKB_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB43D260)
#define KJCGFLIFPKB_LEAGLAJKCKB_OFFSET UNITYSDK_OFFSET(0xB43D120)
#define KJCGFLIFPKB_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB43C980)
#define KJCGFLIFPKB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB43D1B0)
#define KJCGFLIFPKB_PNJKFOILFOB_OFFSET UNITYSDK_OFFSET(0xB43D6B0)
#define KJCGFLIFPKB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB43CB90)

	class KJCGFLIFPKB : public ::FMPCODLIOLG
	{
	public:
		::BHFAHPEJDHF* CHAPCPPJAAK; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::NMNIJNNFPGP*>* OMBMEAGNBNL; // 0x68
		::CAJBDLAOBPF* OGLBPEONFBA; // 0x70
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x78
		::BHFAHPEJDHF* CAICEMLCJMI; // 0x80
		::CAJBDLAOBPF* FKIIEFOBHPN; // 0x88
		::System::Boolean EINNACFPAEN; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* CBHGEGECCDH(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_CBHGEGECCDH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* AJFDLJJCFGA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_AJFDLJJCFGA_OFFSET))(this);
		}

		::RPG::Client::UISkillIndex PNJKFOILFOB(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_PNJKFOILFOB_OFFSET))(this, a1);
		}

		::System::Void IKANLMKJEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_IKANLMKJEIO_OFFSET))(this);
		}

		::System::Void LEAGLAJKCKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_LEAGLAJKCKB_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCGFLIFPKB_KANMCJHEFJJ_OFFSET))(this);
		}

	};
