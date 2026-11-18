#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MAGDEKBPCPM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADKJIMJBEII_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define ADKJIMJBEII_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F9130)
#define ADKJIMJBEII_DCPGEJPOOGL_1_OFFSET UNITYSDK_OFFSET(0x1A513FD0)
#define ADKJIMJBEII_DCPGEJPOOGL_OFFSET UNITYSDK_OFFSET(0x1A513F30)
#define ADKJIMJBEII_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ADKJIMJBEII_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ADKJIMJBEII_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F9170)
#define ADKJIMJBEII_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F9180)
#define ADKJIMJBEII___INIT_OFFSET UNITYSDK_OFFSET(0x7F9110)

inline static constexpr unsigned int ADKJIMJBEII_TypeDefinitionIndex = 13980;

struct alignas(8) ADKJIMJBEII
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJIMJBEII_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADKJIMJBEII___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::MAGDEKBPCPM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MAGDEKBPCPM&))((::PBYTE)hIl2Cpp + ADKJIMJBEII_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJIMJBEII_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ADKJIMJBEII DCPGEJPOOGL(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ADKJIMJBEII EIFONLCJOPG)
	{
		return ((::ADKJIMJBEII(*)(::FlatBuffers::ByteBuffer*, ::ADKJIMJBEII))((::PBYTE)hIl2Cpp + ADKJIMJBEII_DCPGEJPOOGL_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::ADKJIMJBEII DCPGEJPOOGL_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADKJIMJBEII(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADKJIMJBEII_DCPGEJPOOGL_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::ADKJIMJBEII BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ADKJIMJBEII(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ADKJIMJBEII_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::MAGDEKBPCPM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MAGDEKBPCPM&, ::System::Int32&))((::PBYTE)hIl2Cpp + ADKJIMJBEII_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJIMJBEII_PPOMNIFACOL_OFFSET))(this);
	}
};
