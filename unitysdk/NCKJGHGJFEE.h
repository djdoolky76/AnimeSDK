#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MEBBFONDHBG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCKJGHGJFEE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NCKJGHGJFEE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81A390)
#define NCKJGHGJFEE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCKJGHGJFEE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NCKJGHGJFEE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81A380)
#define NCKJGHGJFEE_OPFLPBPAFNE_1_OFFSET UNITYSDK_OFFSET(0x1BAA3CD0)
#define NCKJGHGJFEE_OPFLPBPAFNE_OFFSET UNITYSDK_OFFSET(0x1BAA3C30)
#define NCKJGHGJFEE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81A370)
#define NCKJGHGJFEE___INIT_OFFSET UNITYSDK_OFFSET(0x81A350)

inline static constexpr unsigned int NCKJGHGJFEE_TypeDefinitionIndex = 12484;

struct alignas(8) NCKJGHGJFEE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKJGHGJFEE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCKJGHGJFEE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKJGHGJFEE_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MEBBFONDHBG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEBBFONDHBG&, ::System::Int32&))((::PBYTE)hIl2Cpp + NCKJGHGJFEE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NCKJGHGJFEE OPFLPBPAFNE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NCKJGHGJFEE EIFONLCJOPG)
	{
		return ((::NCKJGHGJFEE(*)(::FlatBuffers::ByteBuffer*, ::NCKJGHGJFEE))((::PBYTE)hIl2Cpp + NCKJGHGJFEE_OPFLPBPAFNE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::NCKJGHGJFEE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCKJGHGJFEE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCKJGHGJFEE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MEBBFONDHBG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MEBBFONDHBG&))((::PBYTE)hIl2Cpp + NCKJGHGJFEE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCKJGHGJFEE_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NCKJGHGJFEE OPFLPBPAFNE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCKJGHGJFEE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCKJGHGJFEE_OPFLPBPAFNE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
