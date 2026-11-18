#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IMAAAAPOCIG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DIEHKKLDENP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DIEHKKLDENP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x762710)
#define DIEHKKLDENP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DIEHKKLDENP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DIEHKKLDENP_KOMGDGIBGJP_1_OFFSET UNITYSDK_OFFSET(0x15751E20)
#define DIEHKKLDENP_KOMGDGIBGJP_OFFSET UNITYSDK_OFFSET(0x15751C80)
#define DIEHKKLDENP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x762750)
#define DIEHKKLDENP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x762760)
#define DIEHKKLDENP___INIT_OFFSET UNITYSDK_OFFSET(0x7626F0)

inline static constexpr unsigned int DIEHKKLDENP_TypeDefinitionIndex = 10535;

struct alignas(8) DIEHKKLDENP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEHKKLDENP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIEHKKLDENP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::DIEHKKLDENP KOMGDGIBGJP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DIEHKKLDENP EIFONLCJOPG)
	{
		return ((::DIEHKKLDENP(*)(::FlatBuffers::ByteBuffer*, ::DIEHKKLDENP))((::PBYTE)hIl2Cpp + DIEHKKLDENP_KOMGDGIBGJP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IMAAAAPOCIG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMAAAAPOCIG&))((::PBYTE)hIl2Cpp + DIEHKKLDENP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::DIEHKKLDENP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DIEHKKLDENP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIEHKKLDENP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEHKKLDENP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::DIEHKKLDENP KOMGDGIBGJP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DIEHKKLDENP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DIEHKKLDENP_KOMGDGIBGJP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IMAAAAPOCIG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMAAAAPOCIG&, ::System::Int32&))((::PBYTE)hIl2Cpp + DIEHKKLDENP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIEHKKLDENP_PPOMNIFACOL_OFFSET))(this);
	}
};
