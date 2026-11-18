#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KPGKHKMMOON.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHDGLFOGIEC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PHDGLFOGIEC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81FD20)
#define PHDGLFOGIEC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PHDGLFOGIEC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PHDGLFOGIEC_LKNDMMLJMID_1_OFFSET UNITYSDK_OFFSET(0x1C0ADDB0)
#define PHDGLFOGIEC_LKNDMMLJMID_OFFSET UNITYSDK_OFFSET(0x1C0ADD40)
#define PHDGLFOGIEC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81FD10)
#define PHDGLFOGIEC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81FD00)
#define PHDGLFOGIEC___INIT_OFFSET UNITYSDK_OFFSET(0x81FCE0)

inline static constexpr unsigned int PHDGLFOGIEC_TypeDefinitionIndex = 14241;

struct alignas(8) PHDGLFOGIEC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDGLFOGIEC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHDGLFOGIEC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::PHDGLFOGIEC LKNDMMLJMID(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHDGLFOGIEC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHDGLFOGIEC_LKNDMMLJMID_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDGLFOGIEC_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KPGKHKMMOON& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPGKHKMMOON&, ::System::Int32&))((::PBYTE)hIl2Cpp + PHDGLFOGIEC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KPGKHKMMOON& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KPGKHKMMOON&))((::PBYTE)hIl2Cpp + PHDGLFOGIEC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::PHDGLFOGIEC LKNDMMLJMID_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PHDGLFOGIEC EIFONLCJOPG)
	{
		return ((::PHDGLFOGIEC(*)(::FlatBuffers::ByteBuffer*, ::PHDGLFOGIEC))((::PBYTE)hIl2Cpp + PHDGLFOGIEC_LKNDMMLJMID_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PHDGLFOGIEC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PHDGLFOGIEC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHDGLFOGIEC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDGLFOGIEC_GHKKNCCLPAN_OFFSET))(this);
	}
};
