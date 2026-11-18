#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KGIJHCAJJNP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNNKANIDIJK_BEJKCHNIBJA_1_OFFSET UNITYSDK_OFFSET(0x160EDC60)
#define GNNKANIDIJK_BEJKCHNIBJA_OFFSET UNITYSDK_OFFSET(0x160EDBF0)
#define GNNKANIDIJK_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GNNKANIDIJK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7797E0)
#define GNNKANIDIJK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNNKANIDIJK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GNNKANIDIJK_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x779820)
#define GNNKANIDIJK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x779830)
#define GNNKANIDIJK___INIT_OFFSET UNITYSDK_OFFSET(0x7797C0)

inline static constexpr unsigned int GNNKANIDIJK_TypeDefinitionIndex = 11888;

struct alignas(8) GNNKANIDIJK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNKANIDIJK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNNKANIDIJK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::GNNKANIDIJK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNNKANIDIJK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNNKANIDIJK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::KGIJHCAJJNP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGIJHCAJJNP&, ::System::Int32&))((::PBYTE)hIl2Cpp + GNNKANIDIJK_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNKANIDIJK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::GNNKANIDIJK BEJKCHNIBJA(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNNKANIDIJK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNNKANIDIJK_BEJKCHNIBJA_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::KGIJHCAJJNP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::KGIJHCAJJNP&))((::PBYTE)hIl2Cpp + GNNKANIDIJK_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNKANIDIJK_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::GNNKANIDIJK BEJKCHNIBJA_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GNNKANIDIJK EIFONLCJOPG)
	{
		return ((::GNNKANIDIJK(*)(::FlatBuffers::ByteBuffer*, ::GNNKANIDIJK))((::PBYTE)hIl2Cpp + GNNKANIDIJK_BEJKCHNIBJA_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
