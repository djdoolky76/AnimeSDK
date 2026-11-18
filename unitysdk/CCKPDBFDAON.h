#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JCLEIOBKLOA.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CCKPDBFDAON_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define CCKPDBFDAON_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7658D0)
#define CCKPDBFDAON_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define CCKPDBFDAON_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define CCKPDBFDAON_LIDFBFOMCMK_1_OFFSET UNITYSDK_OFFSET(0x1578A9D0)
#define CCKPDBFDAON_LIDFBFOMCMK_OFFSET UNITYSDK_OFFSET(0x1578A7D0)
#define CCKPDBFDAON_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7658C0)
#define CCKPDBFDAON_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7658B0)
#define CCKPDBFDAON___INIT_OFFSET UNITYSDK_OFFSET(0x765890)

inline static constexpr unsigned int CCKPDBFDAON_TypeDefinitionIndex = 11219;

struct alignas(8) CCKPDBFDAON
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPDBFDAON_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCKPDBFDAON___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JCLEIOBKLOA& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCLEIOBKLOA&))((::PBYTE)hIl2Cpp + CCKPDBFDAON_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPDBFDAON_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::CCKPDBFDAON LIDFBFOMCMK(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::CCKPDBFDAON EIFONLCJOPG)
	{
		return ((::CCKPDBFDAON(*)(::FlatBuffers::ByteBuffer*, ::CCKPDBFDAON))((::PBYTE)hIl2Cpp + CCKPDBFDAON_LIDFBFOMCMK_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JCLEIOBKLOA& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCLEIOBKLOA&, ::System::Int32&))((::PBYTE)hIl2Cpp + CCKPDBFDAON_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKPDBFDAON_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::CCKPDBFDAON LIDFBFOMCMK_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCKPDBFDAON(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCKPDBFDAON_LIDFBFOMCMK_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::CCKPDBFDAON BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::CCKPDBFDAON(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CCKPDBFDAON_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
