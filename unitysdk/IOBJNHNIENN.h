#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CIKOPGLIONH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IOBJNHNIENN_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IOBJNHNIENN_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80AA30)
#define IOBJNHNIENN_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IOBJNHNIENN_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IOBJNHNIENN_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80AA70)
#define IOBJNHNIENN_OIKKALDALGD_1_OFFSET UNITYSDK_OFFSET(0x1B1336E0)
#define IOBJNHNIENN_OIKKALDALGD_OFFSET UNITYSDK_OFFSET(0x1B133540)
#define IOBJNHNIENN_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80AA20)
#define IOBJNHNIENN___INIT_OFFSET UNITYSDK_OFFSET(0x80AA00)

inline static constexpr unsigned int IOBJNHNIENN_TypeDefinitionIndex = 17399;

struct alignas(8) IOBJNHNIENN
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBJNHNIENN_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOBJNHNIENN___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::IOBJNHNIENN OIKKALDALGD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IOBJNHNIENN EIFONLCJOPG)
	{
		return ((::IOBJNHNIENN(*)(::FlatBuffers::ByteBuffer*, ::IOBJNHNIENN))((::PBYTE)hIl2Cpp + IOBJNHNIENN_OIKKALDALGD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBJNHNIENN_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CIKOPGLIONH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CIKOPGLIONH&))((::PBYTE)hIl2Cpp + IOBJNHNIENN_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IOBJNHNIENN BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOBJNHNIENN(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOBJNHNIENN_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IOBJNHNIENN OIKKALDALGD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IOBJNHNIENN(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IOBJNHNIENN_OIKKALDALGD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CIKOPGLIONH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CIKOPGLIONH&, ::System::Int32&))((::PBYTE)hIl2Cpp + IOBJNHNIENN_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBJNHNIENN_GHKKNCCLPAN_OFFSET))(this);
	}
};
