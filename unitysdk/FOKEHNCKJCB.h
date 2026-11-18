#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KGAOOEFHBBL.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOKEHNCKJCB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FOKEHNCKJCB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80D650)
#define FOKEHNCKJCB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FOKEHNCKJCB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FOKEHNCKJCB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x80D640)
#define FOKEHNCKJCB_NFCDGMKGHEG_1_OFFSET UNITYSDK_OFFSET(0x1B4CD700)
#define FOKEHNCKJCB_NFCDGMKGHEG_OFFSET UNITYSDK_OFFSET(0x1B4CD690)
#define FOKEHNCKJCB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80D630)
#define FOKEHNCKJCB___INIT_OFFSET UNITYSDK_OFFSET(0x80D610)

inline static constexpr unsigned int FOKEHNCKJCB_TypeDefinitionIndex = 16296;

struct alignas(8) FOKEHNCKJCB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKEHNCKJCB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOKEHNCKJCB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::FOKEHNCKJCB NFCDGMKGHEG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOKEHNCKJCB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOKEHNCKJCB_NFCDGMKGHEG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::FOKEHNCKJCB NFCDGMKGHEG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FOKEHNCKJCB EIFONLCJOPG)
	{
		return ((::FOKEHNCKJCB(*)(::FlatBuffers::ByteBuffer*, ::FOKEHNCKJCB))((::PBYTE)hIl2Cpp + FOKEHNCKJCB_NFCDGMKGHEG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KGAOOEFHBBL& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGAOOEFHBBL&))((::PBYTE)hIl2Cpp + FOKEHNCKJCB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKEHNCKJCB_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKEHNCKJCB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KGAOOEFHBBL& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGAOOEFHBBL&, ::System::Int32&))((::PBYTE)hIl2Cpp + FOKEHNCKJCB_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::FOKEHNCKJCB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FOKEHNCKJCB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FOKEHNCKJCB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
