#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/OBBHIJMODBP.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAGLJMPGDAL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IAGLJMPGDAL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x80F570)
#define IAGLJMPGDAL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IAGLJMPGDAL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IAGLJMPGDAL_PDNKLLOOGKD_1_OFFSET UNITYSDK_OFFSET(0x1B619F90)
#define IAGLJMPGDAL_PDNKLLOOGKD_OFFSET UNITYSDK_OFFSET(0x1B619E90)
#define IAGLJMPGDAL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x80F5B0)
#define IAGLJMPGDAL___INIT_OFFSET UNITYSDK_OFFSET(0x80F550)

inline static constexpr unsigned int IAGLJMPGDAL_TypeDefinitionIndex = 10049;

struct alignas(8) IAGLJMPGDAL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGLJMPGDAL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAGLJMPGDAL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::IAGLJMPGDAL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAGLJMPGDAL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAGLJMPGDAL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::IAGLJMPGDAL PDNKLLOOGKD(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IAGLJMPGDAL EIFONLCJOPG)
	{
		return ((::IAGLJMPGDAL(*)(::FlatBuffers::ByteBuffer*, ::IAGLJMPGDAL))((::PBYTE)hIl2Cpp + IAGLJMPGDAL_PDNKLLOOGKD_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::OBBHIJMODBP& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::OBBHIJMODBP&))((::PBYTE)hIl2Cpp + IAGLJMPGDAL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::IAGLJMPGDAL PDNKLLOOGKD_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IAGLJMPGDAL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAGLJMPGDAL_PDNKLLOOGKD_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGLJMPGDAL_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAGLJMPGDAL_GHKKNCCLPAN_OFFSET))(this);
	}
};
