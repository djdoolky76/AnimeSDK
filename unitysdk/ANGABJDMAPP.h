#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IMMGDLLKGPA.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANGABJDMAPP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7ECB20)
#define ANGABJDMAPP_EBOCGOOMNOJ_1_OFFSET UNITYSDK_OFFSET(0x19BDBA80)
#define ANGABJDMAPP_EBOCGOOMNOJ_OFFSET UNITYSDK_OFFSET(0x19BDB980)
#define ANGABJDMAPP_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7ECB60)
#define ANGABJDMAPP_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define ANGABJDMAPP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ANGABJDMAPP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define ANGABJDMAPP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7ECB10)
#define ANGABJDMAPP___INIT_OFFSET UNITYSDK_OFFSET(0x7ECAF0)

inline static constexpr unsigned int ANGABJDMAPP_TypeDefinitionIndex = 13087;

struct alignas(8) ANGABJDMAPP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGABJDMAPP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANGABJDMAPP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Nullable_1<::IMMGDLLKGPA> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::IMMGDLLKGPA>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANGABJDMAPP_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	static ::ANGABJDMAPP EBOCGOOMNOJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::ANGABJDMAPP EIFONLCJOPG)
	{
		return ((::ANGABJDMAPP(*)(::FlatBuffers::ByteBuffer*, ::ANGABJDMAPP))((::PBYTE)hIl2Cpp + ANGABJDMAPP_EBOCGOOMNOJ_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGABJDMAPP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::ANGABJDMAPP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANGABJDMAPP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANGABJDMAPP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGABJDMAPP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::ANGABJDMAPP EBOCGOOMNOJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::ANGABJDMAPP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ANGABJDMAPP_EBOCGOOMNOJ_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::IMMGDLLKGPA> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::IMMGDLLKGPA>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ANGABJDMAPP_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}
};
