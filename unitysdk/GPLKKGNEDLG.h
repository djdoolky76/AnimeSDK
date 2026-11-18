#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGHLEODMBD.h"

namespace System { class String; }

#define GPLKKGNEDLG_BMNLKDGNKIH_OFFSET UNITYSDK_OFFSET(0x15B34F80)
#define GPLKKGNEDLG_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x15B34F10)
#define GPLKKGNEDLG__CTOR_OFFSET UNITYSDK_OFFSET(0x15B34EC0)

inline static constexpr unsigned int GPLKKGNEDLG_TypeDefinitionIndex = 67918;

class GPLKKGNEDLG
{
public:
	::Il2CppArray<::System::String*>* OINAHKMPPJO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLKKGNEDLG__CTOR_OFFSET))(this);
	}

	::System::String* OMPFLKCBFHF(::DIGHLEODMBD KHGFAKJKDGG)
	{
		return ((::System::String*(*)(::PVOID, ::DIGHLEODMBD))((::PBYTE)hIl2Cpp + GPLKKGNEDLG_OMPFLKCBFHF_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Void BMNLKDGNKIH(::DIGHLEODMBD KHGFAKJKDGG, ::System::String* FCCLIEJAKLI)
	{
		return ((::System::Void(*)(::PVOID, ::DIGHLEODMBD, ::System::String*))((::PBYTE)hIl2Cpp + GPLKKGNEDLG_BMNLKDGNKIH_OFFSET))(this, KHGFAKJKDGG, FCCLIEJAKLI);
	}
};
