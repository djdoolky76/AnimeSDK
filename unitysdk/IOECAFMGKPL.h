#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MCOJFCHPGIO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOECAFMGKPL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOECAFMGKPL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F8AA0)
#define IOECAFMGKPL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOECAFMGKPL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOECAFMGKPL_JPIKGOINELP_1_OFFSET UNITYSDK_OFFSET(0x1A4FE400)
#define IOECAFMGKPL_JPIKGOINELP_OFFSET UNITYSDK_OFFSET(0x1A4FE100)
#define IOECAFMGKPL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F8A90)
#define IOECAFMGKPL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F8A80)
#define IOECAFMGKPL___INIT_OFFSET UNITYSDK_OFFSET(0x7F8A60)

inline static constexpr unsigned int IOECAFMGKPL_TypeDefinitionIndex = 16423;

struct alignas(8) IOECAFMGKPL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOECAFMGKPL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOECAFMGKPL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IOECAFMGKPL JPIKGOINELP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOECAFMGKPL EIFONLCJOPG)
	{
		return ((::IOECAFMGKPL(*)(::FlatBuffers::ByteBuffer*, ::IOECAFMGKPL))((::PBYTE)hIl2Cpp + IOECAFMGKPL_JPIKGOINELP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOECAFMGKPL_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOECAFMGKPL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MCOJFCHPGIO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MCOJFCHPGIO&))((::PBYTE)hIl2Cpp + IOECAFMGKPL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MCOJFCHPGIO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MCOJFCHPGIO&, ::System::Int32&))((::PBYTE)hIl2Cpp + IOECAFMGKPL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::IOECAFMGKPL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOECAFMGKPL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOECAFMGKPL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IOECAFMGKPL JPIKGOINELP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOECAFMGKPL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOECAFMGKPL_JPIKGOINELP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
