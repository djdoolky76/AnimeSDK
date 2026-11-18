#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFMLLBBHEKB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81C080)
#define JFMLLBBHEKB_BMNFFNICPLH_1_OFFSET UNITYSDK_OFFSET(0x1BAF65D0)
#define JFMLLBBHEKB_BMNFFNICPLH_OFFSET UNITYSDK_OFFSET(0x1BAF6560)
#define JFMLLBBHEKB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JFMLLBBHEKB_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JFMLLBBHEKB_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81C0C0)
#define JFMLLBBHEKB___INIT_OFFSET UNITYSDK_OFFSET(0x81C060)

inline static constexpr unsigned int JFMLLBBHEKB_TypeDefinitionIndex = 11106;

struct alignas(8) JFMLLBBHEKB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLLBBHEKB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFMLLBBHEKB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLLBBHEKB_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::JFMLLBBHEKB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFMLLBBHEKB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFMLLBBHEKB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JFMLLBBHEKB BMNFFNICPLH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JFMLLBBHEKB(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JFMLLBBHEKB_BMNFFNICPLH_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMLLBBHEKB_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::JFMLLBBHEKB BMNFFNICPLH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JFMLLBBHEKB EIFONLCJOPG)
	{
		return ((::JFMLLBBHEKB(*)(::FlatBuffers::ByteBuffer*, ::JFMLLBBHEKB))((::PBYTE)hIl2Cpp + JFMLLBBHEKB_BMNFFNICPLH_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/
};
