#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJAFLOIAGBA_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AF620)
#define PJAFLOIAGBA_GCGNDICLOJB_1_OFFSET UNITYSDK_OFFSET(0x1D0DF130)
#define PJAFLOIAGBA_GCGNDICLOJB_OFFSET UNITYSDK_OFFSET(0x1D0DF0C0)
#define PJAFLOIAGBA_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PJAFLOIAGBA_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define PJAFLOIAGBA_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AF660)
#define PJAFLOIAGBA___INIT_OFFSET UNITYSDK_OFFSET(0x8AF600)

inline static constexpr unsigned int PJAFLOIAGBA_TypeDefinitionIndex = 13596;

struct alignas(8) PJAFLOIAGBA
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAFLOIAGBA_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJAFLOIAGBA___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAFLOIAGBA_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::PJAFLOIAGBA GCGNDICLOJB(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJAFLOIAGBA(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJAFLOIAGBA_GCGNDICLOJB_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	static ::PJAFLOIAGBA GCGNDICLOJB_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::PJAFLOIAGBA EIFONLCJOPG)
	{
		return ((::PJAFLOIAGBA(*)(::FlatBuffers::ByteBuffer*, ::PJAFLOIAGBA))((::PBYTE)hIl2Cpp + PJAFLOIAGBA_GCGNDICLOJB_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::PJAFLOIAGBA BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PJAFLOIAGBA(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PJAFLOIAGBA_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJAFLOIAGBA_PPOMNIFACOL_OFFSET))(this);
	}
};
