#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MOOBMPFIDCB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKNFILMKBAL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PKNFILMKBAL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x938370)
#define PKNFILMKBAL_CBDJACDHOJG_1_OFFSET UNITYSDK_OFFSET(0x1EE07E90)
#define PKNFILMKBAL_CBDJACDHOJG_OFFSET UNITYSDK_OFFSET(0x1EE07C30)
#define PKNFILMKBAL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PKNFILMKBAL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PKNFILMKBAL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x9383B0)
#define PKNFILMKBAL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x938360)
#define PKNFILMKBAL___INIT_OFFSET UNITYSDK_OFFSET(0x938340)

inline static constexpr unsigned int PKNFILMKBAL_TypeDefinitionIndex = 14828;

struct alignas(8) PKNFILMKBAL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNFILMKBAL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKNFILMKBAL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNFILMKBAL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::PKNFILMKBAL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKNFILMKBAL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKNFILMKBAL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::PKNFILMKBAL CBDJACDHOJG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PKNFILMKBAL EIFONLCJOPG)
	{
		return ((::PKNFILMKBAL(*)(::FlatBuffers::ByteBuffer*, ::PKNFILMKBAL))((::PBYTE)hIl2Cpp + PKNFILMKBAL_CBDJACDHOJG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MOOBMPFIDCB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOOBMPFIDCB&))((::PBYTE)hIl2Cpp + PKNFILMKBAL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNFILMKBAL_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MOOBMPFIDCB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MOOBMPFIDCB&, ::System::Int32&))((::PBYTE)hIl2Cpp + PKNFILMKBAL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::PKNFILMKBAL CBDJACDHOJG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PKNFILMKBAL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKNFILMKBAL_CBDJACDHOJG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
