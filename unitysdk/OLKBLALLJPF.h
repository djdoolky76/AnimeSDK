#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MBNNAHPLBLM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLKBLALLJPF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OLKBLALLJPF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8038E0)
#define OLKBLALLJPF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OLKBLALLJPF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OLKBLALLJPF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x803920)
#define OLKBLALLJPF_PPKIDOKDAOD_1_OFFSET UNITYSDK_OFFSET(0x1AB375B0)
#define OLKBLALLJPF_PPKIDOKDAOD_OFFSET UNITYSDK_OFFSET(0x1AB37510)
#define OLKBLALLJPF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x803930)
#define OLKBLALLJPF___INIT_OFFSET UNITYSDK_OFFSET(0x8038C0)

inline static constexpr unsigned int OLKBLALLJPF_TypeDefinitionIndex = 10449;

struct alignas(8) OLKBLALLJPF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKBLALLJPF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLKBLALLJPF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MBNNAHPLBLM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MBNNAHPLBLM&))((::PBYTE)hIl2Cpp + OLKBLALLJPF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::OLKBLALLJPF PPKIDOKDAOD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OLKBLALLJPF EIFONLCJOPG)
	{
		return ((::OLKBLALLJPF(*)(::FlatBuffers::ByteBuffer*, ::OLKBLALLJPF))((::PBYTE)hIl2Cpp + OLKBLALLJPF_PPKIDOKDAOD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::OLKBLALLJPF PPKIDOKDAOD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLKBLALLJPF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLKBLALLJPF_PPKIDOKDAOD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKBLALLJPF_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::OLKBLALLJPF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OLKBLALLJPF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OLKBLALLJPF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MBNNAHPLBLM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MBNNAHPLBLM&, ::System::Int32&))((::PBYTE)hIl2Cpp + OLKBLALLJPF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKBLALLJPF_PPOMNIFACOL_OFFSET))(this);
	}
};
