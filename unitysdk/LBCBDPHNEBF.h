#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KOLCHENCFJH.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LBCBDPHNEBF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LBCBDPHNEBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8130D0)
#define LBCBDPHNEBF_EOGBFABNCBP_1_OFFSET UNITYSDK_OFFSET(0x1B7EBBB0)
#define LBCBDPHNEBF_EOGBFABNCBP_OFFSET UNITYSDK_OFFSET(0x1B7EBB10)
#define LBCBDPHNEBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LBCBDPHNEBF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LBCBDPHNEBF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8130C0)
#define LBCBDPHNEBF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8130B0)
#define LBCBDPHNEBF___INIT_OFFSET UNITYSDK_OFFSET(0x813090)

inline static constexpr unsigned int LBCBDPHNEBF_TypeDefinitionIndex = 11771;

struct alignas(8) LBCBDPHNEBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCBDPHNEBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBCBDPHNEBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCBDPHNEBF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KOLCHENCFJH& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOLCHENCFJH&, ::System::Int32&))((::PBYTE)hIl2Cpp + LBCBDPHNEBF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::LBCBDPHNEBF EOGBFABNCBP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LBCBDPHNEBF EIFONLCJOPG)
	{
		return ((::LBCBDPHNEBF(*)(::FlatBuffers::ByteBuffer*, ::LBCBDPHNEBF))((::PBYTE)hIl2Cpp + LBCBDPHNEBF_EOGBFABNCBP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::LBCBDPHNEBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBCBDPHNEBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBCBDPHNEBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCBDPHNEBF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KOLCHENCFJH& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KOLCHENCFJH&))((::PBYTE)hIl2Cpp + LBCBDPHNEBF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::LBCBDPHNEBF EOGBFABNCBP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LBCBDPHNEBF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LBCBDPHNEBF_EOGBFABNCBP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
