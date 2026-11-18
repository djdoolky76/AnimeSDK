#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LHEAIILJOJD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BHCNFGDIIEI_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BHCNFGDIIEI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7B1A40)
#define BHCNFGDIIEI_GDBGJODIDDL_1_OFFSET UNITYSDK_OFFSET(0x17A7C150)
#define BHCNFGDIIEI_GDBGJODIDDL_OFFSET UNITYSDK_OFFSET(0x17A7C0B0)
#define BHCNFGDIIEI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BHCNFGDIIEI_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BHCNFGDIIEI_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7B1A80)
#define BHCNFGDIIEI_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7B1A30)
#define BHCNFGDIIEI___INIT_OFFSET UNITYSDK_OFFSET(0x7B1A10)

inline static constexpr unsigned int BHCNFGDIIEI_TypeDefinitionIndex = 16416;

struct alignas(8) BHCNFGDIIEI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNFGDIIEI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHCNFGDIIEI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNFGDIIEI_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BHCNFGDIIEI GDBGJODIDDL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BHCNFGDIIEI EIFONLCJOPG)
	{
		return ((::BHCNFGDIIEI(*)(::FlatBuffers::ByteBuffer*, ::BHCNFGDIIEI))((::PBYTE)hIl2Cpp + BHCNFGDIIEI_GDBGJODIDDL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::BHCNFGDIIEI GDBGJODIDDL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHCNFGDIIEI(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHCNFGDIIEI_GDBGJODIDDL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::BHCNFGDIIEI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BHCNFGDIIEI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BHCNFGDIIEI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LHEAIILJOJD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHEAIILJOJD&))((::PBYTE)hIl2Cpp + BHCNFGDIIEI_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCNFGDIIEI_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LHEAIILJOJD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LHEAIILJOJD&, ::System::Int32&))((::PBYTE)hIl2Cpp + BHCNFGDIIEI_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
