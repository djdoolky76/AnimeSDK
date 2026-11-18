#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FBPBGHEIGHO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCACHLPPLNF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCACHLPPLNF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EE5C0)
#define FCACHLPPLNF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCACHLPPLNF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCACHLPPLNF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EE5B0)
#define FCACHLPPLNF_LNDHLBJBNIG_1_OFFSET UNITYSDK_OFFSET(0x19C1BF10)
#define FCACHLPPLNF_LNDHLBJBNIG_OFFSET UNITYSDK_OFFSET(0x19C1BE70)
#define FCACHLPPLNF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EE5A0)
#define FCACHLPPLNF___INIT_OFFSET UNITYSDK_OFFSET(0x7EE580)

inline static constexpr unsigned int FCACHLPPLNF_TypeDefinitionIndex = 15697;

struct alignas(8) FCACHLPPLNF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCACHLPPLNF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCACHLPPLNF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::FBPBGHEIGHO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBPBGHEIGHO&))((::PBYTE)hIl2Cpp + FCACHLPPLNF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::FCACHLPPLNF LNDHLBJBNIG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCACHLPPLNF EIFONLCJOPG)
	{
		return ((::FCACHLPPLNF(*)(::FlatBuffers::ByteBuffer*, ::FCACHLPPLNF))((::PBYTE)hIl2Cpp + FCACHLPPLNF_LNDHLBJBNIG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FCACHLPPLNF LNDHLBJBNIG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCACHLPPLNF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCACHLPPLNF_LNDHLBJBNIG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCACHLPPLNF_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCACHLPPLNF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::FBPBGHEIGHO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::FBPBGHEIGHO&, ::System::Int32&))((::PBYTE)hIl2Cpp + FCACHLPPLNF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FCACHLPPLNF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCACHLPPLNF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCACHLPPLNF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
