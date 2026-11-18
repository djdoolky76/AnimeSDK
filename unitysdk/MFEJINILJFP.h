#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }
namespace System { class String; }

#define MFEJINILJFP_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define MFEJINILJFP_BKIFDEKEHOH_OFFSET UNITYSDK_OFFSET(0x755D20)
#define MFEJINILJFP_EPOKNBKPGCI_OFFSET UNITYSDK_OFFSET(0x755A00)
#define MFEJINILJFP_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define MFEJINILJFP_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x754920)
#define MFEJINILJFP_OAKBBAANKCP_OFFSET UNITYSDK_OFFSET(0x1B313820)
#define MFEJINILJFP_OMCMFGBLKMM_OFFSET UNITYSDK_OFFSET(0x756D50)
#define MFEJINILJFP_PBKIMLNPCLI_OFFSET UNITYSDK_OFFSET(0x754C80)
#define MFEJINILJFP___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int MFEJINILJFP_TypeDefinitionIndex = 16771;

struct alignas(4) MFEJINILJFP
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEJINILJFP_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFEJINILJFP___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	/*
	::MFEJINILJFP BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::MFEJINILJFP(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFEJINILJFP_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::String* EPOKNBKPGCI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEJINILJFP_EPOKNBKPGCI_OFFSET))(this);
	}

	::System::Int32 PBKIMLNPCLI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEJINILJFP_PBKIMLNPCLI_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEJINILJFP_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 BKIFDEKEHOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEJINILJFP_BKIFDEKEHOH_OFFSET))(this);
	}

	/*
	static ::MFEJINILJFP OAKBBAANKCP(::System::Int32 PFJFICMOJKP, ::System::Int32 MCOHLHMKLIP, ::FlatBuffers::ByteBuffer* DHEOPJNHFJP, ::System::Int32& ABHBKFJKINO)
	{
		return ((::MFEJINILJFP(*)(::System::Int32, ::System::Int32, ::FlatBuffers::ByteBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + MFEJINILJFP_OAKBBAANKCP_OFFSET))(PFJFICMOJKP, MCOHLHMKLIP, DHEOPJNHFJP, ABHBKFJKINO);
	}
	*/

	::System::String* OMCMFGBLKMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFEJINILJFP_OMCMFGBLKMM_OFFSET))(this);
	}
};
