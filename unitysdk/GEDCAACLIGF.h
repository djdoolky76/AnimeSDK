#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GEDCAACLIGF_ADGNGPKLPNL_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GEDCAACLIGF_ADLOJGDOAOL_OFFSET UNITYSDK_OFFSET(0x758780)
#define GEDCAACLIGF_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GEDCAACLIGF_CGPNGMFCABM_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GEDCAACLIGF_EKOEIGIOCKD_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GEDCAACLIGF_FAOOOKAKOEJ_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GEDCAACLIGF_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GEDCAACLIGF_JHHPFGMDEPA_OFFSET UNITYSDK_OFFSET(0x755E40)
#define GEDCAACLIGF_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1A5AFB40)
#define GEDCAACLIGF_OGJNAPPNGNF_OFFSET UNITYSDK_OFFSET(0x755C70)
#define GEDCAACLIGF_PFCJOMGHBGN_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define GEDCAACLIGF___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GEDCAACLIGF_TypeDefinitionIndex = 13270;

struct alignas(4) GEDCAACLIGF
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDCAACLIGF_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEDCAACLIGF___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Int32 EKOEIGIOCKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDCAACLIGF_EKOEIGIOCKD_OFFSET))(this);
	}

	/*
	::GEDCAACLIGF BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GEDCAACLIGF(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEDCAACLIGF_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 OGJNAPPNGNF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDCAACLIGF_OGJNAPPNGNF_OFFSET))(this);
	}

	/*
	static ::GEDCAACLIGF OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::GEDCAACLIGF(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + GEDCAACLIGF_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 CGPNGMFCABM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDCAACLIGF_CGPNGMFCABM_OFFSET))(this);
	}

	::System::Int32 FAOOOKAKOEJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDCAACLIGF_FAOOOKAKOEJ_OFFSET))(this);
	}

	::System::Int32 PFCJOMGHBGN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDCAACLIGF_PFCJOMGHBGN_OFFSET))(this);
	}

	::System::Int32 ADGNGPKLPNL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDCAACLIGF_ADGNGPKLPNL_OFFSET))(this);
	}

	::System::Int32 JHHPFGMDEPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDCAACLIGF_JHHPFGMDEPA_OFFSET))(this);
	}

	::System::Int32 ADLOJGDOAOL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDCAACLIGF_ADLOJGDOAOL_OFFSET))(this);
	}
};
