#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MFFJPOBJPDM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MFFJPOBJPDM_CNIMPNICLOH_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MFFJPOBJPDM_FFMBGCLLCIF_OFFSET UNITYSDK_OFFSET(0x754920)
#define MFFJPOBJPDM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFFJPOBJPDM_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x7550C0)
#define MFFJPOBJPDM_IFDIOIOCGDP_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MFFJPOBJPDM_NKCNGLADFNA_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MFFJPOBJPDM_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754970)
#define MFFJPOBJPDM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B7F8A90)
#define MFFJPOBJPDM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MFFJPOBJPDM_TypeDefinitionIndex = 15693;

struct alignas(4) MFFJPOBJPDM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFJPOBJPDM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFFJPOBJPDM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* IFDIOIOCGDP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFJPOBJPDM_IFDIOIOCGDP_OFFSET))(this);
	}

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFJPOBJPDM_NLAIFNFGGMA_OFFSET))(this);
	}

	/*
	static ::MFFJPOBJPDM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MFFJPOBJPDM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MFFJPOBJPDM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 FFMBGCLLCIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFJPOBJPDM_FFMBGCLLCIF_OFFSET))(this);
	}

	::System::Int32 NKCNGLADFNA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFJPOBJPDM_NKCNGLADFNA_OFFSET))(this);
	}

	/*
	::MFFJPOBJPDM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFFJPOBJPDM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFFJPOBJPDM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFJPOBJPDM_GPBFENDAJMF_OFFSET))(this);
	}

	::System::String* CNIMPNICLOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFJPOBJPDM_CNIMPNICLOH_OFFSET))(this);
	}
};
