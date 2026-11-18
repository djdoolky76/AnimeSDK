#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KNBLIANFOFA.h"
#include "unitysdk/System/Nullable_1.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCILMBMHCNK_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7EFAA0)
#define NCILMBMHCNK_ECCLJJKMFPD_OFFSET UNITYSDK_OFFSET(0x7EFA80)
#define NCILMBMHCNK_EFBECEHHGOO_OFFSET UNITYSDK_OFFSET(0x760C50)
#define NCILMBMHCNK_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define NCILMBMHCNK_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define NCILMBMHCNK_NOJMEBFJGBM_1_OFFSET UNITYSDK_OFFSET(0x19DBD8C0)
#define NCILMBMHCNK_NOJMEBFJGBM_OFFSET UNITYSDK_OFFSET(0x19DBD5C0)
#define NCILMBMHCNK_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7EFAE0)
#define NCILMBMHCNK___INIT_OFFSET UNITYSDK_OFFSET(0x7EFA60)

inline static constexpr unsigned int NCILMBMHCNK_TypeDefinitionIndex = 16372;

struct alignas(8) NCILMBMHCNK
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCILMBMHCNK_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCILMBMHCNK___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCILMBMHCNK_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::NCILMBMHCNK NOJMEBFJGBM(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::NCILMBMHCNK EIFONLCJOPG)
	{
		return ((::NCILMBMHCNK(*)(::FlatBuffers::ByteBuffer*, ::NCILMBMHCNK))((::PBYTE)hIl2Cpp + NCILMBMHCNK_NOJMEBFJGBM_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Nullable_1<::KNBLIANFOFA> ECCLJJKMFPD(::System::Int32 MCOHLHMKLIP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Nullable_1<::KNBLIANFOFA>(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + NCILMBMHCNK_ECCLJJKMFPD_OFFSET))(this, MCOHLHMKLIP, ABHBKFJKINO);
	}

	/*
	static ::NCILMBMHCNK NOJMEBFJGBM_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCILMBMHCNK(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCILMBMHCNK_NOJMEBFJGBM_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	/*
	::NCILMBMHCNK BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::NCILMBMHCNK(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NCILMBMHCNK_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Nullable_1<::KNBLIANFOFA> EFBECEHHGOO(::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::KNBLIANFOFA>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NCILMBMHCNK_EFBECEHHGOO_OFFSET))(this, HPMEONKHFGG);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCILMBMHCNK_PPOMNIFACOL_OFFSET))(this);
	}
};
