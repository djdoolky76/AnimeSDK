#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OBOOLKLKFHG.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGCDKOBHJPM_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define PGCDKOBHJPM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x806250)
#define PGCDKOBHJPM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PGCDKOBHJPM_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PGCDKOBHJPM_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x806240)
#define PGCDKOBHJPM_PDEFEGDIGGE_1_OFFSET UNITYSDK_OFFSET(0x1AD97680)
#define PGCDKOBHJPM_PDEFEGDIGGE_OFFSET UNITYSDK_OFFSET(0x1AD97620)
#define PGCDKOBHJPM_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x806290)
#define PGCDKOBHJPM___INIT_OFFSET UNITYSDK_OFFSET(0x806220)

inline static constexpr unsigned int PGCDKOBHJPM_TypeDefinitionIndex = 17274;

struct alignas(8) PGCDKOBHJPM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCDKOBHJPM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGCDKOBHJPM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::OBOOLKLKFHG& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBOOLKLKFHG&, ::System::Int32&))((::PBYTE)hIl2Cpp + PGCDKOBHJPM_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	::PGCDKOBHJPM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGCDKOBHJPM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGCDKOBHJPM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCDKOBHJPM_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::PGCDKOBHJPM PDEFEGDIGGE(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PGCDKOBHJPM EIFONLCJOPG)
	{
		return ((::PGCDKOBHJPM(*)(::FlatBuffers::ByteBuffer*, ::PGCDKOBHJPM))((::PBYTE)hIl2Cpp + PGCDKOBHJPM_PDEFEGDIGGE_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OBOOLKLKFHG& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBOOLKLKFHG&))((::PBYTE)hIl2Cpp + PGCDKOBHJPM_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCDKOBHJPM_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PGCDKOBHJPM PDEFEGDIGGE_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PGCDKOBHJPM(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PGCDKOBHJPM_PDEFEGDIGGE_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
