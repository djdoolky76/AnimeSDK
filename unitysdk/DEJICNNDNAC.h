#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/EBCGFIAOADM.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEJICNNDNAC_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define DEJICNNDNAC_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7AD830)
#define DEJICNNDNAC_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DEJICNNDNAC_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define DEJICNNDNAC_KGHJMFFJHBG_1_OFFSET UNITYSDK_OFFSET(0x1777E4E0)
#define DEJICNNDNAC_KGHJMFFJHBG_OFFSET UNITYSDK_OFFSET(0x1777E470)
#define DEJICNNDNAC_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7AD870)
#define DEJICNNDNAC_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7AD820)
#define DEJICNNDNAC___INIT_OFFSET UNITYSDK_OFFSET(0x7AD800)

inline static constexpr unsigned int DEJICNNDNAC_TypeDefinitionIndex = 16324;

struct alignas(8) DEJICNNDNAC
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJICNNDNAC_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEJICNNDNAC___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJICNNDNAC_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::DEJICNNDNAC BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEJICNNDNAC(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEJICNNDNAC_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::DEJICNNDNAC KGHJMFFJHBG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::DEJICNNDNAC(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEJICNNDNAC_KGHJMFFJHBG_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::DEJICNNDNAC KGHJMFFJHBG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::DEJICNNDNAC EIFONLCJOPG)
	{
		return ((::DEJICNNDNAC(*)(::FlatBuffers::ByteBuffer*, ::DEJICNNDNAC))((::PBYTE)hIl2Cpp + DEJICNNDNAC_KGHJMFFJHBG_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJICNNDNAC_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::EBCGFIAOADM& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBCGFIAOADM&))((::PBYTE)hIl2Cpp + DEJICNNDNAC_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::EBCGFIAOADM& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EBCGFIAOADM&, ::System::Int32&))((::PBYTE)hIl2Cpp + DEJICNNDNAC_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
