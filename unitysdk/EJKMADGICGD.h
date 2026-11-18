#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/CAJHEJINMDF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJKMADGICGD_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EJKMADGICGD_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x807BE0)
#define EJKMADGICGD_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJKMADGICGD_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EJKMADGICGD_KELCEELOOON_1_OFFSET UNITYSDK_OFFSET(0x1ADD3830)
#define EJKMADGICGD_KELCEELOOON_OFFSET UNITYSDK_OFFSET(0x1ADD3790)
#define EJKMADGICGD_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x807BD0)
#define EJKMADGICGD_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x807C20)
#define EJKMADGICGD___INIT_OFFSET UNITYSDK_OFFSET(0x807BB0)

inline static constexpr unsigned int EJKMADGICGD_TypeDefinitionIndex = 9955;

struct alignas(8) EJKMADGICGD
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKMADGICGD_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJKMADGICGD___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::CAJHEJINMDF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CAJHEJINMDF&, ::System::Int32&))((::PBYTE)hIl2Cpp + EJKMADGICGD_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EJKMADGICGD KELCEELOOON(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EJKMADGICGD EIFONLCJOPG)
	{
		return ((::EJKMADGICGD(*)(::FlatBuffers::ByteBuffer*, ::EJKMADGICGD))((::PBYTE)hIl2Cpp + EJKMADGICGD_KELCEELOOON_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EJKMADGICGD BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJKMADGICGD(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJKMADGICGD_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::EJKMADGICGD KELCEELOOON_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJKMADGICGD(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJKMADGICGD_KELCEELOOON_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKMADGICGD_GHKKNCCLPAN_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKMADGICGD_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::CAJHEJINMDF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::CAJHEJINMDF&))((::PBYTE)hIl2Cpp + EJKMADGICGD_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
