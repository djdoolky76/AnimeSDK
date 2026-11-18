#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DOBLNPKPDFC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCGOFEIHBAI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FCGOFEIHBAI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A7770)
#define FCGOFEIHBAI_DMPJEKHCKLA_1_OFFSET UNITYSDK_OFFSET(0x17458050)
#define FCGOFEIHBAI_DMPJEKHCKLA_OFFSET UNITYSDK_OFFSET(0x17457FE0)
#define FCGOFEIHBAI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FCGOFEIHBAI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FCGOFEIHBAI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A77C0)
#define FCGOFEIHBAI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A77B0)
#define FCGOFEIHBAI___INIT_OFFSET UNITYSDK_OFFSET(0x7A7750)

inline static constexpr unsigned int FCGOFEIHBAI_TypeDefinitionIndex = 9989;

struct alignas(8) FCGOFEIHBAI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGOFEIHBAI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCGOFEIHBAI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DOBLNPKPDFC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOBLNPKPDFC&))((::PBYTE)hIl2Cpp + FCGOFEIHBAI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGOFEIHBAI_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::FCGOFEIHBAI DMPJEKHCKLA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCGOFEIHBAI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCGOFEIHBAI_DMPJEKHCKLA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::FCGOFEIHBAI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FCGOFEIHBAI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FCGOFEIHBAI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FCGOFEIHBAI DMPJEKHCKLA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FCGOFEIHBAI EIFONLCJOPG)
	{
		return ((::FCGOFEIHBAI(*)(::FlatBuffers::ByteBuffer*, ::FCGOFEIHBAI))((::PBYTE)hIl2Cpp + FCGOFEIHBAI_DMPJEKHCKLA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGOFEIHBAI_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DOBLNPKPDFC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DOBLNPKPDFC&, ::System::Int32&))((::PBYTE)hIl2Cpp + FCGOFEIHBAI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
