#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EBAJAGPJKMJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LCKCHEBJPNJ_AIAFPNLIGLP_1_OFFSET UNITYSDK_OFFSET(0x18DF6A90)
#define LCKCHEBJPNJ_AIAFPNLIGLP_OFFSET UNITYSDK_OFFSET(0x18DF6A20)
#define LCKCHEBJPNJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define LCKCHEBJPNJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D73A0)
#define LCKCHEBJPNJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define LCKCHEBJPNJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define LCKCHEBJPNJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7D7380)
#define LCKCHEBJPNJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D7390)
#define LCKCHEBJPNJ___INIT_OFFSET UNITYSDK_OFFSET(0x7D7360)

inline static constexpr unsigned int LCKCHEBJPNJ_TypeDefinitionIndex = 11147;

struct alignas(8) LCKCHEBJPNJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKCHEBJPNJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKCHEBJPNJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::LCKCHEBJPNJ AIAFPNLIGLP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCKCHEBJPNJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKCHEBJPNJ_AIAFPNLIGLP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKCHEBJPNJ_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EBAJAGPJKMJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBAJAGPJKMJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + LCKCHEBJPNJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCKCHEBJPNJ_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EBAJAGPJKMJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBAJAGPJKMJ&))((::PBYTE)hIl2Cpp + LCKCHEBJPNJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::LCKCHEBJPNJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::LCKCHEBJPNJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LCKCHEBJPNJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::LCKCHEBJPNJ AIAFPNLIGLP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::LCKCHEBJPNJ EIFONLCJOPG)
	{
		return ((::LCKCHEBJPNJ(*)(::FlatBuffers::ByteBuffer*, ::LCKCHEBJPNJ))((::PBYTE)hIl2Cpp + LCKCHEBJPNJ_AIAFPNLIGLP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
