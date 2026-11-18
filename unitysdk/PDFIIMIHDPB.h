#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define PDFIIMIHDPB_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define PDFIIMIHDPB_EMPLKMIOBGN_OFFSET UNITYSDK_OFFSET(0x754B50)
#define PDFIIMIHDPB_FPADCPHECLH_OFFSET UNITYSDK_OFFSET(0x758780)
#define PDFIIMIHDPB_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define PDFIIMIHDPB_JLPJLCCLPIH_OFFSET UNITYSDK_OFFSET(0x755790)
#define PDFIIMIHDPB_JNMLEDGDDIL_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define PDFIIMIHDPB_MPNPPILEBFB_OFFSET UNITYSDK_OFFSET(0x754C20)
#define PDFIIMIHDPB_NFKFHJBEPGD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define PDFIIMIHDPB_NJIAGCOLGBA_OFFSET UNITYSDK_OFFSET(0x755D20)
#define PDFIIMIHDPB_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1AB40B60)
#define PDFIIMIHDPB_OEEIDNNDCOC_OFFSET UNITYSDK_OFFSET(0x754CD0)
#define PDFIIMIHDPB___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int PDFIIMIHDPB_TypeDefinitionIndex = 17768;

struct alignas(4) PDFIIMIHDPB
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDFIIMIHDPB___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::PDFIIMIHDPB BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::PDFIIMIHDPB(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 FPADCPHECLH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_FPADCPHECLH_OFFSET))(this);
	}

	::System::Int32 NFKFHJBEPGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_NFKFHJBEPGD_OFFSET))(this);
	}

	/*
	static ::PDFIIMIHDPB OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::PDFIIMIHDPB(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 JLPJLCCLPIH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_JLPJLCCLPIH_OFFSET))(this);
	}

	::System::Int32 MPNPPILEBFB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_MPNPPILEBFB_OFFSET))(this);
	}

	::System::Boolean OEEIDNNDCOC(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_OEEIDNNDCOC_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Boolean JNMLEDGDDIL(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_JNMLEDGDDIL_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 EMPLKMIOBGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_EMPLKMIOBGN_OFFSET))(this);
	}

	::System::Int32 NJIAGCOLGBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFIIMIHDPB_NJIAGCOLGBA_OFFSET))(this);
	}
};
