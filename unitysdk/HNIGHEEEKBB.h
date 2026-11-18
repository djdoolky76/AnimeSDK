#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/BNGNCPFLJDP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNIGHEEEKBB_ADMLCBFHEGH_1_OFFSET UNITYSDK_OFFSET(0x17479050)
#define HNIGHEEEKBB_ADMLCBFHEGH_OFFSET UNITYSDK_OFFSET(0x17478FB0)
#define HNIGHEEEKBB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HNIGHEEEKBB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8450)
#define HNIGHEEEKBB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HNIGHEEEKBB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HNIGHEEEKBB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A8440)
#define HNIGHEEEKBB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A8430)
#define HNIGHEEEKBB___INIT_OFFSET UNITYSDK_OFFSET(0x7A8410)

inline static constexpr unsigned int HNIGHEEEKBB_TypeDefinitionIndex = 13057;

struct alignas(8) HNIGHEEEKBB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIGHEEEKBB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNIGHEEEKBB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIGHEEEKBB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::BNGNCPFLJDP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BNGNCPFLJDP&))((::PBYTE)hIl2Cpp + HNIGHEEEKBB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIGHEEEKBB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::HNIGHEEEKBB ADMLCBFHEGH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HNIGHEEEKBB EIFONLCJOPG)
	{
		return ((::HNIGHEEEKBB(*)(::FlatBuffers::ByteBuffer*, ::HNIGHEEEKBB))((::PBYTE)hIl2Cpp + HNIGHEEEKBB_ADMLCBFHEGH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HNIGHEEEKBB ADMLCBFHEGH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNIGHEEEKBB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNIGHEEEKBB_ADMLCBFHEGH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::BNGNCPFLJDP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::BNGNCPFLJDP&, ::System::Int32&))((::PBYTE)hIl2Cpp + HNIGHEEEKBB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::HNIGHEEEKBB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HNIGHEEEKBB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HNIGHEEEKBB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
