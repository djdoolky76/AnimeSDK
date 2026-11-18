#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BFJILIKEIKB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAODOMHINIB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AAODOMHINIB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EC3E0)
#define AAODOMHINIB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AAODOMHINIB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AAODOMHINIB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EC3D0)
#define AAODOMHINIB_OMFHKHLLIGI_1_OFFSET UNITYSDK_OFFSET(0x19BD0CE0)
#define AAODOMHINIB_OMFHKHLLIGI_OFFSET UNITYSDK_OFFSET(0x19BD0C70)
#define AAODOMHINIB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EC420)
#define AAODOMHINIB___INIT_OFFSET UNITYSDK_OFFSET(0x7EC3B0)

inline static constexpr unsigned int AAODOMHINIB_TypeDefinitionIndex = 16635;

struct alignas(8) AAODOMHINIB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODOMHINIB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAODOMHINIB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::AAODOMHINIB OMFHKHLLIGI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAODOMHINIB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAODOMHINIB_OMFHKHLLIGI_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BFJILIKEIKB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFJILIKEIKB&, ::System::Int32&))((::PBYTE)hIl2Cpp + AAODOMHINIB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BFJILIKEIKB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BFJILIKEIKB&))((::PBYTE)hIl2Cpp + AAODOMHINIB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::AAODOMHINIB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AAODOMHINIB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AAODOMHINIB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODOMHINIB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AAODOMHINIB OMFHKHLLIGI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AAODOMHINIB EIFONLCJOPG)
	{
		return ((::AAODOMHINIB(*)(::FlatBuffers::ByteBuffer*, ::AAODOMHINIB))((::PBYTE)hIl2Cpp + AAODOMHINIB_OMFHKHLLIGI_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAODOMHINIB_GHKKNCCLPAN_OFFSET))(this);
	}
};
