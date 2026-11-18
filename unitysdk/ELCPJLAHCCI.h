#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EFGPBPKINFJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELCPJLAHCCI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ELCPJLAHCCI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F60B0)
#define ELCPJLAHCCI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELCPJLAHCCI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ELCPJLAHCCI_JLEJAHAENMK_1_OFFSET UNITYSDK_OFFSET(0x1A1A3B70)
#define ELCPJLAHCCI_JLEJAHAENMK_OFFSET UNITYSDK_OFFSET(0x1A1A3AD0)
#define ELCPJLAHCCI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F60F0)
#define ELCPJLAHCCI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F6100)
#define ELCPJLAHCCI___INIT_OFFSET UNITYSDK_OFFSET(0x7F6090)

inline static constexpr unsigned int ELCPJLAHCCI_TypeDefinitionIndex = 15793;

struct alignas(8) ELCPJLAHCCI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCPJLAHCCI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELCPJLAHCCI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::ELCPJLAHCCI JLEJAHAENMK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ELCPJLAHCCI EIFONLCJOPG)
	{
		return ((::ELCPJLAHCCI(*)(::FlatBuffers::ByteBuffer*, ::ELCPJLAHCCI))((::PBYTE)hIl2Cpp + ELCPJLAHCCI_JLEJAHAENMK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ELCPJLAHCCI JLEJAHAENMK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELCPJLAHCCI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELCPJLAHCCI_JLEJAHAENMK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EFGPBPKINFJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFGPBPKINFJ&))((::PBYTE)hIl2Cpp + ELCPJLAHCCI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCPJLAHCCI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::ELCPJLAHCCI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ELCPJLAHCCI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ELCPJLAHCCI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EFGPBPKINFJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EFGPBPKINFJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + ELCPJLAHCCI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCPJLAHCCI_PPOMNIFACOL_OFFSET))(this);
	}
};
