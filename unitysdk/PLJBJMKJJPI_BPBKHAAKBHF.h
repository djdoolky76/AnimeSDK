#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IPDBFGGDHIF;
namespace Foundation { class IDownloader; }
namespace MoleMole { class UILoginMessageBoxPopWindowController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PLJBJMKJJPI_BPBKHAAKBHF_GFMEKEMGPKH_OFFSET UNITYSDK_OFFSET(0x1C691A60)
#define PLJBJMKJJPI_BPBKHAAKBHF_HJMCNFLMLBN_OFFSET UNITYSDK_OFFSET(0x1C691880)
#define PLJBJMKJJPI_BPBKHAAKBHF_ICGNMLBHPDB_OFFSET UNITYSDK_OFFSET(0x1C6916D0)
#define PLJBJMKJJPI_BPBKHAAKBHF_IOPDKEHKJBC_OFFSET UNITYSDK_OFFSET(0x1C691D50)
#define PLJBJMKJJPI_BPBKHAAKBHF_KHLFNOPLMJF_OFFSET UNITYSDK_OFFSET(0x1C6916F0)
#define PLJBJMKJJPI_BPBKHAAKBHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6916C0)

inline static constexpr unsigned int PLJBJMKJJPI_BPBKHAAKBHF_TypeDefinitionIndex = 49865;

class PLJBJMKJJPI_BPBKHAAKBHF : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10
	::System::Action* PCJALOCECEF; // 0x18
	::MoleMole::UILoginMessageBoxPopWindowController* EHIFHJDLKGD; // 0x20
	::Foundation::IDownloader* KNFEDLAPDJN; // 0x28
	::IPDBFGGDHIF* KAJOEJAFOFN; // 0x30
	::System::Action* AEPKIFBFCOD; // 0x38
	::System::Int64 ECLLNPPFCJB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJBJMKJJPI_BPBKHAAKBHF__CTOR_OFFSET))(this);
	}

	::System::Void ICGNMLBHPDB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJBJMKJJPI_BPBKHAAKBHF_ICGNMLBHPDB_OFFSET))(this);
	}

	::System::Void KHLFNOPLMJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJBJMKJJPI_BPBKHAAKBHF_KHLFNOPLMJF_OFFSET))(this);
	}

	::System::Void HJMCNFLMLBN(::System::Int32 DMHCNCHBEGK, ::System::String* BHDNBGLCNOM, ::System::Action_1<::System::Boolean>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PLJBJMKJJPI_BPBKHAAKBHF_HJMCNFLMLBN_OFFSET))(this, DMHCNCHBEGK, BHDNBGLCNOM, GJBHEJGENMI);
	}

	::System::Void GFMEKEMGPKH(::System::Int64 OEEKNBCONAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PLJBJMKJJPI_BPBKHAAKBHF_GFMEKEMGPKH_OFFSET))(this, OEEKNBCONAO);
	}

	::System::Void IOPDKEHKJBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLJBJMKJJPI_BPBKHAAKBHF_IOPDKEHKJBC_OFFSET))(this);
	}
};
