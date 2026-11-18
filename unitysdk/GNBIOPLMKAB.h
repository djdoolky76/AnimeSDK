#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NCPEEIPPCIK.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNBIOPLMKAB_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define GNBIOPLMKAB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x813FF0)
#define GNBIOPLMKAB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GNBIOPLMKAB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define GNBIOPLMKAB_KDOIGBANKCD_1_OFFSET UNITYSDK_OFFSET(0x1B871C40)
#define GNBIOPLMKAB_KDOIGBANKCD_OFFSET UNITYSDK_OFFSET(0x1B871BD0)
#define GNBIOPLMKAB_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x813FD0)
#define GNBIOPLMKAB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x813FE0)
#define GNBIOPLMKAB___INIT_OFFSET UNITYSDK_OFFSET(0x813FB0)

inline static constexpr unsigned int GNBIOPLMKAB_TypeDefinitionIndex = 10213;

struct alignas(8) GNBIOPLMKAB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBIOPLMKAB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBIOPLMKAB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBIOPLMKAB_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::NCPEEIPPCIK& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NCPEEIPPCIK&))((::PBYTE)hIl2Cpp + GNBIOPLMKAB_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 ELEBBOIOJCJ, ::System::Int32 EEKCIKAFLJM, ::NCPEEIPPCIK& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::NCPEEIPPCIK&, ::System::Int32&))((::PBYTE)hIl2Cpp + GNBIOPLMKAB_LLGCOCLACNA_OFFSET))(this, ELEBBOIOJCJ, EEKCIKAFLJM, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::GNBIOPLMKAB KDOIGBANKCD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNBIOPLMKAB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBIOPLMKAB_KDOIGBANKCD_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBIOPLMKAB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::GNBIOPLMKAB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GNBIOPLMKAB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GNBIOPLMKAB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::GNBIOPLMKAB KDOIGBANKCD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::GNBIOPLMKAB EIFONLCJOPG)
	{
		return ((::GNBIOPLMKAB(*)(::FlatBuffers::ByteBuffer*, ::GNBIOPLMKAB))((::PBYTE)hIl2Cpp + GNBIOPLMKAB_KDOIGBANKCD_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
