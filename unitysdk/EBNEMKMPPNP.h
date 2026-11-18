#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/IIGBFEHOCNJ.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBNEMKMPPNP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define EBNEMKMPPNP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7F5B50)
#define EBNEMKMPPNP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define EBNEMKMPPNP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define EBNEMKMPPNP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7F5B40)
#define EBNEMKMPPNP_PPCJNMMDMGO_1_OFFSET UNITYSDK_OFFSET(0x1A195DB0)
#define EBNEMKMPPNP_PPCJNMMDMGO_OFFSET UNITYSDK_OFFSET(0x1A195D40)
#define EBNEMKMPPNP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7F5B30)
#define EBNEMKMPPNP___INIT_OFFSET UNITYSDK_OFFSET(0x7F5B10)

inline static constexpr unsigned int EBNEMKMPPNP_TypeDefinitionIndex = 12823;

struct alignas(8) EBNEMKMPPNP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNEMKMPPNP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBNEMKMPPNP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNEMKMPPNP_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	static ::EBNEMKMPPNP PPCJNMMDMGO(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBNEMKMPPNP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBNEMKMPPNP_PPCJNMMDMGO_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::IIGBFEHOCNJ& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IIGBFEHOCNJ&))((::PBYTE)hIl2Cpp + EBNEMKMPPNP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBNEMKMPPNP_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::IIGBFEHOCNJ& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::IIGBFEHOCNJ&, ::System::Int32&))((::PBYTE)hIl2Cpp + EBNEMKMPPNP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::EBNEMKMPPNP PPCJNMMDMGO_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::EBNEMKMPPNP EIFONLCJOPG)
	{
		return ((::EBNEMKMPPNP(*)(::FlatBuffers::ByteBuffer*, ::EBNEMKMPPNP))((::PBYTE)hIl2Cpp + EBNEMKMPPNP_PPCJNMMDMGO_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	::EBNEMKMPPNP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::EBNEMKMPPNP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EBNEMKMPPNP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
