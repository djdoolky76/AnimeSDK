#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OBKDGBNBEGB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BGGFOAONJJF_ABFGKCBDPIA_1_OFFSET UNITYSDK_OFFSET(0x19BE61E0)
#define BGGFOAONJJF_ABFGKCBDPIA_OFFSET UNITYSDK_OFFSET(0x19BE6170)
#define BGGFOAONJJF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define BGGFOAONJJF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ED030)
#define BGGFOAONJJF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define BGGFOAONJJF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define BGGFOAONJJF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7ED070)
#define BGGFOAONJJF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ED080)
#define BGGFOAONJJF___INIT_OFFSET UNITYSDK_OFFSET(0x7ED010)

inline static constexpr unsigned int BGGFOAONJJF_TypeDefinitionIndex = 12365;

struct alignas(8) BGGFOAONJJF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGFOAONJJF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGGFOAONJJF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::BGGFOAONJJF ABFGKCBDPIA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGGFOAONJJF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGGFOAONJJF_ABFGKCBDPIA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::BGGFOAONJJF ABFGKCBDPIA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::BGGFOAONJJF EIFONLCJOPG)
	{
		return ((::BGGFOAONJJF(*)(::FlatBuffers::ByteBuffer*, ::BGGFOAONJJF))((::PBYTE)hIl2Cpp + BGGFOAONJJF_ABFGKCBDPIA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::BGGFOAONJJF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::BGGFOAONJJF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BGGFOAONJJF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OBKDGBNBEGB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBKDGBNBEGB&, ::System::Int32&))((::PBYTE)hIl2Cpp + BGGFOAONJJF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGFOAONJJF_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGFOAONJJF_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OBKDGBNBEGB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBKDGBNBEGB&))((::PBYTE)hIl2Cpp + BGGFOAONJJF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}
};
