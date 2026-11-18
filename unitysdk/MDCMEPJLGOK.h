#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIPDKIIDOD.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SystemSettingEntryBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDCMEPJLGOK_ALBDIDAMHEB_OFFSET UNITYSDK_OFFSET(0x16C769E0)
#define MDCMEPJLGOK_AOMGAKKPFCJ_OFFSET UNITYSDK_OFFSET(0x16C76F20)
#define MDCMEPJLGOK_BCPLGOGNJIK_OFFSET UNITYSDK_OFFSET(0x16C76880)
#define MDCMEPJLGOK_DDHFDPDHPMP_OFFSET UNITYSDK_OFFSET(0x16C76A20)
#define MDCMEPJLGOK_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x16C76910)
#define MDCMEPJLGOK_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x16C76EE0)
#define MDCMEPJLGOK_IOJCIGIHAOI_OFFSET UNITYSDK_OFFSET(0x16C76C80)
#define MDCMEPJLGOK_KOLGLKAFBNF_OFFSET UNITYSDK_OFFSET(0x16C769A0)
#define MDCMEPJLGOK_MLJGPAKIICA_OFFSET UNITYSDK_OFFSET(0x16C76950)
#define MDCMEPJLGOK_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x16C768D0)
#define MDCMEPJLGOK_ONBCJNAGKDH_OFFSET UNITYSDK_OFFSET(0x16C76A70)
#define MDCMEPJLGOK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C76890)

inline static constexpr unsigned int MDCMEPJLGOK_TypeDefinitionIndex = 38998;

class MDCMEPJLGOK : public ::System::Object
{
public:
	::MoleMole::SystemSettingEntryBase* DJAGBBJHLGD; // 0x10

	::System::Void _ctor(::MoleMole::SystemSettingEntryBase* BIPDGDLHLCI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SystemSettingEntryBase*))((::PBYTE)hIl2Cpp + MDCMEPJLGOK__CTOR_OFFSET))(this, BIPDGDLHLCI);
	}

	::HKIPDKIIDOD BCPLGOGNJIK()
	{
		return ((::HKIPDKIIDOD(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_BCPLGOGNJIK_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void MLJGPAKIICA(::System::Boolean FLMNJOFKIKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_MLJGPAKIICA_OFFSET))(this, FLMNJOFKIKI);
	}

	::System::Void KOLGLKAFBNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_KOLGLKAFBNF_OFFSET))(this);
	}

	::System::Void ALBDIDAMHEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_ALBDIDAMHEB_OFFSET))(this);
	}

	::System::Boolean DDHFDPDHPMP(::System::UInt32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_DDHFDPDHPMP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Object* ONBCJNAGKDH()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_ONBCJNAGKDH_OFFSET))(this);
	}

	::System::Void IOJCIGIHAOI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_IOJCIGIHAOI_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void AOMGAKKPFCJ(::System::Collections::Generic::Dictionary_2<::HPBIMDNDPLK, ::System::UInt32>* LKFNLCOFBCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::HPBIMDNDPLK, ::System::UInt32>*))((::PBYTE)hIl2Cpp + MDCMEPJLGOK_AOMGAKKPFCJ_OFFSET))(this, LKFNLCOFBCF);
	}
};
