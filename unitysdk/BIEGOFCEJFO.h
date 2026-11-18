#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NKNLKPKCBMK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIEGOFCEJFO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BIEGOFCEJFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E9F20)
#define BIEGOFCEJFO_DJGAKMACHOA_1_OFFSET UNITYSDK_OFFSET(0x19AC6B40)
#define BIEGOFCEJFO_DJGAKMACHOA_OFFSET UNITYSDK_OFFSET(0x19AC6AD0)
#define BIEGOFCEJFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BIEGOFCEJFO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BIEGOFCEJFO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7E9F00)
#define BIEGOFCEJFO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E9F10)
#define BIEGOFCEJFO___INIT_OFFSET UNITYSDK_OFFSET(0x7E9EE0)

inline static constexpr unsigned int BIEGOFCEJFO_TypeDefinitionIndex = 15673;

struct alignas(8) BIEGOFCEJFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEGOFCEJFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIEGOFCEJFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NKNLKPKCBMK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKNLKPKCBMK&, ::System::Int32&))((::PBYTE)hIl2Cpp + BIEGOFCEJFO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NKNLKPKCBMK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NKNLKPKCBMK&))((::PBYTE)hIl2Cpp + BIEGOFCEJFO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEGOFCEJFO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIEGOFCEJFO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::BIEGOFCEJFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIEGOFCEJFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIEGOFCEJFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::BIEGOFCEJFO DJGAKMACHOA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BIEGOFCEJFO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BIEGOFCEJFO_DJGAKMACHOA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BIEGOFCEJFO DJGAKMACHOA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BIEGOFCEJFO EIFONLCJOPG)
	{
		return ((::BIEGOFCEJFO(*)(::FlatBuffers::ByteBuffer*, ::BIEGOFCEJFO))((::PBYTE)hIl2Cpp + BIEGOFCEJFO_DJGAKMACHOA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
