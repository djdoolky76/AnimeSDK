#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNMOJONODNN.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }

#define CCCKKBIPEGI_EBPGEBLAGID_OFFSET UNITYSDK_OFFSET(0x145A8B30)
#define CCCKKBIPEGI_HHEMLIHIBLO_OFFSET UNITYSDK_OFFSET(0x145A8BE0)
#define CCCKKBIPEGI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x145A8B10)
#define CCCKKBIPEGI__CTOR_OFFSET UNITYSDK_OFFSET(0x145A8B00)

inline static constexpr unsigned int CCCKKBIPEGI_TypeDefinitionIndex = 78277;

class CCCKKBIPEGI : public ::System::Object
{
public:
	// static const ::System::Int32 GBAEPFDBEED = 0x10; // 0x0
	::System::Action* HBDIIHGJMJJ; // 0x10
	::System::Collections::Generic::LinkedListNode_1<::CCCKKBIPEGI*>* PDGFFHFIOHN; // 0x18
	::System::Int32 PMMGOAJJPJB; // 0x20
	::LNMOJONODNN EJBKEFHPEGC; // 0x24
	::System::Int32 FBBBOHAEDKA; // 0x28
	::System::Boolean MLAIPOLPHKL; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Int32 HJKKPICLJIJ; // 0x30
	::System::Boolean LMCDCPELIBE; // 0x34
	::System::Boolean MNFAOFHEIJH; // 0x35
	::System::UInt16 MIBJFNDFGHF; // 0x36
	::System::Int32 HDBOLPKPDCG; // 0x38
	::System::Int32 ADFHPGLEFHE; // 0x3C
	::System::Int32 JOONMJANAFE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCKKBIPEGI__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Action* PLBEAIIJADM, ::System::Int32 HPCILAJBBHH, ::LNMOJONODNN CFMBGCMCNMM, ::System::Boolean IACMFCBGLJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int32, ::LNMOJONODNN, ::System::Boolean))((::PBYTE)hIl2Cpp + CCCKKBIPEGI__CTOR_1_OFFSET))(this, PLBEAIIJADM, HPCILAJBBHH, CFMBGCMCNMM, IACMFCBGLJF);
	}

	::System::Void EBPGEBLAGID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCKKBIPEGI_EBPGEBLAGID_OFFSET))(this);
	}

	::System::Boolean HHEMLIHIBLO(::System::Int32 IIFMJFJOOCK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCCKKBIPEGI_HHEMLIHIBLO_OFFSET))(this, IIFMJFJOOCK);
	}
};
