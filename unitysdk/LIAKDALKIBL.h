#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MIOCKFABPMK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIAKDALKIBL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LIAKDALKIBL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8133F0)
#define LIAKDALKIBL_DPLJGLIOCEG_1_OFFSET UNITYSDK_OFFSET(0x1B7F0810)
#define LIAKDALKIBL_DPLJGLIOCEG_OFFSET UNITYSDK_OFFSET(0x1B7F0570)
#define LIAKDALKIBL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LIAKDALKIBL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LIAKDALKIBL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8133E0)
#define LIAKDALKIBL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813430)
#define LIAKDALKIBL___INIT_OFFSET UNITYSDK_OFFSET(0x8133C0)

inline static constexpr unsigned int LIAKDALKIBL_TypeDefinitionIndex = 15333;

struct alignas(8) LIAKDALKIBL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAKDALKIBL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIAKDALKIBL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAKDALKIBL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::LIAKDALKIBL DPLJGLIOCEG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LIAKDALKIBL EIFONLCJOPG)
	{
		return ((::LIAKDALKIBL(*)(::FlatBuffers::ByteBuffer*, ::LIAKDALKIBL))((::PBYTE)hIl2Cpp + LIAKDALKIBL_DPLJGLIOCEG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MIOCKFABPMK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MIOCKFABPMK&, ::System::Int32&))((::PBYTE)hIl2Cpp + LIAKDALKIBL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::LIAKDALKIBL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIAKDALKIBL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIAKDALKIBL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIAKDALKIBL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::LIAKDALKIBL DPLJGLIOCEG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LIAKDALKIBL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIAKDALKIBL_DPLJGLIOCEG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MIOCKFABPMK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MIOCKFABPMK&))((::PBYTE)hIl2Cpp + LIAKDALKIBL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
