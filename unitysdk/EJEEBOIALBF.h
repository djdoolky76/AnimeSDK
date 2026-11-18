#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JCLEIOJJIHC.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJEEBOIALBF_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EJEEBOIALBF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7FAA10)
#define EJEEBOIALBF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EJEEBOIALBF_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EJEEBOIALBF_LHHLBNKBMNO_1_OFFSET UNITYSDK_OFFSET(0x1A5661C0)
#define EJEEBOIALBF_LHHLBNKBMNO_OFFSET UNITYSDK_OFFSET(0x1A565EC0)
#define EJEEBOIALBF_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7FA9F0)
#define EJEEBOIALBF_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7FAA00)
#define EJEEBOIALBF___INIT_OFFSET UNITYSDK_OFFSET(0x7FA9D0)

inline static constexpr unsigned int EJEEBOIALBF_TypeDefinitionIndex = 10152;

struct alignas(8) EJEEBOIALBF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEEBOIALBF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJEEBOIALBF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::EJEEBOIALBF LHHLBNKBMNO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EJEEBOIALBF EIFONLCJOPG)
	{
		return ((::EJEEBOIALBF(*)(::FlatBuffers::ByteBuffer*, ::EJEEBOIALBF))((::PBYTE)hIl2Cpp + EJEEBOIALBF_LHHLBNKBMNO_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::JCLEIOJJIHC& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCLEIOJJIHC&, ::System::Int32&))((::PBYTE)hIl2Cpp + EJEEBOIALBF_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::JCLEIOJJIHC& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::JCLEIOJJIHC&))((::PBYTE)hIl2Cpp + EJEEBOIALBF_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEEBOIALBF_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::EJEEBOIALBF LHHLBNKBMNO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJEEBOIALBF(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJEEBOIALBF_LHHLBNKBMNO_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::EJEEBOIALBF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EJEEBOIALBF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EJEEBOIALBF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEEBOIALBF_GHKKNCCLPAN_OFFSET))(this);
	}
};
