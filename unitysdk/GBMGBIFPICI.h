#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlatBuffers/Table.h"
#include "unitysdk/System/ValueType.h"

namespace FlatBuffers { class ByteBuffer; }

#define GBMGBIFPICI_BHGNCCMLJKB_OFFSET UNITYSDK_OFFSET(0x754A40)
#define GBMGBIFPICI_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define GBMGBIFPICI_HDAOFEPIKAH_OFFSET UNITYSDK_OFFSET(0x755790)
#define GBMGBIFPICI_JALDBPABMEC_OFFSET UNITYSDK_OFFSET(0x754B50)
#define GBMGBIFPICI_JCJOLBBIBKF_OFFSET UNITYSDK_OFFSET(0x756B90)
#define GBMGBIFPICI_MPMFDPGLELG_OFFSET UNITYSDK_OFFSET(0x754970)
#define GBMGBIFPICI_NPKMIBLOEEO_OFFSET UNITYSDK_OFFSET(0x754FE0)
#define GBMGBIFPICI_ONFGLHFDEED_OFFSET UNITYSDK_OFFSET(0x754C80)
#define GBMGBIFPICI_PPFDJKOLPAD_OFFSET UNITYSDK_OFFSET(0x755D20)
#define GBMGBIFPICI___INIT_OFFSET UNITYSDK_OFFSET(0x754910)

inline static constexpr unsigned int GBMGBIFPICI_TypeDefinitionIndex = 16450;

struct alignas(4) GBMGBIFPICI
{
	::FlatBuffers::Table KHCKCFFKIGG; // 0x10

	::FlatBuffers::ByteBuffer* get_ByteBuffer()
	{
		return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGBIFPICI_GET_BYTEBUFFER_OFFSET))(this);
	}

	::System::Void __init(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBMGBIFPICI___INIT_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}

	::System::Boolean NPKMIBLOEEO(::System::Int32 HPMEONKHFGG, ::System::Int32& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + GBMGBIFPICI_NPKMIBLOEEO_OFFSET))(this, HPMEONKHFGG, EGEGIMGMJHN);
	}

	::System::Int32 JCJOLBBIBKF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGBIFPICI_JCJOLBBIBKF_OFFSET))(this);
	}

	::System::Int32 JALDBPABMEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGBIFPICI_JALDBPABMEC_OFFSET))(this);
	}

	/*
	::GBMGBIFPICI BHGNCCMLJKB(::System::Int32 FLPJIBCILFC, ::FlatBuffers::ByteBuffer* GBOBNIDOGCP)
	{
		return ((::GBMGBIFPICI(*)(::PVOID, ::System::Int32, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GBMGBIFPICI_BHGNCCMLJKB_OFFSET))(this, FLPJIBCILFC, GBOBNIDOGCP);
	}
	*/

	::System::Int32 MPMFDPGLELG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGBIFPICI_MPMFDPGLELG_OFFSET))(this);
	}

	::System::Int32 HDAOFEPIKAH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGBIFPICI_HDAOFEPIKAH_OFFSET))(this);
	}

	::System::Int32 ONFGLHFDEED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGBIFPICI_ONFGLHFDEED_OFFSET))(this);
	}

	::System::Int32 PPFDJKOLPAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBMGBIFPICI_PPFDJKOLPAD_OFFSET))(this);
	}
};
