#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MHMPGMLGOHM_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MHMPGMLGOHM_BLNNLLNEDJH_OFFSET UNITYSDK_OFFSET(0x757290)
#define MHMPGMLGOHM_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MHMPGMLGOHM_GFOMFLADJCH_OFFSET UNITYSDK_OFFSET(0x755C70)
#define MHMPGMLGOHM_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x756B10)
#define MHMPGMLGOHM_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x755DF0)
#define MHMPGMLGOHM_MEKEHBEEBPO_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MHMPGMLGOHM_MKOFOANLIDK_OFFSET UNITYSDK_OFFSET(0x756B90)
#define MHMPGMLGOHM_NLAIFNFGGMA_OFFSET UNITYSDK_OFFSET(0x754970)
#define MHMPGMLGOHM_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1BF5FA50)
#define MHMPGMLGOHM_OCOHAEFEKHH_OFFSET UNITYSDK_OFFSET(0x754B50)
#define MHMPGMLGOHM_PBDHGENIPKH_OFFSET UNITYSDK_OFFSET(0x755E40)
#define MHMPGMLGOHM_PHALDLDFONO_OFFSET UNITYSDK_OFFSET(0x754F10)
#define MHMPGMLGOHM___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MHMPGMLGOHM_TypeDefinitionIndex = 15742;

struct alignas(4) MHMPGMLGOHM
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHMPGMLGOHM___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::String* BLNNLLNEDJH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_BLNNLLNEDJH_OFFSET))(this);
	}

	/*
	::MHMPGMLGOHM BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MHMPGMLGOHM(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MKOFOANLIDK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_MKOFOANLIDK_OFFSET))(this);
	}

	::System::Int32 PBDHGENIPKH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_PBDHGENIPKH_OFFSET))(this);
	}

	::System::Int32 OCOHAEFEKHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_OCOHAEFEKHH_OFFSET))(this);
	}

	::System::String* PHALDLDFONO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_PHALDLDFONO_OFFSET))(this);
	}

	::System::Int32 MEKEHBEEBPO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_MEKEHBEEBPO_OFFSET))(this);
	}

	::System::Int32 GFOMFLADJCH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_GFOMFLADJCH_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_IGKFAFBGBAP_OFFSET))(this);
	}

	/*
	static ::MHMPGMLGOHM OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MHMPGMLGOHM(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::Int32 NLAIFNFGGMA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_NLAIFNFGGMA_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMPGMLGOHM_GPBFENDAJMF_OFFSET))(this);
	}
};
