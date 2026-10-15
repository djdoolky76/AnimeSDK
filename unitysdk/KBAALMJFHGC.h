#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFLDNBDNJFP.h"
#include "unitysdk/KHMLAOFIOJD.h"
#include "unitysdk/RPG/GameCore/TargetAliasPrecedence.h"
#include "unitysdk/RPG/GameCore/TargetAliasTokenType.h"
class EILOGENDCCG;
class NDEKPFNFNDD;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define KBAALMJFHGC_ACPIKBFFAJK_OFFSET UNITYSDK_OFFSET(0xB2EC030)
#define KBAALMJFHGC_DCLGADJFGOE_OFFSET UNITYSDK_OFFSET(0x12CE0)
#define KBAALMJFHGC_DLKPFMBLMHM_OFFSET UNITYSDK_OFFSET(0x12D50)
#define KBAALMJFHGC_DONJFCFEDKF_OFFSET UNITYSDK_OFFSET(0x12E80)
#define KBAALMJFHGC_ECHCDHPHJNL_OFFSET UNITYSDK_OFFSET(0x12E90)
#define KBAALMJFHGC_GIKHLIIJOAD_OFFSET UNITYSDK_OFFSET(0x12DD0)
#define KBAALMJFHGC_HEPACNFLHEK_OFFSET UNITYSDK_OFFSET(0x12F00)
#define KBAALMJFHGC_HKCBKOMKBKC_OFFSET UNITYSDK_OFFSET(0x12E60)
#define KBAALMJFHGC_KPNCCPJADME_OFFSET UNITYSDK_OFFSET(0x12E70)
#define KBAALMJFHGC_LLPEHAGJHMG_OFFSET UNITYSDK_OFFSET(0x12F70)
#define KBAALMJFHGC_MHDLLMPCIOB_OFFSET UNITYSDK_OFFSET(0x12D40)
#define KBAALMJFHGC_MNBFBOHJIDB_OFFSET UNITYSDK_OFFSET(0x12E40)
#define KBAALMJFHGC_OBLLLLDEJPC_OFFSET UNITYSDK_OFFSET(0x12E30)
#define KBAALMJFHGC_OKOODADKCFK_OFFSET UNITYSDK_OFFSET(0x12E20)
#define KBAALMJFHGC_ONIFHAIEGFK_OFFSET UNITYSDK_OFFSET(0x12CF0)
#define KBAALMJFHGC_PPDKMFJCCBC_OFFSET UNITYSDK_OFFSET(0x12E50)

	struct alignas(8) KBAALMJFHGC
	{
		::KHMLAOFIOJD CGAEAJJBFCB; // 0x10
		::RPG::PoolList_1<::NDEKPFNFNDD*>* PPCGICFPFGD; // 0x20
		::CFLDNBDNJFP NAMNBALBJPK; // 0x28
		::CFLDNBDNJFP DIOFGJKGHNF; // 0x40
		::System::Boolean FKELNMFMFNG; // 0x58
		::System::Boolean GBOOLKAMLNJ; // 0x59
		static ::EILOGENDCCG* ACPIKBFFAJK(::System::String* a1)
		{
			return ((::EILOGENDCCG*(*)(::System::String*))((::PBYTE)hIl2Cpp + KBAALMJFHGC_ACPIKBFFAJK_OFFSET))(a1);
		}

		::EILOGENDCCG* DCLGADJFGOE(::System::String* a1)
		{
			return ((::EILOGENDCCG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KBAALMJFHGC_DCLGADJFGOE_OFFSET))(this, a1);
		}

		::System::Void ONIFHAIEGFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAALMJFHGC_ONIFHAIEGFK_OFFSET))(this);
		}

		::System::Void MHDLLMPCIOB(::RPG::GameCore::TargetAliasPrecedence a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetAliasPrecedence))((::PBYTE)hIl2Cpp + KBAALMJFHGC_MHDLLMPCIOB_OFFSET))(this, a1);
		}

		::System::Void DLKPFMBLMHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAALMJFHGC_DLKPFMBLMHM_OFFSET))(this);
		}

		::System::Boolean GIKHLIIJOAD(::RPG::GameCore::TargetAliasTokenType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TargetAliasTokenType))((::PBYTE)hIl2Cpp + KBAALMJFHGC_GIKHLIIJOAD_OFFSET))(this, a1);
		}

		::System::Boolean OKOODADKCFK(::RPG::GameCore::TargetAliasTokenType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TargetAliasTokenType))((::PBYTE)hIl2Cpp + KBAALMJFHGC_OKOODADKCFK_OFFSET))(this, a1);
		}

		::System::Void OBLLLLDEJPC(::RPG::GameCore::TargetAliasTokenType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetAliasTokenType, ::System::String*))((::PBYTE)hIl2Cpp + KBAALMJFHGC_OBLLLLDEJPC_OFFSET))(this, a1, a2);
		}

		::System::Void MNBFBOHJIDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAALMJFHGC_MNBFBOHJIDB_OFFSET))(this);
		}

		::System::Void PPDKMFJCCBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAALMJFHGC_PPDKMFJCCBC_OFFSET))(this);
		}

		::System::Void HKCBKOMKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAALMJFHGC_HKCBKOMKBKC_OFFSET))(this);
		}

		::System::Void KPNCCPJADME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAALMJFHGC_KPNCCPJADME_OFFSET))(this);
		}

		::System::Byte DONJFCFEDKF()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAALMJFHGC_DONJFCFEDKF_OFFSET))(this);
		}

		::System::Void ECHCDHPHJNL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KBAALMJFHGC_ECHCDHPHJNL_OFFSET))(this, a1);
		}

		::System::Void HEPACNFLHEK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KBAALMJFHGC_HEPACNFLHEK_OFFSET))(this, a1);
		}

		::System::Void LLPEHAGJHMG(::CFLDNBDNJFP a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CFLDNBDNJFP, ::System::String*))((::PBYTE)hIl2Cpp + KBAALMJFHGC_LLPEHAGJHMG_OFFSET))(this, a1, a2);
		}

	};
