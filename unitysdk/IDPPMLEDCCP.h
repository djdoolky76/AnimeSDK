#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/HDGICGBGBIE.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IDPPMLEDCCP_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define IDPPMLEDCCP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x81BCF0)
#define IDPPMLEDCCP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define IDPPMLEDCCP_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define IDPPMLEDCCP_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x81BCD0)
#define IDPPMLEDCCP_LMFKPPJDCAJ_1_OFFSET UNITYSDK_OFFSET(0x1BAE6960)
#define IDPPMLEDCCP_LMFKPPJDCAJ_OFFSET UNITYSDK_OFFSET(0x1BAE68F0)
#define IDPPMLEDCCP_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x81BCE0)
#define IDPPMLEDCCP___INIT_OFFSET UNITYSDK_OFFSET(0x81BCB0)

inline static constexpr unsigned int IDPPMLEDCCP_TypeDefinitionIndex = 15605;

struct alignas(8) IDPPMLEDCCP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPPMLEDCCP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDPPMLEDCCP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPPMLEDCCP_GHKKNCCLPAN_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::HDGICGBGBIE& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDGICGBGBIE&, ::System::Int32&))((::PBYTE)hIl2Cpp + IDPPMLEDCCP_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	/*
	static ::IDPPMLEDCCP LMFKPPJDCAJ(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IDPPMLEDCCP(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDPPMLEDCCP_LMFKPPJDCAJ_OFFSET))(GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDPPMLEDCCP_PPOMNIFACOL_OFFSET))(this);
	}

	/*
	static ::IDPPMLEDCCP LMFKPPJDCAJ_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::IDPPMLEDCCP EIFONLCJOPG)
	{
		return ((::IDPPMLEDCCP(*)(::FlatBuffers::ByteBuffer*, ::IDPPMLEDCCP))((::PBYTE)hIl2Cpp + IDPPMLEDCCP_LMFKPPJDCAJ_1_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::HDGICGBGBIE& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::HDGICGBGBIE&))((::PBYTE)hIl2Cpp + IDPPMLEDCCP_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	::IDPPMLEDCCP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::IDPPMLEDCCP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IDPPMLEDCCP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/
};
