#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOHGMPIMCEF;
namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKHPFBPPPGP_ANJFDNJDBLF_OFFSET UNITYSDK_OFFSET(0x18741890)
#define JKHPFBPPPGP_IDGAGMBHEJJ_OFFSET UNITYSDK_OFFSET(0x18741830)
#define JKHPFBPPPGP_PPEODPIDBNE_OFFSET UNITYSDK_OFFSET(0x187418E0)
#define JKHPFBPPPGP__CTOR_OFFSET UNITYSDK_OFFSET(0x187417D0)

inline static constexpr unsigned int JKHPFBPPPGP_TypeDefinitionIndex = 39952;

class JKHPFBPPPGP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IKNHDJNPAJB; // 0x10
	::System::Action* LCHONDDCMKF; // 0x18
	::NOHGMPIMCEF* BIOEPNKAGLH; // 0x20
	::MoleMole::UICinemaPlayPageController* ALGCBKHJOHL; // 0x28
	::System::Action* BMNOOEHELHC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHPFBPPPGP__CTOR_OFFSET))(this);
	}

	::System::Void IDGAGMBHEJJ(::System::Action* MBCKCPNKDBJ, ::System::Action* CABCMJOAHCO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JKHPFBPPPGP_IDGAGMBHEJJ_OFFSET))(this, MBCKCPNKDBJ, CABCMJOAHCO);
	}

	::System::Void ANJFDNJDBLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHPFBPPPGP_ANJFDNJDBLF_OFFSET))(this);
	}

	::System::Void PPEODPIDBNE(::System::Int32 BIOCCLCHKLJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JKHPFBPPPGP_PPEODPIDBNE_OFFSET))(this, BIOCCLCHKLJ);
	}
};
