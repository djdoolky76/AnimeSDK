#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EHAMACLPFFI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIKGEADGHHA_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define AIKGEADGHHA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D0010)
#define AIKGEADGHHA_ECMBOMLPHLB_1_OFFSET UNITYSDK_OFFSET(0x1876DCA0)
#define AIKGEADGHHA_ECMBOMLPHLB_OFFSET UNITYSDK_OFFSET(0x1876DC30)
#define AIKGEADGHHA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AIKGEADGHHA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define AIKGEADGHHA_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D0050)
#define AIKGEADGHHA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D0060)
#define AIKGEADGHHA___INIT_OFFSET UNITYSDK_OFFSET(0x7CFFF0)

inline static constexpr unsigned int AIKGEADGHHA_TypeDefinitionIndex = 10170;

struct alignas(8) AIKGEADGHHA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGEADGHHA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIKGEADGHHA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::AIKGEADGHHA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIKGEADGHHA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIKGEADGHHA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::AIKGEADGHHA ECMBOMLPHLB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::AIKGEADGHHA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIKGEADGHHA_ECMBOMLPHLB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EHAMACLPFFI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHAMACLPFFI&, ::System::Int32&))((::PBYTE)hIl2Cpp + AIKGEADGHHA_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGEADGHHA_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EHAMACLPFFI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHAMACLPFFI&))((::PBYTE)hIl2Cpp + AIKGEADGHHA_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKGEADGHHA_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::AIKGEADGHHA ECMBOMLPHLB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::AIKGEADGHHA EIFONLCJOPG)
	{
		return ((::AIKGEADGHHA(*)(::FlatBuffers::ByteBuffer*, ::AIKGEADGHHA))((::PBYTE)hIl2Cpp + AIKGEADGHHA_ECMBOMLPHLB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
