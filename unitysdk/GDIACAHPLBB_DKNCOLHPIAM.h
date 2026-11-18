#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDIACAHPLBB_DKNCOLHPIAM_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x11CA0F50)
#define GDIACAHPLBB_DKNCOLHPIAM_EFGOADGCJMA_OFFSET UNITYSDK_OFFSET(0x11CA10B0)
#define GDIACAHPLBB_DKNCOLHPIAM_FJMHCNINFPD_OFFSET UNITYSDK_OFFSET(0x11CA1150)
#define GDIACAHPLBB_DKNCOLHPIAM_GNDBFNDAPAL_OFFSET UNITYSDK_OFFSET(0x11CA0BF0)
#define GDIACAHPLBB_DKNCOLHPIAM_KGGHHODKELA_OFFSET UNITYSDK_OFFSET(0x11CA0D20)
#define GDIACAHPLBB_DKNCOLHPIAM_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x11CA1090)
#define GDIACAHPLBB_DKNCOLHPIAM_RESET_OFFSET UNITYSDK_OFFSET(0x11CA0A90)
#define GDIACAHPLBB_DKNCOLHPIAM__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA0B30)

inline static constexpr unsigned int GDIACAHPLBB_DKNCOLHPIAM_TypeDefinitionIndex = 73280;

class GDIACAHPLBB_DKNCOLHPIAM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::MoleMole::GameplayTag>* LCENBJBIEDC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKNCOLHPIAM__CTOR_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKNCOLHPIAM_RESET_OFFSET))(this);
	}

	::MoleMole::GameplayTag GNDBFNDAPAL(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::MoleMole::GameplayTag(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKNCOLHPIAM_GNDBFNDAPAL_OFFSET))(this, HPADNAEINPK);
	}

	::System::Boolean KGGHHODKELA(::MoleMole::GameplayTag AELLPLBJELA, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*& FGICKMCDOPM, ::System::Boolean BFIAPCFMNFG, ::System::Boolean DHLPHDPAHEO)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::GameplayTag, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKNCOLHPIAM_KGGHHODKELA_OFFSET))(this, AELLPLBJELA, FGICKMCDOPM, BFIAPCFMNFG, DHLPHDPAHEO);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKNCOLHPIAM_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKNCOLHPIAM_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Void EFGOADGCJMA(::MoleMole::EntityHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKNCOLHPIAM_EFGOADGCJMA_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void FJMHCNINFPD(::MoleMole::EntityHandle PHHDHIBOCKA, ::MoleMole::GameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + GDIACAHPLBB_DKNCOLHPIAM_FJMHCNINFPD_OFFSET))(this, PHHDHIBOCKA, AELLPLBJELA);
	}
};
