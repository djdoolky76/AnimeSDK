#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/NDKEOHEJEMJ.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIEPHBLPFCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7E6400)
#define MIEPHBLPFCP_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7E63D0)
#define MIEPHBLPFCP_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define MIEPHBLPFCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MIEPHBLPFCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define MIEPHBLPFCP_MCMLGGDIGAC_1_OFFSET UNITYSDK_OFFSET(0x195A3EB0)
#define MIEPHBLPFCP_MCMLGGDIGAC_OFFSET UNITYSDK_OFFSET(0x195A3B50)
#define MIEPHBLPFCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7E63F0)
#define MIEPHBLPFCP___INIT_OFFSET UNITYSDK_OFFSET(0x7E63B0)

inline static constexpr unsigned int MIEPHBLPFCP_TypeDefinitionIndex = 12753;

struct alignas(8) MIEPHBLPFCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEPHBLPFCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIEPHBLPFCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	static ::MIEPHBLPFCP MCMLGGDIGAC(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::MIEPHBLPFCP EIFONLCJOPG)
	{
		return ((::MIEPHBLPFCP(*)(::FlatBuffers::ByteBuffer*, ::MIEPHBLPFCP))((::PBYTE)hIl2Cpp + MIEPHBLPFCP_MCMLGGDIGAC_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Nullable_1<::NDKEOHEJEMJ> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::NDKEOHEJEMJ>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MIEPHBLPFCP_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEPHBLPFCP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Nullable_1<::NDKEOHEJEMJ> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::NDKEOHEJEMJ>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIEPHBLPFCP_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	/*
	::MIEPHBLPFCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIEPHBLPFCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIEPHBLPFCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIEPHBLPFCP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::MIEPHBLPFCP MCMLGGDIGAC_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MIEPHBLPFCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MIEPHBLPFCP_MCMLGGDIGAC_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
