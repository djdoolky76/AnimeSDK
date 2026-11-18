#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EHGMFGHIOAO.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBHGJOKBPGE_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FBHGJOKBPGE_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D1420)
#define FBHGJOKBPGE_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FBHGJOKBPGE_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FBHGJOKBPGE_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D1400)
#define FBHGJOKBPGE_OCKHGHOOJMP_1_OFFSET UNITYSDK_OFFSET(0x187B3990)
#define FBHGJOKBPGE_OCKHGHOOJMP_OFFSET UNITYSDK_OFFSET(0x187B3920)
#define FBHGJOKBPGE_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D1410)
#define FBHGJOKBPGE___INIT_OFFSET UNITYSDK_OFFSET(0x7D13E0)

inline static constexpr unsigned int FBHGJOKBPGE_TypeDefinitionIndex = 17244;

struct alignas(8) FBHGJOKBPGE
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHGJOKBPGE_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBHGJOKBPGE___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EHGMFGHIOAO& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHGMFGHIOAO&, ::System::Int32&))((::PBYTE)hIl2Cpp + FBHGJOKBPGE_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::FBHGJOKBPGE OCKHGHOOJMP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBHGJOKBPGE(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBHGJOKBPGE_OCKHGHOOJMP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHGJOKBPGE_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::FBHGJOKBPGE BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FBHGJOKBPGE(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBHGJOKBPGE_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::FBHGJOKBPGE OCKHGHOOJMP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FBHGJOKBPGE EIFONLCJOPG)
	{
		return ((::FBHGJOKBPGE(*)(::FlatBuffers::ByteBuffer*, ::FBHGJOKBPGE))((::PBYTE)hIl2Cpp + FBHGJOKBPGE_OCKHGHOOJMP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBHGJOKBPGE_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EHGMFGHIOAO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EHGMFGHIOAO&))((::PBYTE)hIl2Cpp + FBHGJOKBPGE_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
