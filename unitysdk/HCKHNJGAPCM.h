#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EPIAAKGJFMJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCKHNJGAPCM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HCKHNJGAPCM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8141A0)
#define HCKHNJGAPCM_ELKPMNAHGEC_1_OFFSET UNITYSDK_OFFSET(0x1B875260)
#define HCKHNJGAPCM_ELKPMNAHGEC_OFFSET UNITYSDK_OFFSET(0x1B875200)
#define HCKHNJGAPCM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCKHNJGAPCM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HCKHNJGAPCM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8141E0)
#define HCKHNJGAPCM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8141F0)
#define HCKHNJGAPCM___INIT_OFFSET UNITYSDK_OFFSET(0x814180)

inline static constexpr unsigned int HCKHNJGAPCM_TypeDefinitionIndex = 15146;

struct alignas(8) HCKHNJGAPCM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKHNJGAPCM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCKHNJGAPCM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::HCKHNJGAPCM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCKHNJGAPCM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCKHNJGAPCM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EPIAAKGJFMJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPIAAKGJFMJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + HCKHNJGAPCM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EPIAAKGJFMJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EPIAAKGJFMJ&))((::PBYTE)hIl2Cpp + HCKHNJGAPCM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKHNJGAPCM_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCKHNJGAPCM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::HCKHNJGAPCM ELKPMNAHGEC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HCKHNJGAPCM EIFONLCJOPG)
	{
		return ((::HCKHNJGAPCM(*)(::FlatBuffers::ByteBuffer*, ::HCKHNJGAPCM))((::PBYTE)hIl2Cpp + HCKHNJGAPCM_ELKPMNAHGEC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HCKHNJGAPCM ELKPMNAHGEC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCKHNJGAPCM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCKHNJGAPCM_ELKPMNAHGEC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
