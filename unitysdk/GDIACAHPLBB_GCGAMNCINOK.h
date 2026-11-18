#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDIACAHPLBB_GCGAMNCINOK_FIKEOKFDCGE_OFFSET UNITYSDK_OFFSET(0x6543F0)
#define GDIACAHPLBB_GCGAMNCINOK_HNFAPPAHNKF_OFFSET UNITYSDK_OFFSET(0x654410)
#define GDIACAHPLBB_GCGAMNCINOK_JDDPJGAIBIC_OFFSET UNITYSDK_OFFSET(0x654450)
#define GDIACAHPLBB_GCGAMNCINOK_MCJGGBMPMKC_OFFSET UNITYSDK_OFFSET(0x654430)
#define GDIACAHPLBB_GCGAMNCINOK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x6543E0)

inline static constexpr unsigned int GDIACAHPLBB_GCGAMNCINOK_TypeDefinitionIndex = 73282;

struct alignas(8) GDIACAHPLBB_GCGAMNCINOK
{
	::MoleMole::GameplayTag HFEIPMCNCNI; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* LFNJKLCBNPG; // 0x20

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GCGAMNCINOK_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean FIKEOKFDCGE(::MoleMole::GameplayTag AELLPLBJELA, ::System::Boolean BFIAPCFMNFG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GCGAMNCINOK_FIKEOKFDCGE_OFFSET))(this, AELLPLBJELA, BFIAPCFMNFG);
	}

	::System::Boolean HNFAPPAHNKF(::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GCGAMNCINOK_HNFAPPAHNKF_OFFSET))(this, AELLPLBJELA);
	}

	::System::Boolean MCJGGBMPMKC(::MoleMole::GameplayTag AELLPLBJELA, ::System::Boolean BFIAPCFMNFG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GCGAMNCINOK_MCJGGBMPMKC_OFFSET))(this, AELLPLBJELA, BFIAPCFMNFG);
	}

	::System::Boolean JDDPJGAIBIC(::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*& JMDOANHOEJG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*&))((::PBYTE)hIl2Cpp + GDIACAHPLBB_GCGAMNCINOK_JDDPJGAIBIC_OFFSET))(this, JMDOANHOEJG);
	}
};
