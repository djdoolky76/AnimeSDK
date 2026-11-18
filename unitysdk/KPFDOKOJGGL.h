#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ABAMPPDJJPI.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPFDOKOJGGL_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define KPFDOKOJGGL_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x8198A0)
#define KPFDOKOJGGL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define KPFDOKOJGGL_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define KPFDOKOJGGL_KHLNCHFDMPF_1_OFFSET UNITYSDK_OFFSET(0x1BA7E5D0)
#define KPFDOKOJGGL_KHLNCHFDMPF_OFFSET UNITYSDK_OFFSET(0x1BA7E4D0)
#define KPFDOKOJGGL_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x8198E0)
#define KPFDOKOJGGL_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x819890)
#define KPFDOKOJGGL___INIT_OFFSET UNITYSDK_OFFSET(0x819870)

inline static constexpr unsigned int KPFDOKOJGGL_TypeDefinitionIndex = 14324;

struct alignas(8) KPFDOKOJGGL
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFDOKOJGGL_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPFDOKOJGGL___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFDOKOJGGL_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	::KPFDOKOJGGL BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPFDOKOJGGL(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPFDOKOJGGL_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	/*
	static ::KPFDOKOJGGL KHLNCHFDMPF(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::KPFDOKOJGGL EIFONLCJOPG)
	{
		return ((::KPFDOKOJGGL(*)(::FlatBuffers::ByteBuffer*, ::KPFDOKOJGGL))((::PBYTE)hIl2Cpp + KPFDOKOJGGL_KHLNCHFDMPF_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::ABAMPPDJJPI& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ABAMPPDJJPI&))((::PBYTE)hIl2Cpp + KPFDOKOJGGL_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFDOKOJGGL_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::KPFDOKOJGGL KHLNCHFDMPF_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::KPFDOKOJGGL(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KPFDOKOJGGL_KHLNCHFDMPF_1_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::ABAMPPDJJPI& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::ABAMPPDJJPI&, ::System::Int32&))((::PBYTE)hIl2Cpp + KPFDOKOJGGL_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}
};
