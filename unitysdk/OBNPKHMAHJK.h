#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OIJDOLJKPNB.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBNPKHMAHJK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define OBNPKHMAHJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x763F50)
#define OBNPKHMAHJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define OBNPKHMAHJK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define OBNPKHMAHJK_HJMBHFPBCNM_1_OFFSET UNITYSDK_OFFSET(0x1D0CABE0)
#define OBNPKHMAHJK_HJMBHFPBCNM_OFFSET UNITYSDK_OFFSET(0x1D0D0230)
#define OBNPKHMAHJK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8AF390)
#define OBNPKHMAHJK___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int OBNPKHMAHJK_TypeDefinitionIndex = 15585;

struct alignas(8) OBNPKHMAHJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNPKHMAHJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBNPKHMAHJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNPKHMAHJK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::OBNPKHMAHJK HJMBHFPBCNM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::OBNPKHMAHJK EIFONLCJOPG)
	{
		return ((::OBNPKHMAHJK(*)(::FlatBuffers::ByteBuffer*, ::OBNPKHMAHJK))((::PBYTE)hIl2Cpp + OBNPKHMAHJK_HJMBHFPBCNM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::OBNPKHMAHJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBNPKHMAHJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBNPKHMAHJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::OBNPKHMAHJK HJMBHFPBCNM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::OBNPKHMAHJK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OBNPKHMAHJK_HJMBHFPBCNM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OIJDOLJKPNB& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OIJDOLJKPNB&))((::PBYTE)hIl2Cpp + OBNPKHMAHJK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::String* MCOHLHMKLIP, ::OIJDOLJKPNB& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::OIJDOLJKPNB&, ::System::Int32&))((::PBYTE)hIl2Cpp + OBNPKHMAHJK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
