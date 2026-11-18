#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PJLNBLHPFBF.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NLHMDOIAOFO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define NLHMDOIAOFO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EFE30)
#define NLHMDOIAOFO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NLHMDOIAOFO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NLHMDOIAOFO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7EFE70)
#define NLHMDOIAOFO_POBKLNDKNDK_1_OFFSET UNITYSDK_OFFSET(0x19DC8240)
#define NLHMDOIAOFO_POBKLNDKNDK_OFFSET UNITYSDK_OFFSET(0x19DC8080)
#define NLHMDOIAOFO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EFE80)
#define NLHMDOIAOFO___INIT_OFFSET UNITYSDK_OFFSET(0x7EFE10)

inline static constexpr unsigned int NLHMDOIAOFO_TypeDefinitionIndex = 12225;

struct alignas(8) NLHMDOIAOFO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHMDOIAOFO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLHMDOIAOFO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::PJLNBLHPFBF& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJLNBLHPFBF&))((::PBYTE)hIl2Cpp + NLHMDOIAOFO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::NLHMDOIAOFO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLHMDOIAOFO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLHMDOIAOFO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHMDOIAOFO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NLHMDOIAOFO POBKLNDKNDK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NLHMDOIAOFO EIFONLCJOPG)
	{
		return ((::NLHMDOIAOFO(*)(::FlatBuffers::ByteBuffer*, ::NLHMDOIAOFO))((::PBYTE)hIl2Cpp + NLHMDOIAOFO_POBKLNDKNDK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::PJLNBLHPFBF& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::PJLNBLHPFBF&, ::System::Int32&))((::PBYTE)hIl2Cpp + NLHMDOIAOFO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::NLHMDOIAOFO POBKLNDKNDK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NLHMDOIAOFO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NLHMDOIAOFO_POBKLNDKNDK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHMDOIAOFO_PPOMNIFACOL_OFFSET))(this);
	}
};
