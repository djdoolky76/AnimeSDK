#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/APFLNKKMNAP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNGKGGAMMCJ_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define FNGKGGAMMCJ_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x809A00)
#define FNGKGGAMMCJ_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define FNGKGGAMMCJ_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define FNGKGGAMMCJ_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x809A50)
#define FNGKGGAMMCJ_MIHHLCKOOHI_1_OFFSET UNITYSDK_OFFSET(0x1B10BB00)
#define FNGKGGAMMCJ_MIHHLCKOOHI_OFFSET UNITYSDK_OFFSET(0x1B10BAA0)
#define FNGKGGAMMCJ_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x809A40)
#define FNGKGGAMMCJ___INIT_OFFSET UNITYSDK_OFFSET(0x8099E0)

inline static constexpr unsigned int FNGKGGAMMCJ_TypeDefinitionIndex = 11915;

struct alignas(8) FNGKGGAMMCJ
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKGGAMMCJ_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNGKGGAMMCJ___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::FNGKGGAMMCJ BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNGKGGAMMCJ(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNGKGGAMMCJ_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKGGAMMCJ_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::FNGKGGAMMCJ MIHHLCKOOHI(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::FNGKGGAMMCJ EIFONLCJOPG)
	{
		return ((::FNGKGGAMMCJ(*)(::FlatBuffers::ByteBuffer*, ::FNGKGGAMMCJ))((::PBYTE)hIl2Cpp + FNGKGGAMMCJ_MIHHLCKOOHI_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::FNGKGGAMMCJ MIHHLCKOOHI_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::FNGKGGAMMCJ(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FNGKGGAMMCJ_MIHHLCKOOHI_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::APFLNKKMNAP& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::APFLNKKMNAP&, ::System::Int32&))((::PBYTE)hIl2Cpp + FNGKGGAMMCJ_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::APFLNKKMNAP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::APFLNKKMNAP&))((::PBYTE)hIl2Cpp + FNGKGGAMMCJ_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGKGGAMMCJ_GHKKNCCLPAN_OFFSET))(this);
	}
};
