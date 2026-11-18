#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/LBOKPINMNOA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOFIJGHMEJJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GOFIJGHMEJJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81B440)
#define GOFIJGHMEJJ_BJPCGCHLIFJ_1_OFFSET UNITYSDK_OFFSET(0x1BAD2690)
#define GOFIJGHMEJJ_BJPCGCHLIFJ_OFFSET UNITYSDK_OFFSET(0x1BAD2620)
#define GOFIJGHMEJJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GOFIJGHMEJJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GOFIJGHMEJJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81B430)
#define GOFIJGHMEJJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81B480)
#define GOFIJGHMEJJ___INIT_OFFSET UNITYSDK_OFFSET(0x81B410)

inline static constexpr unsigned int GOFIJGHMEJJ_TypeDefinitionIndex = 16280;

struct alignas(8) GOFIJGHMEJJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFIJGHMEJJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOFIJGHMEJJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFIJGHMEJJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::LBOKPINMNOA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LBOKPINMNOA&, ::System::Int32&))((::PBYTE)hIl2Cpp + GOFIJGHMEJJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GOFIJGHMEJJ BJPCGCHLIFJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOFIJGHMEJJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOFIJGHMEJJ_BJPCGCHLIFJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::LBOKPINMNOA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::LBOKPINMNOA&))((::PBYTE)hIl2Cpp + GOFIJGHMEJJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::GOFIJGHMEJJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GOFIJGHMEJJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GOFIJGHMEJJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GOFIJGHMEJJ BJPCGCHLIFJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GOFIJGHMEJJ EIFONLCJOPG)
	{
		return ((::GOFIJGHMEJJ(*)(::FlatBuffers::ByteBuffer*, ::GOFIJGHMEJJ))((::PBYTE)hIl2Cpp + GOFIJGHMEJJ_BJPCGCHLIFJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFIJGHMEJJ_PPOMNIFACOL_OFFSET))(this);
	}
};
