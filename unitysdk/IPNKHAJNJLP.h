#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IDMMDBKBADL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPNKHAJNJLP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IPNKHAJNJLP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x814CC0)
#define IPNKHAJNJLP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IPNKHAJNJLP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IPNKHAJNJLP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x814D00)
#define IPNKHAJNJLP_PENOMJDGNAP_1_OFFSET UNITYSDK_OFFSET(0x1B890A00)
#define IPNKHAJNJLP_PENOMJDGNAP_OFFSET UNITYSDK_OFFSET(0x1B890990)
#define IPNKHAJNJLP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x814D10)
#define IPNKHAJNJLP___INIT_OFFSET UNITYSDK_OFFSET(0x814CA0)

inline static constexpr unsigned int IPNKHAJNJLP_TypeDefinitionIndex = 15565;

struct alignas(8) IPNKHAJNJLP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNKHAJNJLP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPNKHAJNJLP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IPNKHAJNJLP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPNKHAJNJLP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPNKHAJNJLP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IDMMDBKBADL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IDMMDBKBADL&))((::PBYTE)hIl2Cpp + IPNKHAJNJLP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNKHAJNJLP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::IPNKHAJNJLP PENOMJDGNAP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IPNKHAJNJLP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IPNKHAJNJLP_PENOMJDGNAP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::IPNKHAJNJLP PENOMJDGNAP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IPNKHAJNJLP EIFONLCJOPG)
	{
		return ((::IPNKHAJNJLP(*)(::FlatBuffers::ByteBuffer*, ::IPNKHAJNJLP))((::PBYTE)hIl2Cpp + IPNKHAJNJLP_PENOMJDGNAP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IDMMDBKBADL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IDMMDBKBADL&, ::System::Int32&))((::PBYTE)hIl2Cpp + IPNKHAJNJLP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPNKHAJNJLP_PPOMNIFACOL_OFFSET))(this);
	}
};
