#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DDCDIHBCBMN.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCNJEKHLAKO_BFBJEPELBCD_OFFSET UNITYSDK_OFFSET(0x754830)
#define HCNJEKHLAKO_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x7A8190)
#define HCNJEKHLAKO_FHHOMOHJNCG_1_OFFSET UNITYSDK_OFFSET(0x1746E940)
#define HCNJEKHLAKO_FHHOMOHJNCG_OFFSET UNITYSDK_OFFSET(0x1746E8E0)
#define HCNJEKHLAKO_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define HCNJEKHLAKO_GHKKNCCLPAN_OFFSET UNITYSDK_OFFSET(0x754790)
#define HCNJEKHLAKO_LLGCOCLACNA_OFFSET UNITYSDK_OFFSET(0x7A81E0)
#define HCNJEKHLAKO_PPOMNIFACOL_OFFSET UNITYSDK_OFFSET(0x7A81D0)
#define HCNJEKHLAKO___INIT_OFFSET UNITYSDK_OFFSET(0x7A8170)

inline static constexpr unsigned int HCNJEKHLAKO_TypeDefinitionIndex = 10462;

struct alignas(8) HCNJEKHLAKO
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KICBHLJMOJJ; // 0x20

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNJEKHLAKO_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCNJEKHLAKO___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 GHKKNCCLPAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNJEKHLAKO_GHKKNCCLPAN_OFFSET))(this);
	}

	/*
	::HCNJEKHLAKO BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCNJEKHLAKO(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCNJEKHLAKO_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::Il2CppArray<::System::Int32>* PPOMNIFACOL()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCNJEKHLAKO_PPOMNIFACOL_OFFSET))(this);
	}

	::System::Boolean LLGCOCLACNA(::System::Int32 MCOHLHMKLIP, ::DDCDIHBCBMN& EGEGIMGMJHN, ::System::Int32& ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DDCDIHBCBMN&, ::System::Int32&))((::PBYTE)hIl2Cpp + HCNJEKHLAKO_LLGCOCLACNA_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN, ABHBKFJKINO);
	}

	::System::Boolean BFBJEPELBCD(::System::Int32 HPMEONKHFGG, ::DDCDIHBCBMN& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DDCDIHBCBMN&))((::PBYTE)hIl2Cpp + HCNJEKHLAKO_BFBJEPELBCD_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	/*
	static ::HCNJEKHLAKO FHHOMOHJNCG(::FlatBuffers::ByteBuffer* GBOBNIDOGCP, ::HCNJEKHLAKO EIFONLCJOPG)
	{
		return ((::HCNJEKHLAKO(*)(::FlatBuffers::ByteBuffer*, ::HCNJEKHLAKO))((::PBYTE)hIl2Cpp + HCNJEKHLAKO_FHHOMOHJNCG_OFFSET))(GBOBNIDOGCP, EIFONLCJOPG);
	}
	*/

	/*
	static ::HCNJEKHLAKO FHHOMOHJNCG_1(::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::HCNJEKHLAKO(*)(::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HCNJEKHLAKO_FHHOMOHJNCG_1_OFFSET))(GBOBNIDOGCP);
	}
	*/
};
