#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IMOAMPECMOE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLFCHLFNLFH_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BLFCHLFNLFH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x826800)
#define BLFCHLFNLFH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BLFCHLFNLFH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BLFCHLFNLFH_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x826840)
#define BLFCHLFNLFH_MIPMAOJFHJD_1_OFFSET UNITYSDK_OFFSET(0x1C51CD30)
#define BLFCHLFNLFH_MIPMAOJFHJD_OFFSET UNITYSDK_OFFSET(0x1C51CCC0)
#define BLFCHLFNLFH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8267F0)
#define BLFCHLFNLFH___INIT_OFFSET UNITYSDK_OFFSET(0x8267D0)

inline static constexpr unsigned int BLFCHLFNLFH_TypeDefinitionIndex = 14578;

struct alignas(8) BLFCHLFNLFH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCHLFNLFH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLFCHLFNLFH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BLFCHLFNLFH MIPMAOJFHJD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLFCHLFNLFH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLFCHLFNLFH_MIPMAOJFHJD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCHLFNLFH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::BLFCHLFNLFH MIPMAOJFHJD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BLFCHLFNLFH EIFONLCJOPG)
	{
		return ((::BLFCHLFNLFH(*)(::FlatBuffers::ByteBuffer*, ::BLFCHLFNLFH))((::PBYTE)hIl2Cpp + BLFCHLFNLFH_MIPMAOJFHJD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCHLFNLFH_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IMOAMPECMOE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMOAMPECMOE&))((::PBYTE)hIl2Cpp + BLFCHLFNLFH_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::BLFCHLFNLFH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BLFCHLFNLFH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BLFCHLFNLFH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IMOAMPECMOE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IMOAMPECMOE&, ::System::Int32&))((::PBYTE)hIl2Cpp + BLFCHLFNLFH_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
