#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NCEJJIGLPIN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define POMBMJPLIFB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define POMBMJPLIFB_BHEKENDDMAI_1_OFFSET UNITYSDK_OFFSET(0x1F295360)
#define POMBMJPLIFB_BHEKENDDMAI_OFFSET UNITYSDK_OFFSET(0x1F2952C0)
#define POMBMJPLIFB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x963890)
#define POMBMJPLIFB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define POMBMJPLIFB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define POMBMJPLIFB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x963880)
#define POMBMJPLIFB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x9638D0)
#define POMBMJPLIFB___INIT_OFFSET UNITYSDK_OFFSET(0x963860)

inline static constexpr unsigned int POMBMJPLIFB_TypeDefinitionIndex = 11501;

struct alignas(8) POMBMJPLIFB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + POMBMJPLIFB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POMBMJPLIFB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::POMBMJPLIFB BHEKENDDMAI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::POMBMJPLIFB EIFONLCJOPG)
	{
		return ((::POMBMJPLIFB(*)(::FlatBuffers::ByteBuffer*, ::POMBMJPLIFB))((::PBYTE)hIl2Cpp + POMBMJPLIFB_BHEKENDDMAI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::POMBMJPLIFB BHEKENDDMAI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POMBMJPLIFB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POMBMJPLIFB_BHEKENDDMAI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::NCEJJIGLPIN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCEJJIGLPIN&, ::System::Int32&))((::PBYTE)hIl2Cpp + POMBMJPLIFB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::POMBMJPLIFB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::POMBMJPLIFB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + POMBMJPLIFB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POMBMJPLIFB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NCEJJIGLPIN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCEJJIGLPIN&))((::PBYTE)hIl2Cpp + POMBMJPLIFB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + POMBMJPLIFB_PPOMNIFACOL_OFFSET))(this);
	}
};
