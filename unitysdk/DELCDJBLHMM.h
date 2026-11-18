#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CEBBCJDECCK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DELCDJBLHMM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DELCDJBLHMM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7625D0)
#define DELCDJBLHMM_CIKLABHALPE_1_OFFSET UNITYSDK_OFFSET(0x1574E820)
#define DELCDJBLHMM_CIKLABHALPE_OFFSET UNITYSDK_OFFSET(0x1574E680)
#define DELCDJBLHMM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DELCDJBLHMM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DELCDJBLHMM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x762620)
#define DELCDJBLHMM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x762610)
#define DELCDJBLHMM___INIT_OFFSET UNITYSDK_OFFSET(0x7625B0)

inline static constexpr unsigned int DELCDJBLHMM_TypeDefinitionIndex = 17355;

struct alignas(8) DELCDJBLHMM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELCDJBLHMM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DELCDJBLHMM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DELCDJBLHMM CIKLABHALPE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DELCDJBLHMM EIFONLCJOPG)
	{
		return ((::DELCDJBLHMM(*)(::FlatBuffers::ByteBuffer*, ::DELCDJBLHMM))((::PBYTE)hIl2Cpp + DELCDJBLHMM_CIKLABHALPE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DELCDJBLHMM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::DELCDJBLHMM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DELCDJBLHMM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DELCDJBLHMM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CEBBCJDECCK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CEBBCJDECCK&))((::PBYTE)hIl2Cpp + DELCDJBLHMM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::DELCDJBLHMM CIKLABHALPE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DELCDJBLHMM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DELCDJBLHMM_CIKLABHALPE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DELCDJBLHMM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CEBBCJDECCK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CEBBCJDECCK&, ::System::Int32&))((::PBYTE)hIl2Cpp + DELCDJBLHMM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
