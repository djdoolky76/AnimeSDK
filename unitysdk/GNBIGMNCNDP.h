#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AJPBPJCLFFD.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNBIGMNCNDP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GNBIGMNCNDP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x78B2D0)
#define GNBIGMNCNDP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNBIGMNCNDP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GNBIGMNCNDP_KJJKMHFGLHP_1_OFFSET UNITYSDK_OFFSET(0x166516D0)
#define GNBIGMNCNDP_KJJKMHFGLHP_OFFSET UNITYSDK_OFFSET(0x166513D0)
#define GNBIGMNCNDP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x78B2C0)
#define GNBIGMNCNDP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x78B310)
#define GNBIGMNCNDP___INIT_OFFSET UNITYSDK_OFFSET(0x78B2A0)

inline static constexpr unsigned int GNBIGMNCNDP_TypeDefinitionIndex = 10948;

struct alignas(8) GNBIGMNCNDP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBIGMNCNDP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBIGMNCNDP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::GNBIGMNCNDP KJJKMHFGLHP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GNBIGMNCNDP EIFONLCJOPG)
	{
		return ((::GNBIGMNCNDP(*)(::FlatBuffers::ByteBuffer*, ::GNBIGMNCNDP))((::PBYTE)hIl2Cpp + GNBIGMNCNDP_KJJKMHFGLHP_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::AJPBPJCLFFD& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJPBPJCLFFD&, ::System::Int32&))((::PBYTE)hIl2Cpp + GNBIGMNCNDP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::GNBIGMNCNDP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNBIGMNCNDP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBIGMNCNDP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBIGMNCNDP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::AJPBPJCLFFD& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::AJPBPJCLFFD&))((::PBYTE)hIl2Cpp + GNBIGMNCNDP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::GNBIGMNCNDP KJJKMHFGLHP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNBIGMNCNDP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBIGMNCNDP_KJJKMHFGLHP_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBIGMNCNDP_PPOMNIFACOL_OFFSET))(this);
	}
};
