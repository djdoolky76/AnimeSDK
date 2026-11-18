#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/PICPDEPMJGA.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMNOBGGPKAG_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7D5820)
#define JMNOBGGPKAG_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7D5860)
#define JMNOBGGPKAG_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define JMNOBGGPKAG_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define JMNOBGGPKAG_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define JMNOBGGPKAG_KECJFEFPFIP_1_OFFSET UNITYSDK_OFFSET(0x18BD0C90)
#define JMNOBGGPKAG_KECJFEFPFIP_OFFSET UNITYSDK_OFFSET(0x18BD0C20)
#define JMNOBGGPKAG_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7D5810)
#define JMNOBGGPKAG___INIT_OFFSET UNITYSDK_OFFSET(0x7D57F0)

inline static constexpr unsigned int JMNOBGGPKAG_TypeDefinitionIndex = 12210;

struct alignas(8) JMNOBGGPKAG
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNOBGGPKAG_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMNOBGGPKAG___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNOBGGPKAG_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::JMNOBGGPKAG BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMNOBGGPKAG(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMNOBGGPKAG_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::JMNOBGGPKAG KECJFEFPFIP(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::JMNOBGGPKAG(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JMNOBGGPKAG_KECJFEFPFIP_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::PICPDEPMJGA> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::PICPDEPMJGA>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + JMNOBGGPKAG_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	/*
	static ::JMNOBGGPKAG KECJFEFPFIP_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::JMNOBGGPKAG EIFONLCJOPG)
	{
		return ((::JMNOBGGPKAG(*)(::FlatBuffers::ByteBuffer*, ::JMNOBGGPKAG))((::PBYTE)hIl2Cpp + JMNOBGGPKAG_KECJFEFPFIP_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNOBGGPKAG_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Nullable_1<::PICPDEPMJGA> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::PICPDEPMJGA>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JMNOBGGPKAG_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}
};
