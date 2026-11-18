#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NKIKOGPBNOH_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8AF240)
#define NKIKOGPBNOH_FBLPLPNOHBH_1_OFFSET UNITYSDK_OFFSET(0x1D0CBC90)
#define NKIKOGPBNOH_FBLPLPNOHBH_OFFSET UNITYSDK_OFFSET(0x1D0CBC30)
#define NKIKOGPBNOH_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NKIKOGPBNOH_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NKIKOGPBNOH_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x8AF280)
#define NKIKOGPBNOH___INIT_OFFSET UNITYSDK_OFFSET(0x8AF220)

inline static constexpr unsigned int NKIKOGPBNOH_TypeDefinitionIndex = 14977;

struct alignas(8) NKIKOGPBNOH
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKOGPBNOH_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKIKOGPBNOH___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKOGPBNOH_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::NKIKOGPBNOH BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKIKOGPBNOH(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKIKOGPBNOH_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKIKOGPBNOH_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::NKIKOGPBNOH FBLPLPNOHBH(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NKIKOGPBNOH EIFONLCJOPG)
	{
		return ((::NKIKOGPBNOH(*)(::FlatBuffers::ByteBuffer*, ::NKIKOGPBNOH))((::PBYTE)hIl2Cpp + NKIKOGPBNOH_FBLPLPNOHBH_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::NKIKOGPBNOH FBLPLPNOHBH_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NKIKOGPBNOH(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NKIKOGPBNOH_FBLPLPNOHBH_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
